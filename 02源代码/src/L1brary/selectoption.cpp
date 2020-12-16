#include "selectoption.h"
#include "ui_selectoption.h"
#include "comfirmorder.h"
#include "bookmanagement.h"
#include "studentmanagement.h"
#include "mainwindow.h"

selectOption::selectOption(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::selectOption)
{
    ui->setupUi(this);
}

selectOption::~selectOption()
{
    delete ui;
}

void selectOption::on_pushButton_confrim_clicked()
{
    comfirmOrder *win = new comfirmOrder;
    win->show();
    this->close();
}

void selectOption::on_pushButton_modifyBooks_clicked()
{
    bookManagement *win = new bookManagement;
    win->show();
    this->close();
}

void selectOption::on_pushButton_modifyStudent_clicked()
{
    studentManagement *win = new studentManagement;
    win->show();
    this->close();
}

void selectOption::on_pushButton_exit_clicked()
{
    MainWindow *win = new MainWindow;
    win->show();
    delete this;
}
