#ifndef BOOKMANAGEMENT_H
#define BOOKMANAGEMENT_H

#include <QMainWindow>
#include <QSqlQuery>
#include <QSqlTableModel>
#include <QSqlError>
#include <QMessageBox>
#include <QDateTime>
#include <QDebug>

namespace Ui {
class bookManagement;
}
class QSqlTableModel;

class bookManagement : public QMainWindow
{
    Q_OBJECT

public:
    explicit bookManagement(QWidget *parent = nullptr);
    ~bookManagement();

private slots:
    void on_pushButton_submit_clicked();

    void on_pushButton_cencel_clicked();

    void on_pushButton_select_clicked();

    void on_pushButton_showAll_clicked();

    void on_pushButton_ascendingOrder_clicked();

    void on_pushButton_descendingOrder_clicked();

    void on_pushButton_deleteBook_clicked();

    void on_pushButton_addBook_clicked();

    void on_pushButton_exit_clicked();

private:
    Ui::bookManagement *ui;
    QSqlTableModel *model;
};

#endif // BOOKMANAGEMENT_H
