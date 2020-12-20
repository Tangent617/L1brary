#include "bookmanagement.h"
#include "ui_bookmanagement.h"
#include "connection.h"
#include "selectoption.h"

bookManagement::bookManagement(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::bookManagement)
{
    ui->setupUi(this);
    model = new QSqlTableModel(this);
    model->setTable("book");
    model->select();
    // 设置编辑策略
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    ui->tableView->setModel(model);
}

bookManagement::~bookManagement()
{
    delete ui;
}

void bookManagement::on_pushButton_submit_clicked()
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

void bookManagement::on_pushButton_cencel_clicked()
{
    model->revertAll();
}

void bookManagement::on_pushButton_select_clicked()
{
    QString name = ui->lineEdit_bookName->text();
    if (name.length()) {
        //根据书名进行筛选， 一定要使用单引号
        model->setFilter(QString("Title like '%%1%'").arg(name));
        model->select();
    } else {
        QMessageBox::warning(this, tr("Warning"),tr("书名不能为空") );
    }
}

void bookManagement::on_pushButton_showAll_clicked()
{
    model->setTable("book");
    model->select();
}

void bookManagement::on_pushButton_ascendingOrder_clicked()
{
    //id 属性， 即第 0 列， 升序排列
    model->setSort(0, Qt::AscendingOrder);
    model->select();
}

void bookManagement::on_pushButton_descendingOrder_clicked()
{
    model->setSort(0, Qt::DescendingOrder);
    model->select();
}

void bookManagement::on_pushButton_deleteBook_clicked()
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

void bookManagement::on_pushButton_addBook_clicked()
{
    // 获得表的行数
    int rowNum = model->rowCount();
    // 添加一行
    model->insertRow(rowNum);
    model->setData(model->index(rowNum,0), rowNum+1);
}

void bookManagement::on_pushButton_exit_clicked()
{
    selectOption *win = new selectOption;
    win->show();
    delete this;
}
