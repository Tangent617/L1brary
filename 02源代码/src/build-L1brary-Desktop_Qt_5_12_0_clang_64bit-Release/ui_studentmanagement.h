/********************************************************************************
** Form generated from reading UI file 'studentmanagement.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTMANAGEMENT_H
#define UI_STUDENTMANAGEMENT_H

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

class Ui_studentManagement
{
public:
    QWidget *centralwidget;
    QTableView *tableView;
    QPushButton *pushButton_submit;
    QPushButton *pushButton_cencel;
    QPushButton *pushButton_addStudent;
    QPushButton *pushButton_deleteStudent;
    QPushButton *pushButton_ascendingOrder;
    QPushButton *pushButton_descendingOrder;
    QPushButton *pushButton_exit;
    QLabel *label_stuName;
    QLineEdit *lineEdit_stuName;
    QPushButton *pushButton_select;
    QPushButton *pushButton_showAllStudent;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *studentManagement)
    {
        if (studentManagement->objectName().isEmpty())
            studentManagement->setObjectName(QString::fromUtf8("studentManagement"));
        studentManagement->resize(800, 600);
        centralwidget = new QWidget(studentManagement);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(70, 40, 561, 381));
        pushButton_submit = new QPushButton(centralwidget);
        pushButton_submit->setObjectName(QString::fromUtf8("pushButton_submit"));
        pushButton_submit->setGeometry(QRect(660, 50, 113, 32));
        pushButton_cencel = new QPushButton(centralwidget);
        pushButton_cencel->setObjectName(QString::fromUtf8("pushButton_cencel"));
        pushButton_cencel->setGeometry(QRect(660, 120, 113, 32));
        pushButton_addStudent = new QPushButton(centralwidget);
        pushButton_addStudent->setObjectName(QString::fromUtf8("pushButton_addStudent"));
        pushButton_addStudent->setGeometry(QRect(660, 190, 113, 32));
        pushButton_deleteStudent = new QPushButton(centralwidget);
        pushButton_deleteStudent->setObjectName(QString::fromUtf8("pushButton_deleteStudent"));
        pushButton_deleteStudent->setGeometry(QRect(660, 260, 113, 32));
        pushButton_ascendingOrder = new QPushButton(centralwidget);
        pushButton_ascendingOrder->setObjectName(QString::fromUtf8("pushButton_ascendingOrder"));
        pushButton_ascendingOrder->setGeometry(QRect(660, 330, 113, 32));
        pushButton_descendingOrder = new QPushButton(centralwidget);
        pushButton_descendingOrder->setObjectName(QString::fromUtf8("pushButton_descendingOrder"));
        pushButton_descendingOrder->setGeometry(QRect(660, 400, 113, 32));
        pushButton_exit = new QPushButton(centralwidget);
        pushButton_exit->setObjectName(QString::fromUtf8("pushButton_exit"));
        pushButton_exit->setGeometry(QRect(660, 470, 113, 32));
        label_stuName = new QLabel(centralwidget);
        label_stuName->setObjectName(QString::fromUtf8("label_stuName"));
        label_stuName->setGeometry(QRect(90, 450, 60, 16));
        lineEdit_stuName = new QLineEdit(centralwidget);
        lineEdit_stuName->setObjectName(QString::fromUtf8("lineEdit_stuName"));
        lineEdit_stuName->setGeometry(QRect(160, 450, 281, 21));
        pushButton_select = new QPushButton(centralwidget);
        pushButton_select->setObjectName(QString::fromUtf8("pushButton_select"));
        pushButton_select->setGeometry(QRect(470, 440, 113, 32));
        pushButton_showAllStudent = new QPushButton(centralwidget);
        pushButton_showAllStudent->setObjectName(QString::fromUtf8("pushButton_showAllStudent"));
        pushButton_showAllStudent->setGeometry(QRect(470, 490, 113, 32));
        studentManagement->setCentralWidget(centralwidget);
        menubar = new QMenuBar(studentManagement);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 24));
        studentManagement->setMenuBar(menubar);
        statusbar = new QStatusBar(studentManagement);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        studentManagement->setStatusBar(statusbar);

        retranslateUi(studentManagement);

        QMetaObject::connectSlotsByName(studentManagement);
    } // setupUi

    void retranslateUi(QMainWindow *studentManagement)
    {
        studentManagement->setWindowTitle(QApplication::translate("studentManagement", "MainWindow", nullptr));
        pushButton_submit->setText(QApplication::translate("studentManagement", "\346\217\220\344\272\244\344\277\256\346\224\271", nullptr));
        pushButton_cencel->setText(QApplication::translate("studentManagement", "\346\222\244\346\266\210\344\277\256\346\224\271", nullptr));
        pushButton_addStudent->setText(QApplication::translate("studentManagement", "\346\267\273\345\212\240\345\255\246\347\224\237", nullptr));
        pushButton_deleteStudent->setText(QApplication::translate("studentManagement", "\345\210\240\351\231\244\345\255\246\347\224\237", nullptr));
        pushButton_ascendingOrder->setText(QApplication::translate("studentManagement", "\346\214\211id\345\215\207\345\272\217", nullptr));
        pushButton_descendingOrder->setText(QApplication::translate("studentManagement", "\346\214\211id\351\231\215\345\272\217", nullptr));
        pushButton_exit->setText(QApplication::translate("studentManagement", "\351\200\200\345\207\272", nullptr));
        label_stuName->setText(QApplication::translate("studentManagement", "\345\247\223\345\220\215\357\274\232", nullptr));
        pushButton_select->setText(QApplication::translate("studentManagement", "\346\237\245\350\257\242", nullptr));
        pushButton_showAllStudent->setText(QApplication::translate("studentManagement", "\346\230\276\347\244\272\345\205\250\350\241\250", nullptr));
    } // retranslateUi

};

namespace Ui {
    class studentManagement: public Ui_studentManagement {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTMANAGEMENT_H
