/********************************************************************************
** Form generated from reading UI file 'preorderbooks.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREORDERBOOKS_H
#define UI_PREORDERBOOKS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_preorderBooks
{
public:
    QWidget *centralwidget;
    QTableView *tableView;
    QLabel *label_bookName;
    QLineEdit *lineEdit_bookName;
    QPushButton *pushButton_select;
    QPushButton *pushButton_showAllBooks;
    QPushButton *pushButton_rBorrow;
    QPushButton *pushButton_rRenew;
    QPushButton *pushButton_rReturn;
    QPushButton *pushButton_myBooks;
    QPushButton *pushButton_exit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *preorderBooks)
    {
        if (preorderBooks->objectName().isEmpty())
            preorderBooks->setObjectName(QString::fromUtf8("preorderBooks"));
        preorderBooks->resize(800, 600);
        centralwidget = new QWidget(preorderBooks);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(40, 90, 591, 421));
        label_bookName = new QLabel(centralwidget);
        label_bookName->setObjectName(QString::fromUtf8("label_bookName"));
        label_bookName->setGeometry(QRect(50, 30, 60, 16));
        lineEdit_bookName = new QLineEdit(centralwidget);
        lineEdit_bookName->setObjectName(QString::fromUtf8("lineEdit_bookName"));
        lineEdit_bookName->setGeometry(QRect(120, 30, 341, 21));
        pushButton_select = new QPushButton(centralwidget);
        pushButton_select->setObjectName(QString::fromUtf8("pushButton_select"));
        pushButton_select->setGeometry(QRect(500, 30, 113, 32));
        pushButton_showAllBooks = new QPushButton(centralwidget);
        pushButton_showAllBooks->setObjectName(QString::fromUtf8("pushButton_showAllBooks"));
        pushButton_showAllBooks->setGeometry(QRect(660, 120, 113, 32));
        pushButton_rBorrow = new QPushButton(centralwidget);
        pushButton_rBorrow->setObjectName(QString::fromUtf8("pushButton_rBorrow"));
        pushButton_rBorrow->setGeometry(QRect(660, 240, 113, 32));
        pushButton_rRenew = new QPushButton(centralwidget);
        pushButton_rRenew->setObjectName(QString::fromUtf8("pushButton_rRenew"));
        pushButton_rRenew->setGeometry(QRect(660, 300, 113, 32));
        pushButton_rReturn = new QPushButton(centralwidget);
        pushButton_rReturn->setObjectName(QString::fromUtf8("pushButton_rReturn"));
        pushButton_rReturn->setGeometry(QRect(660, 360, 113, 32));
        pushButton_myBooks = new QPushButton(centralwidget);
        pushButton_myBooks->setObjectName(QString::fromUtf8("pushButton_myBooks"));
        pushButton_myBooks->setGeometry(QRect(660, 180, 113, 32));
        pushButton_exit = new QPushButton(centralwidget);
        pushButton_exit->setObjectName(QString::fromUtf8("pushButton_exit"));
        pushButton_exit->setGeometry(QRect(660, 420, 113, 32));
        preorderBooks->setCentralWidget(centralwidget);
        menubar = new QMenuBar(preorderBooks);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 24));
        preorderBooks->setMenuBar(menubar);
        statusbar = new QStatusBar(preorderBooks);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        preorderBooks->setStatusBar(statusbar);

        retranslateUi(preorderBooks);

        QMetaObject::connectSlotsByName(preorderBooks);
    } // setupUi

    void retranslateUi(QMainWindow *preorderBooks)
    {
        preorderBooks->setWindowTitle(QApplication::translate("preorderBooks", "MainWindow", nullptr));
        label_bookName->setText(QApplication::translate("preorderBooks", "\344\271\246\345\220\215\357\274\232", nullptr));
        pushButton_select->setText(QApplication::translate("preorderBooks", "\346\237\245\350\257\242", nullptr));
        pushButton_showAllBooks->setText(QApplication::translate("preorderBooks", "\346\230\276\347\244\272\346\211\200\346\234\211\344\271\246", nullptr));
        pushButton_rBorrow->setText(QApplication::translate("preorderBooks", "\345\200\237\351\230\205", nullptr));
        pushButton_rRenew->setText(QApplication::translate("preorderBooks", "\347\273\255\345\200\237", nullptr));
        pushButton_rReturn->setText(QApplication::translate("preorderBooks", "\345\275\222\350\277\230", nullptr));
        pushButton_myBooks->setText(QApplication::translate("preorderBooks", "\346\210\221\347\232\204\345\200\237\351\230\205", nullptr));
        pushButton_exit->setText(QApplication::translate("preorderBooks", "\351\200\200\345\207\272\347\231\273\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class preorderBooks: public Ui_preorderBooks {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREORDERBOOKS_H
