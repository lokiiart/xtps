#ifndef PATIENT_H
#define PATIENT_H

#include <QString>

class Patient
{
public:
    QString fName;
    QString lName;
    QString sGender;
    QString sAge;
    QString sDepartment;
    QString sBedNumber;
    bool bSymptom[8];
    QString sYear;
    QString sReportDate;
    QString phone;
    QString address;
    QString comment;


    QString sLeftJPG;
    QString sRightJPG;

    QString exp_0;
    QString exp_1;
    QString exp_2;
    QString exp_3;
    QString exp_4;
    QString exp_5;
    QString exp_6;
    QString exp_7;
    QString exp_8;
    QString exp_9;
    QString exp_10;
    QString exp_11;
    QString exp_12;
    QString exp_13;
    QString exp_14;
    QString exp_15;
    QString exp_16;
    QString exp_17;
    QString exp_18;
    QString exp_19;
    QString exp_20;
    QString exp_21;
    QString exp_22;
    QString exp_23;

    QString res_0;
    QString res_1;
    QString res_2;
    QString res_3;
    QString res_4;
    QString res_5;
    QString res_6;
    QString res_7;
    QString res_8;
    QString res_9;
    QString res_10;
    QString res_11;
    QString res_12;
    QString res_13;
    QString res_14;
    QString res_15;
    QString res_16;
    QString res_17;
    QString res_18;
    QString res_19;
    QString res_20;
    QString res_21;
    QString res_22;
    QString res_23;

    QString res_A;
    QString res_B;
    QString doc;
    QString reporter;
    QString date;
    QString allergies;
    QString medicine;
    QString medicineTime;

    void save();

    Patient();
    ~Patient();
};

#endif // PATIENT_H
