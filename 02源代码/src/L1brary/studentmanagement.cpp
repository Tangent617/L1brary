#include "studentmanagement.h"
#include "ui_studentmanagement.h"
#include "connection.h"
#include "selectoption.h"

studentManagement::studentManagement(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::studentManagement)
{
    ui->setupUi(this);
    model = new QSqlTableModel(this);
    model->setTable("stu_without_password");
    model->select();
    // 设置编辑策略
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    ui->tableView->setModel(model);
}

studentManagement::~studentManagement()
{
    delete ui;
}

void studentManagement::on_pushButton_submit_clicked()
{
    // 开始事务操作
    model->database().transaction();
    if (model->submitAll()) {
        model->database().commit(); //提交
    } else {
        model->database().rollback(); //回滚
        QMessageBox::warning(this, tr("tableModel"),
        tr("数据库错误: %1").arg(model->lastError().text()));
    }
}

void studentManagement::on_pushButton_cencel_clicked()
{
    model->revertAll();
}

void studentManagement::on_pushButton_select_clicked()
{
    QString name = ui->lineEdit_stuName->text();
    if (name.length()) {
        //根据姓名进行筛选， 一定要使用单引号
        model->setFilter(QString("stuName like '%%1%'").arg(name));
        model->select();
    } else {
        QMessageBox::warning(this, tr("Warning"),tr("姓名不能为空") );
    }
}

void studentManagement::on_pushButton_showAllStudent_clicked()
{
    model->setTable("stu_without_password");
    model->select();
}

void studentManagement::on_pushButton_ascendingOrder_clicked()
{
    //id 属性， 即第 0 列， 升序排列
    model->setSort(0, Qt::AscendingOrder);
    model->select();
}

void studentManagement::on_pushButton_descendingOrder_clicked()
{
    model->setSort(0, Qt::DescendingOrder);
    model->select();
}

void studentManagement::on_pushButton_deleteStudent_clicked()
{
    // 获取选中的行
    int curRow = ui->tableView->currentIndex().row();
    // 删除该行
    model->removeRow(curRow);
    int ok = QMessageBox::warning(this,tr("删除当前行!"),
    tr("你确定删除当前行吗？ "), QMessageBox::Yes, QMessageBox::No);
    if (ok == QMessageBox::No) { // 如果不删除， 则撤销
        model->revertAll();
    } else { // 否则提交， 在数据库中删除该行
        model->submitAll();
    }
}

void studentManagement::on_pushButton_addStudent_clicked()
{
    // 获得表的行数
    int rowNum = model->rowCount();
    // 添加一行
    model->insertRow(rowNum);
    model->setData(model->index(rowNum,0),rowNum+1);
}

void studentManagement::on_pushButton_exit_clicked()
{
    selectOption *win = new selectOption;
    win->show();
    delete this;
}
