#ifndef PREORDERBOOKS_H
#define PREORDERBOOKS_H

#include <QMainWindow>
#include <QSqlQuery>
#include <QSqlTableModel>
#include <QSqlError>
#include <QMessageBox>
#include <QDateTime>

namespace Ui {
class preorderBooks;
}
class QSqlTableModel;

class preorderBooks : public QMainWindow
{
    Q_OBJECT

public:
    explicit preorderBooks(QWidget *parent = nullptr);
    ~preorderBooks();
    QString sid;

private slots:
    void on_pushButton_select_clicked();

    void on_pushButton_showAllBooks_clicked();

    void on_pushButton_myBooks_clicked();

    void on_pushButton_rBorrow_clicked();

    void on_pushButton_rRenew_clicked();

    void on_pushButton_rReturn_clicked();

    void on_pushButton_exit_clicked();

private:
    Ui::preorderBooks *ui;
    QSqlTableModel *model;

};

#endif // PREORDERBOOKS_H
