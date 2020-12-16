/********************************************************************************
** Form generated from reading UI file 'selectoption.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTOPTION_H
#define UI_SELECTOPTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_selectOption
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *pushButton_confrim;
    QPushButton *pushButton_modifyBooks;
    QPushButton *pushButton_modifyStudent;
    QPushButton *pushButton_exit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *selectOption)
    {
        if (selectOption->objectName().isEmpty())
            selectOption->setObjectName(QString::fromUtf8("selectOption"));
        selectOption->resize(800, 600);
        centralwidget = new QWidget(selectOption);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(340, 60, 121, 16));
        pushButton_confrim = new QPushButton(centralwidget);
        pushButton_confrim->setObjectName(QString::fromUtf8("pushButton_confrim"));
        pushButton_confrim->setGeometry(QRect(340, 170, 113, 32));
        pushButton_modifyBooks = new QPushButton(centralwidget);
        pushButton_modifyBooks->setObjectName(QString::fromUtf8("pushButton_modifyBooks"));
        pushButton_modifyBooks->setGeometry(QRect(340, 290, 113, 32));
        pushButton_modifyStudent = new QPushButton(centralwidget);
        pushButton_modifyStudent->setObjectName(QString::fromUtf8("pushButton_modifyStudent"));
        pushButton_modifyStudent->setGeometry(QRect(340, 400, 113, 32));
        pushButton_exit = new QPushButton(centralwidget);
        pushButton_exit->setObjectName(QString::fromUtf8("pushButton_exit"));
        pushButton_exit->setGeometry(QRect(620, 480, 113, 32));
        selectOption->setCentralWidget(centralwidget);
        menubar = new QMenuBar(selectOption);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 24));
        selectOption->setMenuBar(menubar);
        statusbar = new QStatusBar(selectOption);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        selectOption->setStatusBar(statusbar);

        retranslateUi(selectOption);

        QMetaObject::connectSlotsByName(selectOption);
    } // setupUi

    void retranslateUi(QMainWindow *selectOption)
    {
        selectOption->setWindowTitle(QApplication::translate("selectOption", "MainWindow", nullptr));
        label->setText(QApplication::translate("selectOption", "\350\257\267\351\200\211\346\213\251\350\246\201\350\277\233\350\241\214\347\232\204\346\223\215\344\275\234", nullptr));
        pushButton_confrim->setText(QApplication::translate("selectOption", "\347\241\256\350\256\244\351\242\204\350\256\242", nullptr));
        pushButton_modifyBooks->setText(QApplication::translate("selectOption", "\344\277\256\346\224\271\345\233\276\344\271\246\344\277\241\346\201\257", nullptr));
        pushButton_modifyStudent->setText(QApplication::translate("selectOption", "\344\277\256\346\224\271\345\255\246\347\224\237\344\277\241\346\201\257", nullptr));
        pushButton_exit->setText(QApplication::translate("selectOption", "\351\200\200\345\207\272\347\231\273\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class selectOption: public Ui_selectOption {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTOPTION_H
