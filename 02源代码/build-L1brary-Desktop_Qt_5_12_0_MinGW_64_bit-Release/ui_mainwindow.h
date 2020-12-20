/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label_welcome;
    QPushButton *pushButton_stuLogin;
    QPushButton *pushButton_libLogin;
    QLineEdit *lineEdit_id;
    QLineEdit *lineEdit_password;
    QLabel *label_id;
    QLabel *label_password;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(400, 300);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label_welcome = new QLabel(centralWidget);
        label_welcome->setObjectName(QString::fromUtf8("label_welcome"));
        label_welcome->setGeometry(QRect(150, 20, 111, 51));
        pushButton_stuLogin = new QPushButton(centralWidget);
        pushButton_stuLogin->setObjectName(QString::fromUtf8("pushButton_stuLogin"));
        pushButton_stuLogin->setGeometry(QRect(70, 170, 113, 32));
        pushButton_libLogin = new QPushButton(centralWidget);
        pushButton_libLogin->setObjectName(QString::fromUtf8("pushButton_libLogin"));
        pushButton_libLogin->setGeometry(QRect(200, 170, 113, 32));
        lineEdit_id = new QLineEdit(centralWidget);
        lineEdit_id->setObjectName(QString::fromUtf8("lineEdit_id"));
        lineEdit_id->setGeometry(QRect(140, 90, 191, 21));
        lineEdit_password = new QLineEdit(centralWidget);
        lineEdit_password->setObjectName(QString::fromUtf8("lineEdit_password"));
        lineEdit_password->setGeometry(QRect(140, 130, 191, 21));
        lineEdit_password->setEchoMode(QLineEdit::Password);
        label_id = new QLabel(centralWidget);
        label_id->setObjectName(QString::fromUtf8("label_id"));
        label_id->setGeometry(QRect(60, 90, 71, 16));
        label_password = new QLabel(centralWidget);
        label_password->setObjectName(QString::fromUtf8("label_password"));
        label_password->setGeometry(QRect(60, 130, 71, 16));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 24));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label_welcome->setText(QApplication::translate("MainWindow", "\346\254\242\350\277\216\347\231\273\345\275\225L1brary\357\275\236", nullptr));
        pushButton_stuLogin->setText(QApplication::translate("MainWindow", "\345\255\246\347\224\237\347\231\273\345\275\225", nullptr));
        pushButton_libLogin->setText(QApplication::translate("MainWindow", "\347\256\241\347\220\206\345\221\230\347\231\273\345\275\225", nullptr));
        label_id->setText(QApplication::translate("MainWindow", "\345\255\246\345\217\267/\345\267\245\345\217\267\357\274\232", nullptr));
        label_password->setText(QApplication::translate("MainWindow", "\345\257\206\347\240\201\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
