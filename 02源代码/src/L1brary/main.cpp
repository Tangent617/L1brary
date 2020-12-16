#include "mainwindow.h"
#include <QApplication>
#include "connection.h"
#include <QProcess>
#include <QStyleFactory>                           //修改风格1步
int main(int argc, char *argv[])
{
#if(QT_VERSION >= QT_VERSION_CHECK(5, 6, 0))
    //支持高分屏自动缩放
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
#endif
    QApplication a(argc, argv);
    a.setStyle(QStyleFactory::create("fusion"));   //修改风格2步
    // 这里使用代码来运行 MySQL 数据库
    QProcess process;
    process.start("C:/Program Files/MySQL/MySQL Server 8.0/bin/mysqld.exe");
    if (!createConnection()) return 1;
    MainWindow w;
    w.show();
    return a.exec();
}
