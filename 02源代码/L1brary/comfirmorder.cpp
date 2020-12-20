#include "comfirmorder.h"
#include "ui_comfirmorder.h"
#include "connection.h"
#include "selectoption.h"

comfirmOrder::comfirmOrder(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::comfirmOrder)
{
    ui->setupUi(this);
    model = new QSqlTableModel(this);
    // 设置编辑策略
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    ui->tableView->setModel(model);
}

comfirmOrder::~comfirmOrder()
{
    delete ui;
}

void comfirmOrder::on_radioButton_rBorrowList_clicked()
{
    model->setTable("rBorrow");
    model->select();
}

void comfirmOrder::on_radioButton_rRenewList_clicked()
{
    model->setTable("rRenew");
    model->select();
}

void comfirmOrder::on_radioButton_rReturnList_clicked()
{
    model->setTable("rReturn");
    model->select();
}

void comfirmOrder::on_pushButton_comfrim_clicked()
{
    QString tableName = model->tableName();
    QSqlQuery query(db);
    int curRow = ui->tableView->currentIndex().row();
    QModelIndex index = model->index(curRow, 0);
    QString bid = model->data(index).toString(); //书号
    index = model->index(curRow, 1);
    QString sid = model->data(index).toString(); //学号
    QDateTime current_date_time = QDateTime::currentDateTime();
    QString current_date = current_date_time.toString("yyyy-MM-dd hh:mm:ss"); //当前时间

    if (QString::compare(tableName, "rBorrow") == 0) {
        query.exec(QString("call libBorrow(\"%1\", \"%2\", \"%3\", @outval)").arg(bid).arg(sid).arg(current_date));
        query.exec("select @outval");
        if (query.next()) {
            int returnCode = query.value(0).toInt();
            if (returnCode == 3) {
                QMessageBox::information(NULL, "失败", "没有人借过这本书");
            } else if(returnCode == 6) {
                QMessageBox::information(NULL, "失败", "书尚未归还，无法借出");
            } else {
                QMessageBox::information(NULL, "成功", "已成功确认借书");
            }
        }
    } else if (QString::compare(tableName, "rRenew") == 0) {
        query.exec(QString("call libRenew(\"%1\", \"%2\", \"%3\", @outval)").arg(bid).arg(sid).arg(current_date));
        query.exec("select @outval");
        if (query.next()) {
            int returnCode = query.value(0).toInt();
            if (returnCode == 4) {
                QMessageBox::information(NULL, "失败", "没有人借过这本书");
            } else {
                QMessageBox::information(NULL, "成功", "已成功确认续订");
            }
        }
    } else if (QString::compare(tableName, "rReturn") == 0) {
        query.exec(QString("call libReturn(\"%1\", \"%2\", \"%3\", @outval)").arg(bid).arg(sid).arg(current_date));
        query.exec("select @outval");
        if (query.next()) {
            int returnCode = query.value(0).toInt();
            if (returnCode == 5) {
                QMessageBox::information(NULL, "失败", "图书已在馆内，无法归还");
            } else {
                QMessageBox::information(NULL, "成功", "已成功确认归还");
            }
        }
    } else {
        qDebug() << tableName;
    }
}

void comfirmOrder::on_pushButton_exit_clicked()
{
    selectOption *win = new selectOption;
    win->show();
    delete this;
}
