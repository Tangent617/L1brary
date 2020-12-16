#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "connection.h"
#include "preorderbooks.h"
#include "selectoption.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_stuLogin_clicked()
{
    QString id = ui->lineEdit_id->text();
    QString password = ui->lineEdit_password->text();
    QSqlQuery query(db);
    query.exec(QString("select * from student where stuid = %1 and password = %2;").arg(id).arg(password));
    if (query.next()) {
        preorderBooks *win = new preorderBooks;
        win->sid = id;
        win->show();
        this->close();
    } else {
        QMessageBox::information(NULL, "提示", "用户名或密码错误");
    }
}

void MainWindow::on_pushButton_libLogin_clicked()
{
    QString id = ui->lineEdit_id->text();
    QString password = ui->lineEdit_password->text();
    QSqlQuery query(db);
    query.exec(QString("select * from librarian where libid = %1 and password = %2;").arg(id).arg(password));
    if (query.next()) {
        selectOption *win = new selectOption;
        win -> show();
        this -> close();
    } else {
        QMessageBox::information(NULL, "提示", "用户名或密码错误");
    }
}
