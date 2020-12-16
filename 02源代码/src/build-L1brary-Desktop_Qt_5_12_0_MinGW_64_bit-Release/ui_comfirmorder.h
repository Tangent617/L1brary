/********************************************************************************
** Form generated from reading UI file 'comfirmorder.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMFIRMORDER_H
#define UI_COMFIRMORDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_comfirmOrder
{
public:
    QWidget *centralwidget;
    QTableView *tableView;
    QRadioButton *radioButton_rBorrowList;
    QRadioButton *radioButton_rRenewList;
    QRadioButton *radioButton_rReturnList;
    QPushButton *pushButton_comfrim;
    QPushButton *pushButton_exit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *comfirmOrder)
    {
        if (comfirmOrder->objectName().isEmpty())
            comfirmOrder->setObjectName(QString::fromUtf8("comfirmOrder"));
        comfirmOrder->resize(800, 600);
        centralwidget = new QWidget(comfirmOrder);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(70, 100, 481, 391));
        radioButton_rBorrowList = new QRadioButton(centralwidget);
        radioButton_rBorrowList->setObjectName(QString::fromUtf8("radioButton_rBorrowList"));
        radioButton_rBorrowList->setGeometry(QRect(90, 40, 99, 20));
        radioButton_rRenewList = new QRadioButton(centralwidget);
        radioButton_rRenewList->setObjectName(QString::fromUtf8("radioButton_rRenewList"));
        radioButton_rRenewList->setGeometry(QRect(230, 40, 99, 20));
        radioButton_rReturnList = new QRadioButton(centralwidget);
        radioButton_rReturnList->setObjectName(QString::fromUtf8("radioButton_rReturnList"));
        radioButton_rReturnList->setGeometry(QRect(380, 40, 99, 20));
        pushButton_comfrim = new QPushButton(centralwidget);
        pushButton_comfrim->setObjectName(QString::fromUtf8("pushButton_comfrim"));
        pushButton_comfrim->setGeometry(QRect(610, 180, 113, 32));
        pushButton_exit = new QPushButton(centralwidget);
        pushButton_exit->setObjectName(QString::fromUtf8("pushButton_exit"));
        pushButton_exit->setGeometry(QRect(610, 350, 113, 32));
        comfirmOrder->setCentralWidget(centralwidget);
        menubar = new QMenuBar(comfirmOrder);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 24));
        comfirmOrder->setMenuBar(menubar);
        statusbar = new QStatusBar(comfirmOrder);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        comfirmOrder->setStatusBar(statusbar);

        retranslateUi(comfirmOrder);

        QMetaObject::connectSlotsByName(comfirmOrder);
    } // setupUi

    void retranslateUi(QMainWindow *comfirmOrder)
    {
        comfirmOrder->setWindowTitle(QApplication::translate("comfirmOrder", "MainWindow", nullptr));
        radioButton_rBorrowList->setText(QApplication::translate("comfirmOrder", "\351\242\204\345\200\237\351\230\205\345\210\227\350\241\250", nullptr));
        radioButton_rRenewList->setText(QApplication::translate("comfirmOrder", "\351\242\204\347\273\255\345\200\237\345\210\227\350\241\250", nullptr));
        radioButton_rReturnList->setText(QApplication::translate("comfirmOrder", "\351\242\204\345\275\222\350\277\230\345\210\227\350\241\250", nullptr));
        pushButton_comfrim->setText(QApplication::translate("comfirmOrder", "\346\211\271\345\207\206", nullptr));
        pushButton_exit->setText(QApplication::translate("comfirmOrder", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class comfirmOrder: public Ui_comfirmOrder {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMFIRMORDER_H
