#include "mainwindow.h"
#include "connection.h"


#include <QApplication>
#include <QTextCodec>
#include <QDebug>
#include <QFontDatabase>
#include <QFont>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QTextCodec *codec = QTextCodec::codecForName("system");    //获取系统编码
    QTextCodec::setCodecForLocale(codec);
//    QTextCodec::setCodecForCStrings(codec);
//    QTextCodec::setCodecForTr(codec);

    if(!createConnection())return 1;

    MainWindow w;
    w.show();
    QFontDatabase::addApplicationFont("./fonts/kai.ttf");
    QFontDatabase::addApplicationFont("./fonts/wqy.ttf");
//    if(id==-1)return -1;
//    QString fontfa = QFontDatabase::applicationFontFamilies(id).at(0);
//    qDebug() <<"mytest:"<< fontfa <<endl;
//    QFontDatabase database;
//    foreach (const QString &family, database.families())
//    {
//         qDebug()<<family;
//    }


    return a.exec();
}
