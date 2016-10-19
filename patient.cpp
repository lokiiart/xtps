#include "patient.h"
#include <QDebug>
#include <QDate>
#include <QSqlQuery>
#include <QSqlError>

Patient::Patient()
{
}

Patient::~Patient()
{
}

void Patient::save(){
    qDebug() << "Test:" << this->fName;
    QSqlQuery query;
    query.prepare("insert into patient9 (fname,lname,gender, age, department, bedNum, zheng0, zheng1, zheng2, zheng3, zheng4, zheng5, zheng6, zheng7, year, leftJPG, rightJPG,"
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
                          " values (:fname,:lname,:gender, :age, :department, :bedNum, :zheng0, :zheng1, :zheng2, :zheng3, :zheng4, :zheng5, :zheng6, :zheng7, :year, :leftJPG, :rightJPG,"
                          ":exp_0,"
                          ":exp_1,"
                          ":exp_2,"
                          ":exp_3,"
                          ":exp_4,"
                          ":exp_5,"
                          ":exp_6,"
                          ":exp_7,"
                          ":exp_8,"
                          ":exp_9,"
                          ":exp_10,"
                          ":exp_11,"
                          ":exp_12,"
                          ":exp_13,"
                          ":exp_14,"
                          ":exp_15,"
                          ":exp_16,"
                          ":exp_17,"
                          ":exp_18,"
                          ":exp_19,"
            ":res_0,"
                          ":res_1,"
                          ":res_2,"
                          ":res_3,"
                          ":res_4,"
                          ":res_5,"
                          ":res_6,"
                          ":res_7,"
                          ":res_8,"
                          ":res_9,"
                          ":res_10,"
                          ":res_11,"
                          ":res_12,"
                          ":res_13,"
                          ":res_14,"
                          ":res_15,"
                          ":res_16,"
                          ":res_17,"
                          ":res_18,"
                          ":res_19,"
            ":res_A,"
            ":res_B,"
                          ":phone,"
                          ":address,"
                          ":comment,"
                          ":reporter,"
                          ":date,"
                  ":doc"
                          ")");
    query.bindValue(":fname", this->fName);
    query.bindValue(":lname", this->lName);
    query.bindValue(":gender", this->sGender);
    query.bindValue(":age", this->sAge);
    query.bindValue(":department", this->sDepartment);
    query.bindValue(":bedNum", this->sBedNumber);
    query.bindValue(":zheng0",this->bSymptom[0]);
    query.bindValue(":zheng1",this->bSymptom[1]);
    query.bindValue(":zheng2",this->bSymptom[2]);
    query.bindValue(":zheng3",this->bSymptom[3]);
    query.bindValue(":zheng4",this->bSymptom[4]);
    query.bindValue(":zheng5",this->bSymptom[5]);
    query.bindValue(":zheng6",this->bSymptom[6]);
    query.bindValue(":zheng7",this->bSymptom[7]);
    query.bindValue(":year", this->sYear);
    query.bindValue(":leftJPG", this->sLeftJPG);
    query.bindValue(":rightJPG", this->sRightJPG);
    query.bindValue(":exp_0", this->exp_0);
    query.bindValue(":exp_1", this->exp_1);
    query.bindValue(":exp_2", this->exp_2);
    query.bindValue(":exp_3", this->exp_3);
    query.bindValue(":exp_4", this->exp_4);
    query.bindValue(":exp_5", this->exp_5);
    query.bindValue(":exp_6", this->exp_6);
    query.bindValue(":exp_7", this->exp_7);
    query.bindValue(":exp_8", this->exp_8);
    query.bindValue(":exp_9", this->exp_9);
    query.bindValue(":exp_10", this->exp_10);
    query.bindValue(":exp_11", this->exp_11);
    query.bindValue(":exp_12", this->exp_12);
    query.bindValue(":exp_13", this->exp_13);
    query.bindValue(":exp_14", this->exp_14);
    query.bindValue(":exp_15", this->exp_15);
    query.bindValue(":exp_16", this->exp_16);
    query.bindValue(":exp_17", this->exp_17);
    query.bindValue(":exp_18", this->exp_18);
    query.bindValue(":exp_19", this->exp_19);
    query.bindValue(":res_0", this->res_0);
    query.bindValue(":res_1", this->res_1);
    query.bindValue(":res_2", this->res_2);
    query.bindValue(":res_3", this->res_3);
    query.bindValue(":res_4", this->res_4);
    query.bindValue(":res_5", this->res_5);
    query.bindValue(":res_6", this->res_6);
    query.bindValue(":res_7", this->res_7);
    query.bindValue(":res_8", this->res_8);
    query.bindValue(":res_9", this->res_9);
    query.bindValue(":res_10", this->res_10);
    query.bindValue(":res_11", this->res_11);
    query.bindValue(":res_12", this->res_12);
    query.bindValue(":res_13", this->res_13);
    query.bindValue(":res_14", this->res_14);
    query.bindValue(":res_15", this->res_15);
    query.bindValue(":res_16", this->res_16);
    query.bindValue(":res_17", this->res_17);
    query.bindValue(":res_18", this->res_18);
    query.bindValue(":res_19", this->res_19);
    query.bindValue(":res_A", this->res_A);
    query.bindValue(":res_B", this->res_B);
    query.bindValue(":phone", this->phone);
    query.bindValue(":address", this->address);
    query.bindValue(":comment", this->comment);
    query.bindValue(":reporter", this->reporter);
    query.bindValue(":date", this->date);
    query.bindValue(":doc", this->doc);
    if (!query.exec()) { // error
//        QMessageBox::critical(this,
//                              tr("Database error"),
//                              tr("Could not setup database"));
        qDebug() << "Database error : " << query.lastError();
    }
}
