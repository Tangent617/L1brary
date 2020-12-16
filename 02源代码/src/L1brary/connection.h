#ifndef CONNECTION_H
#define CONNECTION_H
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>

static QSqlDatabase db;
//static QSqlQuery query(db);

static bool createConnection()
{
    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("139.9.119.34");
    db.setDatabaseName("library_2018303116");       //数据库名
    db.setUserName("s2018303116");
    db.setPassword("GaussDB@123");   //密码
    if (!db.open()) {
        QMessageBox::critical(0, QObject::tr("无法打开数据库"),
        "无法创建数据库连接！ ", QMessageBox::Cancel);
        return false;
    }
    return true;
}
#endif // CONNECTION_H
