/********************************************************************************
** Form generated from reading UI file 'bookmanagement.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOKMANAGEMENT_H
#define UI_BOOKMANAGEMENT_H

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

class Ui_bookManagement
{
public:
    QWidget *centralwidget;
    QLabel *label_bookName;
    QLineEdit *lineEdit_bookName;
    QPushButton *pushButton_select;
    QPushButton *pushButton_showAll;
    QPushButton *pushButton_submit;
    QPushButton *pushButton_cencel;
    QPushButton *pushButton_addBook;
    QPushButton *pushButton_deleteBook;
    QPushButton *pushButton_ascendingOrder;
    QPushButton *pushButton_descendingOrder;
    QPushButton *pushButton_exit;
    QTableView *tableView;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *bookManagement)
    {
        if (bookManagement->objectName().isEmpty())
            bookManagement->setObjectName(QString::fromUtf8("bookManagement"));
        bookManagement->resize(800, 600);
        centralwidget = new QWidget(bookManagement);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label_bookName = new QLabel(centralwidget);
        label_bookName->setObjectName(QString::fromUtf8("label_bookName"));
        label_bookName->setGeometry(QRect(90, 450, 60, 16));
        lineEdit_bookName = new QLineEdit(centralwidget);
        lineEdit_bookName->setObjectName(QString::fromUtf8("lineEdit_bookName"));
        lineEdit_bookName->setGeometry(QRect(160, 450, 281, 21));
        pushButton_select = new QPushButton(centralwidget);
        pushButton_select->setObjectName(QString::fromUtf8("pushButton_select"));
        pushButton_select->setGeometry(QRect(470, 440, 113, 32));
        pushButton_showAll = new QPushButton(centralwidget);
        pushButton_showAll->setObjectName(QString::fromUtf8("pushButton_showAll"));
        pushButton_showAll->setGeometry(QRect(470, 490, 113, 32));
        pushButton_submit = new QPushButton(centralwidget);
        pushButton_submit->setObjectName(QString::fromUtf8("pushButton_submit"));
        pushButton_submit->setGeometry(QRect(660, 50, 113, 32));
        pushButton_cencel = new QPushButton(centralwidget);
        pushButton_cencel->setObjectName(QString::fromUtf8("pushButton_cencel"));
        pushButton_cencel->setGeometry(QRect(660, 120, 113, 32));
        pushButton_addBook = new QPushButton(centralwidget);
        pushButton_addBook->setObjectName(QString::fromUtf8("pushButton_addBook"));
        pushButton_addBook->setGeometry(QRect(660, 190, 113, 32));
        pushButton_deleteBook = new QPushButton(centralwidget);
        pushButton_deleteBook->setObjectName(QString::fromUtf8("pushButton_deleteBook"));
        pushButton_deleteBook->setGeometry(QRect(660, 260, 113, 32));
        pushButton_ascendingOrder = new QPushButton(centralwidget);
        pushButton_ascendingOrder->setObjectName(QString::fromUtf8("pushButton_ascendingOrder"));
        pushButton_ascendingOrder->setGeometry(QRect(660, 330, 113, 32));
        pushButton_descendingOrder = new QPushButton(centralwidget);
        pushButton_descendingOrder->setObjectName(QString::fromUtf8("pushButton_descendingOrder"));
        pushButton_descendingOrder->setGeometry(QRect(660, 400, 113, 32));
        pushButton_exit = new QPushButton(centralwidget);
        pushButton_exit->setObjectName(QString::fromUtf8("pushButton_exit"));
        pushButton_exit->setGeometry(QRect(660, 470, 113, 32));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(70, 50, 561, 371));
        bookManagement->setCentralWidget(centralwidget);
        menubar = new QMenuBar(bookManagement);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 24));
        bookManagement->setMenuBar(menubar);
        statusbar = new QStatusBar(bookManagement);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        bookManagement->setStatusBar(statusbar);

        retranslateUi(bookManagement);

        QMetaObject::connectSlotsByName(bookManagement);
    } // setupUi

    void retranslateUi(QMainWindow *bookManagement)
    {
        bookManagement->setWindowTitle(QApplication::translate("bookManagement", "MainWindow", nullptr));
        label_bookName->setText(QApplication::translate("bookManagement", "\344\271\246\345\220\215\357\274\232", nullptr));
        pushButton_select->setText(QApplication::translate("bookManagement", "\346\237\245\350\257\242", nullptr));
        pushButton_showAll->setText(QApplication::translate("bookManagement", "\346\230\276\347\244\272\345\205\250\350\241\250", nullptr));
        pushButton_submit->setText(QApplication::translate("bookManagement", "\346\217\220\344\272\244\344\277\256\346\224\271", nullptr));
        pushButton_cencel->setText(QApplication::translate("bookManagement", "\346\222\244\346\266\210\344\277\256\346\224\271", nullptr));
        pushButton_addBook->setText(QApplication::translate("bookManagement", "\346\267\273\345\212\240\344\271\246\347\261\215", nullptr));
        pushButton_deleteBook->setText(QApplication::translate("bookManagement", "\345\210\240\351\231\244\344\271\246\347\261\215", nullptr));
        pushButton_ascendingOrder->setText(QApplication::translate("bookManagement", "\346\214\211id\345\215\207\345\272\217", nullptr));
        pushButton_descendingOrder->setText(QApplication::translate("bookManagement", "\346\214\211id\351\231\215\345\272\217", nullptr));
        pushButton_exit->setText(QApplication::translate("bookManagement", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class bookManagement: public Ui_bookManagement {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOKMANAGEMENT_H
