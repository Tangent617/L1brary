#ifndef STUDENTMANAGEMENT_H
#define STUDENTMANAGEMENT_H

#include <QMainWindow>
#include <QSqlQuery>
#include <QSqlTableModel>
#include <QSqlError>
#include <QMessageBox>
#include <QDateTime>
#include <QDebug>

namespace Ui {
class studentManagement;
}
class QSqlTableModel;

class studentManagement : public QMainWindow
{
    Q_OBJECT

public:
    explicit studentManagement(QWidget *parent = nullptr);
    ~studentManagement();

private slots:
    void on_pushButton_submit_clicked();

    void on_pushButton_cencel_clicked();

    void on_pushButton_select_clicked();

    void on_pushButton_showAllStudent_clicked();

    void on_pushButton_ascendingOrder_clicked();

    void on_pushButton_descendingOrder_clicked();

    void on_pushButton_deleteStudent_clicked();

    void on_pushButton_addStudent_clicked();

    void on_pushButton_exit_clicked();

private:
    Ui::studentManagement *ui;
    QSqlTableModel *model;
};

#endif // STUDENTMANAGEMENT_H
