#include "preorderbooks.h"
#include "ui_preorderbooks.h"
#include "connection.h"
#include "mainwindow.h"

preorderBooks::preorderBooks(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::preorderBooks)
{
    ui->setupUi(this);
    model = new QSqlTableModel(this);
    model->setTable("book");
    model->select();
    // 设置编辑策略
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    ui->tableView->setModel(model);
}

preorderBooks::~preorderBooks()
{
    delete ui;
}

void preorderBooks::on_pushButton_select_clicked()
{
    QString name = ui->lineEdit_bookName->text();
    if (name.length()) {
        //根据姓名进行筛选， 一定要使用单引号
        model->setFilter(QString("Title like '%%1%'").arg(name));
        model->select();
    } else {
        QMessageBox::warning(this, tr("Warning"),tr("书名不能为空") );
    }
}

void preorderBooks::on_pushButton_showAllBooks_clicked()
{
    model->setTable("book");
    model->select();
}

void preorderBooks::on_pushButton_myBooks_clicked()
{
    QSqlQuery query(db);
    query.exec(QString("create view myBorrow as select * from borrow where stuid = %1;").arg(sid));
    query.exec(QString("create view myReturn as select * from `return` where stuid = %1;").arg(sid));
    query.exec(QString("create view myBooks as select * from book where bookid in (select myBorrow.bookid from myBorrow where myBorrow.bookid not in (select bookid from myReturn));"));
    model -> setTable("myBooks");
    model -> select();
    query.exec(QString("drop view myBorrow"));
    query.exec(QString("drop view myReturn"));
    query.exec(QString("drop view myBooks"));
}

void preorderBooks::on_pushButton_rBorrow_clicked()
{
    int curRow = ui->tableView->currentIndex().row();
    QModelIndex index = model->index(curRow, 0);
    QString bid = model->data(index).toString();
    QDateTime current_date_time = QDateTime::currentDateTime();
    QString current_date = current_date_time.toString("yyyy-MM-dd hh:mm:ss");

    QSqlQuery query(db);
    query.exec(QString("call stuBorrow(\"%1\", \"%2\", \"%3\", @outval)").arg(bid).arg(sid).arg(current_date));
    query.exec("select @outval");
    if (query.next()) {
        int returnCode = query.value(0).toInt();
        if (returnCode == 1) {
            QMessageBox::information(NULL, "失败", "该书已被预订");
        } else {
            QMessageBox::information(NULL, "成功", "您已成功预订借阅此书");
        }
    }
}

void preorderBooks::on_pushButton_rRenew_clicked()
{
    int curRow = ui->tableView->currentIndex().row();
    QModelIndex index = model->index(curRow, 0);
    QString bid = model->data(index).toString();
    QDateTime current_date_time = QDateTime::currentDateTime();
    QString current_date = current_date_time.toString("yyyy-MM-dd hh:mm:ss");

    QSqlQuery query(db);
    query.exec(QString("call stuRenew(\"%1\", \"%2\", \"%3\", @outval)").arg(bid).arg(sid).arg(current_date));
    query.exec("select @outval");
    if (query.next()) {
        int returnCode = query.value(0).toInt();
        if (returnCode == 1) {
            QMessageBox::information(NULL, "失败", "该书已被预订");
        } else if (returnCode == 2) {
            QMessageBox::information(NULL, "失败", "您没有借阅过此书");
        } else {
            QMessageBox::information(NULL, "成功", "您已成功预订续借此书");
        }
    }
}

void preorderBooks::on_pushButton_rReturn_clicked()
{
    int curRow = ui->tableView->currentIndex().row();
    QModelIndex index = model->index(curRow, 0);
    QString bid = model->data(index).toString();
    QDateTime current_date_time = QDateTime::currentDateTime();
    QString current_date = current_date_time.toString("yyyy-MM-dd hh:mm:ss");

    QSqlQuery query(db);
    query.exec(QString("call stuReturn(\"%1\", \"%2\", \"%3\", @outval)").arg(bid).arg(sid).arg(current_date));
    query.exec("select @outval");
    if (query.next()) {
        int returnCode = query.value(0).toInt();
        if (returnCode == 2) {
            QMessageBox::information(NULL, "失败", "您没有借阅过此书");
        } else {
            QMessageBox::information(NULL, "成功", "您已成功预订归还此书");
        }
    }
}

void preorderBooks::on_pushButton_exit_clicked()
{
    MainWindow *win = new MainWindow;
    win->show();
    delete this;
}
