#ifndef SELECTOPTION_H
#define SELECTOPTION_H

#include <QMainWindow>

namespace Ui {
class selectOption;
}

class selectOption : public QMainWindow
{
    Q_OBJECT

public:
    explicit selectOption(QWidget *parent = nullptr);
    ~selectOption();

private slots:
    void on_pushButton_confrim_clicked();

    void on_pushButton_modifyBooks_clicked();

    void on_pushButton_modifyStudent_clicked();

    void on_pushButton_exit_clicked();

private:
    Ui::selectOption *ui;
};

#endif // SELECTOPTION_H
