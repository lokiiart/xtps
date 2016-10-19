#ifndef CONNECTION_H
#define CONNECTION_H

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDir>
#include <QDateTime>
#include <QDebug>
#include <QSqlError>


static bool createConnection()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    QString dbAddress = "db\\patient.db";
    if(!QDir("db").exists()){
        QDir().mkdir("db");
    }
    db.setDatabaseName(dbAddress);
    if(!db.open()) return false;
    QSqlQuery query;
    query.prepare(QString(
      "create table if not exists patient9 ("
              "fname vchar default '未填写姓',"
              "lname vchar default '未填写名',"
              "gender vchar default '未填写性别', "
              "age vchar,"
              "department vchar,"
              "bedNum vchar,"
              "zheng0 bool,"
              "zheng1 bool,"
              "zheng2 bool,"
              "zheng3 bool,"
              "zheng4 bool,"
              "zheng5 bool,"
              "zheng6 bool,"
              "zheng7 bool,"
              "year vchar,"
              "leftJPG vchar,"
              "rightJPG vchar,"
              "exp_0,"
              "exp_1,"
              "exp_2,"
              "exp_3,"
              "exp_4,"
              "exp_5,"
              "exp_6,"
              "exp_7,"
              "exp_8,"
              "exp_9,"
              "exp_10,"
              "exp_11,"
              "exp_12,"
              "exp_13,"
              "exp_14,"
              "exp_15,"
              "exp_16,"
              "exp_17,"
              "exp_18,"
              "exp_19,"
              "res_0,"
              "res_1,"
              "res_2,"
              "res_3,"
              "res_4,"
              "res_5,"
              "res_6,"
              "res_7,"
              "res_8,"
              "res_9,"
              "res_10,"
              "res_11,"
              "res_12,"
              "res_13,"
              "res_14,"
              "res_15,"
              "res_16,"
              "res_17,"
              "res_18,"
              "res_19,"
              "res_A,"
              "res_B,"
              "phone,"
              "address,"
              "comment,"
              "reporter,"
              "date,"
              "doc"
              ")"
    ));
    qDebug() << "I'm creating a table";
    if (!query.exec()) { // error
//        QMessageBox::critical(this,
//                              tr("Database error"),
//                              tr("Could not setup database"));
        qDebug() << "Database error : " << query.lastError();
    }
    return true;
}

#endif // CONNECTION_H
