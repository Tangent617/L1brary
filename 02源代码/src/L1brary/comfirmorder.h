#ifndef COMFIRMORDER_H
#define COMFIRMORDER_H

#include <QMainWindow>
#include <QSqlQuery>
#include <QSqlTableModel>
#include <QSqlError>
#include <QMessageBox>
#include <QDateTime>
#include <QDebug>

namespace Ui {
class comfirmOrder;
}
class QSqlTableModel;

class comfirmOrder : public QMainWindow
{
    Q_OBJECT

public:
    explicit comfirmOrder(QWidget *parent = nullptr);
    ~comfirmOrder();

private slots:
    void on_radioButton_rBorrowList_clicked();

    void on_radioButton_rRenewList_clicked();

    void on_radioButton_rReturnList_clicked();

    void on_pushButton_comfrim_clicked();

    void on_pushButton_exit_clicked();

private:
    Ui::comfirmOrder *ui;
    QSqlTableModel *model;
};

#endif // COMFIRMORDER_H
