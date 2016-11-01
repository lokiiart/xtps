/********************************************************************************
** Form generated from reading UI file 'create.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATE_H
#define UI_CREATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qcameraviewfinder.h"

QT_BEGIN_NAMESPACE

class Ui_Create
{
public:
    QPushButton *rightBtn;
    QLabel *leftHand;
    QPushButton *captureBtn;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QCameraViewfinder *cameraWidget;
    QWidget *page_2;
    QLabel *lastPreviewLabel;
    QLabel *label_8;
    QLabel *label_10;
    QComboBox *res_A;
    QLabel *label_11;
    QLabel *label_9;
    QLabel *rightHand;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_12;
    QLineEdit *reporter;
    QPushButton *leftBtn;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget_3;
    QVBoxLayout *_13;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *zheng0;
    QCheckBox *zheng1;
    QCheckBox *zheng2;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *zheng3;
    QCheckBox *zheng4;
    QCheckBox *zheng5;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_5;
    QCheckBox *zheng6;
    QCheckBox *zheng7;
    QLineEdit *year;
    QLabel *label_7;
    QPushButton *leftDelBtn;
    QGroupBox *groupBox;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_21;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *fname;
    QLabel *label_3;
    QLineEdit *gender;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLineEdit *age;
    QLabel *label_5;
    QLineEdit *department;
    QLabel *label_6;
    QLineEdit *bedNum;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_13;
    QLineEdit *phone;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_14;
    QLineEdit *address;
    QComboBox *res_B;
    QPushButton *rightDelBtn;
    QWidget *layoutWidget_6;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *saveBtn;
    QPushButton *closeBtn;
    QGroupBox *groupBox_3;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout;
    QComboBox *exp_0;
    QComboBox *res_0;
    QVBoxLayout *verticalLayout_2;
    QComboBox *exp_1;
    QComboBox *res_1;
    QVBoxLayout *verticalLayout_3;
    QComboBox *exp_2;
    QComboBox *res_2;
    QVBoxLayout *verticalLayout_4;
    QComboBox *exp_3;
    QComboBox *res_3;
    QVBoxLayout *verticalLayout_5;
    QComboBox *exp_4;
    QComboBox *res_4;
    QWidget *layoutWidget_7;
    QHBoxLayout *horizontalLayout_9;
    QVBoxLayout *verticalLayout_6;
    QComboBox *exp_5;
    QComboBox *res_5;
    QVBoxLayout *verticalLayout_7;
    QComboBox *exp_6;
    QComboBox *res_6;
    QVBoxLayout *verticalLayout_8;
    QComboBox *exp_7;
    QComboBox *res_7;
    QVBoxLayout *verticalLayout_9;
    QComboBox *exp_8;
    QComboBox *res_8;
    QVBoxLayout *verticalLayout_10;
    QComboBox *exp_9;
    QComboBox *res_9;
    QGroupBox *groupBox_4;
    QWidget *layoutWidget_12;
    QHBoxLayout *horizontalLayout_11;
    QVBoxLayout *verticalLayout_16;
    QComboBox *exp_15;
    QComboBox *res_15;
    QVBoxLayout *verticalLayout_17;
    QComboBox *exp_16;
    QComboBox *res_16;
    QVBoxLayout *verticalLayout_18;
    QComboBox *exp_17;
    QComboBox *res_17;
    QVBoxLayout *verticalLayout_19;
    QComboBox *exp_18;
    QComboBox *res_18;
    QVBoxLayout *verticalLayout_20;
    QComboBox *exp_19;
    QComboBox *res_19;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_10;
    QVBoxLayout *verticalLayout_11;
    QComboBox *exp_10;
    QComboBox *res_10;
    QVBoxLayout *verticalLayout_12;
    QComboBox *exp_11;
    QComboBox *res_11;
    QVBoxLayout *verticalLayout_13;
    QComboBox *exp_12;
    QComboBox *res_12;
    QVBoxLayout *verticalLayout_14;
    QComboBox *exp_13;
    QComboBox *res_13;
    QVBoxLayout *verticalLayout_15;
    QComboBox *exp_14;
    QComboBox *res_14;
    QLabel *label_15;
    QPlainTextEdit *comment;
    QLineEdit *lname;

    void setupUi(QDialog *Create)
    {
        if (Create->objectName().isEmpty())
            Create->setObjectName(QStringLiteral("Create"));
        Create->setWindowModality(Qt::WindowModal);
        Create->resize(1276, 680);
        QFont font;
        font.setFamily(QStringLiteral("Microsoft YaHei UI Light"));
        Create->setFont(font);
        rightBtn = new QPushButton(Create);
        rightBtn->setObjectName(QStringLiteral("rightBtn"));
        rightBtn->setGeometry(QRect(250, 580, 71, 32));
        rightBtn->setAutoDefault(false);
        leftHand = new QLabel(Create);
        leftHand->setObjectName(QStringLiteral("leftHand"));
        leftHand->setGeometry(QRect(380, 40, 320, 200));
        leftHand->setStyleSheet(QStringLiteral("background:#fff"));
        captureBtn = new QPushButton(Create);
        captureBtn->setObjectName(QStringLiteral("captureBtn"));
        captureBtn->setGeometry(QRect(30, 580, 113, 32));
        captureBtn->setAutoDefault(false);
        stackedWidget = new QStackedWidget(Create);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(20, 360, 330, 220));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        cameraWidget = new QCameraViewfinder(page);
        cameraWidget->setObjectName(QStringLiteral("cameraWidget"));
        cameraWidget->setGeometry(QRect(0, 10, 320, 200));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        lastPreviewLabel = new QLabel(page_2);
        lastPreviewLabel->setObjectName(QStringLiteral("lastPreviewLabel"));
        lastPreviewLabel->setGeometry(QRect(10, 20, 320, 200));
        stackedWidget->addWidget(page_2);
        label_8 = new QLabel(Create);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(520, 20, 60, 16));
        label_10 = new QLabel(Create);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(750, 540, 131, 16));
        res_A = new QComboBox(Create);
        res_A->setObjectName(QStringLiteral("res_A"));
        res_A->setGeometry(QRect(740, 560, 161, 26));
        label_11 = new QLabel(Create);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(930, 540, 111, 16));
        label_9 = new QLabel(Create);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(520, 300, 60, 16));
        rightHand = new QLabel(Create);
        rightHand->setObjectName(QStringLiteral("rightHand"));
        rightHand->setGeometry(QRect(380, 320, 320, 200));
        rightHand->setStyleSheet(QLatin1String("background: #fff\n"
""));
        layoutWidget_2 = new QWidget(Create);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(10, 640, 321, 26));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(layoutWidget_2);
        label_12->setObjectName(QStringLiteral("label_12"));

        horizontalLayout_7->addWidget(label_12);

        reporter = new QLineEdit(layoutWidget_2);
        reporter->setObjectName(QStringLiteral("reporter"));

        horizontalLayout_7->addWidget(reporter);

        leftBtn = new QPushButton(Create);
        leftBtn->setObjectName(QStringLiteral("leftBtn"));
        leftBtn->setGeometry(QRect(170, 580, 71, 32));
        leftBtn->setAutoDefault(false);
        groupBox_2 = new QGroupBox(Create);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(40, 190, 291, 131));
        layoutWidget_3 = new QWidget(groupBox_2);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(10, 30, 271, 61));
        _13 = new QVBoxLayout(layoutWidget_3);
        _13->setObjectName(QStringLiteral("_13"));
        _13->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        zheng0 = new QCheckBox(layoutWidget_3);
        zheng0->setObjectName(QStringLiteral("zheng0"));

        horizontalLayout_3->addWidget(zheng0);

        zheng1 = new QCheckBox(layoutWidget_3);
        zheng1->setObjectName(QStringLiteral("zheng1"));

        horizontalLayout_3->addWidget(zheng1);

        zheng2 = new QCheckBox(layoutWidget_3);
        zheng2->setObjectName(QStringLiteral("zheng2"));

        horizontalLayout_3->addWidget(zheng2);


        _13->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        zheng3 = new QCheckBox(layoutWidget_3);
        zheng3->setObjectName(QStringLiteral("zheng3"));

        horizontalLayout_4->addWidget(zheng3);

        zheng4 = new QCheckBox(layoutWidget_3);
        zheng4->setObjectName(QStringLiteral("zheng4"));

        horizontalLayout_4->addWidget(zheng4);

        zheng5 = new QCheckBox(layoutWidget_3);
        zheng5->setObjectName(QStringLiteral("zheng5"));

        horizontalLayout_4->addWidget(zheng5);


        _13->addLayout(horizontalLayout_4);

        layoutWidget = new QWidget(groupBox_2);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 100, 181, 25));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        zheng6 = new QCheckBox(layoutWidget);
        zheng6->setObjectName(QStringLiteral("zheng6"));

        horizontalLayout_5->addWidget(zheng6);

        zheng7 = new QCheckBox(layoutWidget);
        zheng7->setObjectName(QStringLiteral("zheng7"));

        horizontalLayout_5->addWidget(zheng7);

        year = new QLineEdit(groupBox_2);
        year->setObjectName(QStringLiteral("year"));
        year->setGeometry(QRect(200, 100, 31, 21));
        year->setMaximumSize(QSize(16777215, 16777215));
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(240, 100, 21, 16));
        leftDelBtn = new QPushButton(Create);
        leftDelBtn->setObjectName(QStringLiteral("leftDelBtn"));
        leftDelBtn->setGeometry(QRect(480, 250, 113, 32));
        leftDelBtn->setAutoDefault(false);
        groupBox = new QGroupBox(Create);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(40, 20, 291, 161));
        layoutWidget1 = new QWidget(groupBox);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 30, 271, 116));
        verticalLayout_21 = new QVBoxLayout(layoutWidget1);
        verticalLayout_21->setObjectName(QStringLiteral("verticalLayout_21"));
        verticalLayout_21->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(layoutWidget1);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        fname = new QLineEdit(layoutWidget1);
        fname->setObjectName(QStringLiteral("fname"));

        horizontalLayout->addWidget(fname);

        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        gender = new QLineEdit(layoutWidget1);
        gender->setObjectName(QStringLiteral("gender"));

        horizontalLayout->addWidget(gender);


        verticalLayout_21->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_2->addWidget(label_4);

        age = new QLineEdit(layoutWidget1);
        age->setObjectName(QStringLiteral("age"));

        horizontalLayout_2->addWidget(age);

        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_2->addWidget(label_5);

        department = new QLineEdit(layoutWidget1);
        department->setObjectName(QStringLiteral("department"));

        horizontalLayout_2->addWidget(department);

        label_6 = new QLabel(layoutWidget1);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_2->addWidget(label_6);

        bedNum = new QLineEdit(layoutWidget1);
        bedNum->setObjectName(QStringLiteral("bedNum"));

        horizontalLayout_2->addWidget(bedNum);


        verticalLayout_21->addLayout(horizontalLayout_2);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        label_13 = new QLabel(layoutWidget1);
        label_13->setObjectName(QStringLiteral("label_13"));

        horizontalLayout_12->addWidget(label_13);

        phone = new QLineEdit(layoutWidget1);
        phone->setObjectName(QStringLiteral("phone"));

        horizontalLayout_12->addWidget(phone);


        verticalLayout_21->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        label_14 = new QLabel(layoutWidget1);
        label_14->setObjectName(QStringLiteral("label_14"));

        horizontalLayout_13->addWidget(label_14);

        address = new QLineEdit(layoutWidget1);
        address->setObjectName(QStringLiteral("address"));

        horizontalLayout_13->addWidget(address);


        verticalLayout_21->addLayout(horizontalLayout_13);

        res_B = new QComboBox(Create);
        res_B->setObjectName(QStringLiteral("res_B"));
        res_B->setGeometry(QRect(920, 560, 161, 26));
        rightDelBtn = new QPushButton(Create);
        rightDelBtn->setObjectName(QStringLiteral("rightDelBtn"));
        rightDelBtn->setGeometry(QRect(480, 530, 113, 32));
        rightDelBtn->setAutoDefault(false);
        layoutWidget_6 = new QWidget(Create);
        layoutWidget_6->setObjectName(QStringLiteral("layoutWidget_6"));
        layoutWidget_6->setGeometry(QRect(1010, 640, 254, 32));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget_6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        saveBtn = new QPushButton(layoutWidget_6);
        saveBtn->setObjectName(QStringLiteral("saveBtn"));

        horizontalLayout_8->addWidget(saveBtn);

        closeBtn = new QPushButton(layoutWidget_6);
        closeBtn->setObjectName(QStringLiteral("closeBtn"));
        closeBtn->setAutoDefault(false);

        horizontalLayout_8->addWidget(closeBtn);

        groupBox_3 = new QGroupBox(Create);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(730, 310, 521, 221));
        layoutWidget2 = new QWidget(groupBox_3);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(11, 30, 501, 60));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        exp_0 = new QComboBox(layoutWidget2);
        exp_0->setObjectName(QStringLiteral("exp_0"));
        exp_0->setEditable(true);

        verticalLayout->addWidget(exp_0);

        res_0 = new QComboBox(layoutWidget2);
        res_0->setObjectName(QStringLiteral("res_0"));

        verticalLayout->addWidget(res_0);


        horizontalLayout_6->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        exp_1 = new QComboBox(layoutWidget2);
        exp_1->setObjectName(QStringLiteral("exp_1"));
        exp_1->setEditable(true);

        verticalLayout_2->addWidget(exp_1);

        res_1 = new QComboBox(layoutWidget2);
        res_1->setObjectName(QStringLiteral("res_1"));

        verticalLayout_2->addWidget(res_1);


        horizontalLayout_6->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        exp_2 = new QComboBox(layoutWidget2);
        exp_2->setObjectName(QStringLiteral("exp_2"));
        exp_2->setEditable(true);

        verticalLayout_3->addWidget(exp_2);

        res_2 = new QComboBox(layoutWidget2);
        res_2->setObjectName(QStringLiteral("res_2"));

        verticalLayout_3->addWidget(res_2);


        horizontalLayout_6->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        exp_3 = new QComboBox(layoutWidget2);
        exp_3->setObjectName(QStringLiteral("exp_3"));
        exp_3->setEditable(true);

        verticalLayout_4->addWidget(exp_3);

        res_3 = new QComboBox(layoutWidget2);
        res_3->setObjectName(QStringLiteral("res_3"));

        verticalLayout_4->addWidget(res_3);


        horizontalLayout_6->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        exp_4 = new QComboBox(layoutWidget2);
        exp_4->setObjectName(QStringLiteral("exp_4"));
        exp_4->setEditable(true);

        verticalLayout_5->addWidget(exp_4);

        res_4 = new QComboBox(layoutWidget2);
        res_4->setObjectName(QStringLiteral("res_4"));

        verticalLayout_5->addWidget(res_4);


        horizontalLayout_6->addLayout(verticalLayout_5);

        layoutWidget_7 = new QWidget(groupBox_3);
        layoutWidget_7->setObjectName(QStringLiteral("layoutWidget_7"));
        layoutWidget_7->setGeometry(QRect(10, 140, 501, 60));
        horizontalLayout_9 = new QHBoxLayout(layoutWidget_7);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        exp_5 = new QComboBox(layoutWidget_7);
        exp_5->setObjectName(QStringLiteral("exp_5"));
        exp_5->setEditable(true);

        verticalLayout_6->addWidget(exp_5);

        res_5 = new QComboBox(layoutWidget_7);
        res_5->setObjectName(QStringLiteral("res_5"));

        verticalLayout_6->addWidget(res_5);


        horizontalLayout_9->addLayout(verticalLayout_6);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        exp_6 = new QComboBox(layoutWidget_7);
        exp_6->setObjectName(QStringLiteral("exp_6"));
        exp_6->setEditable(true);

        verticalLayout_7->addWidget(exp_6);

        res_6 = new QComboBox(layoutWidget_7);
        res_6->setObjectName(QStringLiteral("res_6"));

        verticalLayout_7->addWidget(res_6);


        horizontalLayout_9->addLayout(verticalLayout_7);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        exp_7 = new QComboBox(layoutWidget_7);
        exp_7->setObjectName(QStringLiteral("exp_7"));
        exp_7->setEditable(true);

        verticalLayout_8->addWidget(exp_7);

        res_7 = new QComboBox(layoutWidget_7);
        res_7->setObjectName(QStringLiteral("res_7"));

        verticalLayout_8->addWidget(res_7);


        horizontalLayout_9->addLayout(verticalLayout_8);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        exp_8 = new QComboBox(layoutWidget_7);
        exp_8->setObjectName(QStringLiteral("exp_8"));
        exp_8->setEditable(true);

        verticalLayout_9->addWidget(exp_8);

        res_8 = new QComboBox(layoutWidget_7);
        res_8->setObjectName(QStringLiteral("res_8"));

        verticalLayout_9->addWidget(res_8);


        horizontalLayout_9->addLayout(verticalLayout_9);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        exp_9 = new QComboBox(layoutWidget_7);
        exp_9->setObjectName(QStringLiteral("exp_9"));
        exp_9->setEditable(true);

        verticalLayout_10->addWidget(exp_9);

        res_9 = new QComboBox(layoutWidget_7);
        res_9->setObjectName(QStringLiteral("res_9"));

        verticalLayout_10->addWidget(res_9);


        horizontalLayout_9->addLayout(verticalLayout_10);

        groupBox_4 = new QGroupBox(Create);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(730, 30, 521, 221));
        layoutWidget_12 = new QWidget(groupBox_4);
        layoutWidget_12->setObjectName(QStringLiteral("layoutWidget_12"));
        layoutWidget_12->setGeometry(QRect(10, 140, 501, 60));
        horizontalLayout_11 = new QHBoxLayout(layoutWidget_12);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);
        verticalLayout_16 = new QVBoxLayout();
        verticalLayout_16->setObjectName(QStringLiteral("verticalLayout_16"));
        exp_15 = new QComboBox(layoutWidget_12);
        exp_15->setObjectName(QStringLiteral("exp_15"));
        exp_15->setEditable(true);

        verticalLayout_16->addWidget(exp_15);

        res_15 = new QComboBox(layoutWidget_12);
        res_15->setObjectName(QStringLiteral("res_15"));

        verticalLayout_16->addWidget(res_15);


        horizontalLayout_11->addLayout(verticalLayout_16);

        verticalLayout_17 = new QVBoxLayout();
        verticalLayout_17->setObjectName(QStringLiteral("verticalLayout_17"));
        exp_16 = new QComboBox(layoutWidget_12);
        exp_16->setObjectName(QStringLiteral("exp_16"));
        exp_16->setEditable(true);

        verticalLayout_17->addWidget(exp_16);

        res_16 = new QComboBox(layoutWidget_12);
        res_16->setObjectName(QStringLiteral("res_16"));

        verticalLayout_17->addWidget(res_16);


        horizontalLayout_11->addLayout(verticalLayout_17);

        verticalLayout_18 = new QVBoxLayout();
        verticalLayout_18->setObjectName(QStringLiteral("verticalLayout_18"));
        exp_17 = new QComboBox(layoutWidget_12);
        exp_17->setObjectName(QStringLiteral("exp_17"));
        exp_17->setEditable(true);

        verticalLayout_18->addWidget(exp_17);

        res_17 = new QComboBox(layoutWidget_12);
        res_17->setObjectName(QStringLiteral("res_17"));

        verticalLayout_18->addWidget(res_17);


        horizontalLayout_11->addLayout(verticalLayout_18);

        verticalLayout_19 = new QVBoxLayout();
        verticalLayout_19->setObjectName(QStringLiteral("verticalLayout_19"));
        exp_18 = new QComboBox(layoutWidget_12);
        exp_18->setObjectName(QStringLiteral("exp_18"));
        exp_18->setEditable(true);

        verticalLayout_19->addWidget(exp_18);

        res_18 = new QComboBox(layoutWidget_12);
        res_18->setObjectName(QStringLiteral("res_18"));

        verticalLayout_19->addWidget(res_18);


        horizontalLayout_11->addLayout(verticalLayout_19);

        verticalLayout_20 = new QVBoxLayout();
        verticalLayout_20->setObjectName(QStringLiteral("verticalLayout_20"));
        exp_19 = new QComboBox(layoutWidget_12);
        exp_19->setObjectName(QStringLiteral("exp_19"));
        exp_19->setEditable(true);

        verticalLayout_20->addWidget(exp_19);

        res_19 = new QComboBox(layoutWidget_12);
        res_19->setObjectName(QStringLiteral("res_19"));

        verticalLayout_20->addWidget(res_19);


        horizontalLayout_11->addLayout(verticalLayout_20);

        layoutWidget3 = new QWidget(groupBox_4);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(11, 30, 501, 60));
        horizontalLayout_10 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        exp_10 = new QComboBox(layoutWidget3);
        exp_10->setObjectName(QStringLiteral("exp_10"));
        exp_10->setEditable(true);

        verticalLayout_11->addWidget(exp_10);

        res_10 = new QComboBox(layoutWidget3);
        res_10->setObjectName(QStringLiteral("res_10"));

        verticalLayout_11->addWidget(res_10);


        horizontalLayout_10->addLayout(verticalLayout_11);

        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        exp_11 = new QComboBox(layoutWidget3);
        exp_11->setObjectName(QStringLiteral("exp_11"));
        exp_11->setEditable(true);

        verticalLayout_12->addWidget(exp_11);

        res_11 = new QComboBox(layoutWidget3);
        res_11->setObjectName(QStringLiteral("res_11"));

        verticalLayout_12->addWidget(res_11);


        horizontalLayout_10->addLayout(verticalLayout_12);

        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        exp_12 = new QComboBox(layoutWidget3);
        exp_12->setObjectName(QStringLiteral("exp_12"));
        exp_12->setEditable(true);

        verticalLayout_13->addWidget(exp_12);

        res_12 = new QComboBox(layoutWidget3);
        res_12->setObjectName(QStringLiteral("res_12"));

        verticalLayout_13->addWidget(res_12);


        horizontalLayout_10->addLayout(verticalLayout_13);

        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        exp_13 = new QComboBox(layoutWidget3);
        exp_13->setObjectName(QStringLiteral("exp_13"));
        exp_13->setEditable(true);

        verticalLayout_14->addWidget(exp_13);

        res_13 = new QComboBox(layoutWidget3);
        res_13->setObjectName(QStringLiteral("res_13"));

        verticalLayout_14->addWidget(res_13);


        horizontalLayout_10->addLayout(verticalLayout_14);

        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setObjectName(QStringLiteral("verticalLayout_15"));
        exp_14 = new QComboBox(layoutWidget3);
        exp_14->setObjectName(QStringLiteral("exp_14"));
        exp_14->setEditable(true);

        verticalLayout_15->addWidget(exp_14);

        res_14 = new QComboBox(layoutWidget3);
        res_14->setObjectName(QStringLiteral("res_14"));

        verticalLayout_15->addWidget(res_14);


        horizontalLayout_10->addLayout(verticalLayout_15);

        layoutWidget->raise();
        layoutWidget_12->raise();
        label_15 = new QLabel(Create);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(370, 560, 21, 91));
        comment = new QPlainTextEdit(Create);
        comment->setObjectName(QStringLiteral("comment"));
        comment->setGeometry(QRect(410, 580, 291, 71));
        lname = new QLineEdit(Create);
        lname->setObjectName(QStringLiteral("lname"));
        lname->setEnabled(false);
        lname->setGeometry(QRect(740, 590, 65, 22));

        retranslateUi(Create);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Create);
    } // setupUi

    void retranslateUi(QDialog *Create)
    {
        Create->setWindowTitle(QApplication::translate("Create", "\345\275\225\345\205\245", 0));
        rightBtn->setText(QApplication::translate("Create", "\345\217\263\346\211\213", 0));
        leftHand->setText(QString());
        captureBtn->setText(QApplication::translate("Create", "\346\213\215\347\205\247", 0));
        lastPreviewLabel->setText(QString());
        label_8->setText(QApplication::translate("Create", "\345\267\246\346\211\213", 0));
        label_10->setText(QApplication::translate("Create", "\351\230\264\346\200\247\345\257\271\347\205\247\357\274\210\347\224\237\347\220\206\347\233\220\346\260\264\357\274\211", 0));
        res_A->clear();
        res_A->insertItems(0, QStringList()
         << QApplication::translate("Create", "-", 0)
         << QApplication::translate("Create", "+", 0)
         << QApplication::translate("Create", "++", 0)
         << QApplication::translate("Create", "+++", 0)
         << QApplication::translate("Create", "++++", 0)
        );
        label_11->setText(QApplication::translate("Create", "\351\230\263\346\200\247\345\257\271\347\205\247\357\274\210\347\273\204\350\203\272\357\274\211", 0));
        label_9->setText(QApplication::translate("Create", "\345\217\263\346\211\213", 0));
        rightHand->setText(QString());
        label_12->setText(QApplication::translate("Create", "\346\212\245\345\221\212\344\272\272", 0));
        leftBtn->setText(QApplication::translate("Create", "\345\267\246\346\211\213", 0));
        groupBox_2->setTitle(QApplication::translate("Create", "\347\227\207\347\212\266", 0));
        zheng0->setText(QApplication::translate("Create", "\351\274\273\345\241\236", 0));
        zheng1->setText(QApplication::translate("Create", "\351\274\273\347\227\222", 0));
        zheng2->setText(QApplication::translate("Create", "\345\226\267\345\232\217", 0));
        zheng3->setText(QApplication::translate("Create", "\346\270\205\346\266\225", 0));
        zheng4->setText(QApplication::translate("Create", "\347\234\274\347\227\222", 0));
        zheng5->setText(QApplication::translate("Create", "\345\222\275\347\227\222", 0));
        zheng6->setText(QApplication::translate("Create", "\345\222\263\345\227\275", 0));
        zheng7->setText(QApplication::translate("Create", "\350\203\270\351\227\267", 0));
        label_7->setText(QApplication::translate("Create", "\345\271\264", 0));
        leftDelBtn->setText(QApplication::translate("Create", "\345\210\240\351\231\244", 0));
        groupBox->setTitle(QApplication::translate("Create", "\346\202\243\350\200\205\344\277\241\346\201\257", 0));
        label->setText(QApplication::translate("Create", "\345\247\223\345\220\215", 0));
        label_3->setText(QApplication::translate("Create", "\346\200\247\345\210\253", 0));
        label_4->setText(QApplication::translate("Create", "\345\271\264\351\276\204", 0));
        label_5->setText(QApplication::translate("Create", "\347\247\221\345\256\244", 0));
        label_6->setText(QApplication::translate("Create", "\347\227\205\346\241\210\345\217\267", 0));
        label_13->setText(QApplication::translate("Create", "\350\201\224\347\263\273\346\226\271\345\274\217", 0));
        label_14->setText(QApplication::translate("Create", "\350\201\224\347\263\273\345\234\260\345\235\200", 0));
        res_B->clear();
        res_B->insertItems(0, QStringList()
         << QApplication::translate("Create", "-", 0)
         << QApplication::translate("Create", "+", 0)
         << QApplication::translate("Create", "++", 0)
         << QApplication::translate("Create", "+++", 0)
         << QApplication::translate("Create", "++++", 0)
        );
        rightDelBtn->setText(QApplication::translate("Create", "\345\210\240\351\231\244", 0));
        saveBtn->setText(QApplication::translate("Create", "\344\277\235\345\255\230\345\271\266\346\211\223\345\215\260", 0));
        closeBtn->setText(QApplication::translate("Create", "\345\210\240\351\231\244", 0));
        groupBox_3->setTitle(QApplication::translate("Create", "\351\243\237\347\211\251\347\273\204", 0));
        exp_0->clear();
        exp_0->insertItems(0, QStringList()
         << QApplication::translate("Create", "\351\270\241\350\233\213", 0)
         << QApplication::translate("Create", "\347\211\233\345\245\266", 0)
         << QApplication::translate("Create", "\347\211\233\350\202\211", 0)
         << QApplication::translate("Create", "\345\260\217\350\231\276", 0)
         << QApplication::translate("Create", "\350\237\271\350\202\211", 0)
         << QApplication::translate("Create", "\350\212\222\346\236\234", 0)
         << QApplication::translate("Create", "\346\241\203\345\255\220", 0)
         << QApplication::translate("Create", "\350\213\271\346\236\234", 0)
         << QApplication::translate("Create", "\351\246\231\350\225\211", 0)
         << QApplication::translate("Create", "\350\212\261\347\224\237", 0)
        );
        res_0->clear();
        res_0->insertItems(0, QStringList()
         << QApplication::translate("Create", "-", 0)
         << QApplication::translate("Create", "+", 0)
         << QApplication::translate("Create", "++", 0)
         << QApplication::translate("Create", "+++", 0)
         << QApplication::translate("Create", "++++", 0)
        );
        exp_1->clear();
        exp_1->insertItems(0, QStringList()
         << QApplication::translate("Create", "\347\211\233\345\245\266", 0)
         << QApplication::translate("Create", "\351\270\241\350\233\213", 0)
         << QApplication::translate("Create", "\347\211\233\350\202\211", 0)
         << QApplication::translate("Create", "\345\260\217\350\231\276", 0)
         << QApplication::translate("Create", "\350\237\271\350\202\211", 0)
         << QApplication::translate("Create", "\350\212\222\346\236\234", 0)
         << QApplication::translate("Create", "\346\241\203\345\255\220", 0)
         << QApplication::translate("Create", "\350\213\271\346\236\234", 0)
         << QApplication::translate("Create", "\351\246\231\350\225\211", 0)
         << QApplication::translate("Create", "\350\212\261\347\224\237", 0)
        );
        res_1->clear();
        res_1->insertItems(0, QStringList()
         << QApplication::translate("Create", "-", 0)
         << QApplication::translate("Create", "+", 0)
         << QApplication::translate("Create", "++", 0)
         << QApplication::translate("Create", "+++", 0)
         << QApplication::translate("Create", "++++", 0)
        );
        exp_2->clear();
        exp_2->insertItems(0, QStringList()
         << QApplication::translate("Create", "\347\211\233\350\202\211", 0)
         << QApplication::translate("Create", "\351\270\241\350\233\213", 0)
         << QApplication::translate("Create", "\347\211\233\345\245\266", 0)
         << QApplication::translate("Create", "\345\260\217\350\231\276", 0)
         << QApplication::translate("Create", "\350\237\271\350\202\211", 0)
         << QApplication::translate("Create", "\350\212\222\346\236\234", 0)
         << QApplication::translate("Create", "\346\241\203\345\255\220", 0)
         << QApplication::translate("Create", "\350\213\271\346\236\234", 0)
         << QApplication::translate("Create", "\351\246\231\350\225\211", 0)
         << QApplication::translate("Create", "\350\212\261\347\224\237", 0)
        );
        res_2->clear();
        res_2->insertItems(0, QStringList()
         << QApplication::translate("Create", "-", 0)
         << QApplication::translate("Create", "+", 0)
         << QApplication::translate("Create", "++", 0)
         << QApplication::translate("Create", "+++", 0)
         << QApplication::translate("Create", "++++", 0)
        );
        exp_3->clear();
        exp_3->insertItems(0, QStringList()
         << QApplication::translate("Create", "\345\260\217\350\231\276", 0)
         << QApplication::translate("Create", "\351\270\241\350\233\213", 0)
         << QApplication::translate("Create", "\347\211\233\345\245\266", 0)
         << QApplication::translate("Create", "\347\211\233\350\202\211", 0)
         << QApplication::translate("Create", "\350\237\271\350\202\211", 0)
         << QApplication::translate("Create", "\350\212\222\346\236\234", 0)
         << QApplication::translate("Create", "\346\241\203\345\255\220", 0)
         << QApplication::translate("Create", "\350\213\271\346\236\234", 0)
         << QApplication::translate("Create", "\351\246\231\350\225\211", 0)
         << QApplication::translate("Create", "\350\212\261\347\224\237", 0)
        );
        res_3->clear();
        res_3->insertItems(0, QStringList()
         << QApplication::translate("Create", "-", 0)
         << QApplication::translate("Create", "+", 0)
         << QApplication::translate("Create", "++", 0)
         << QApplication::translate("Create", "+++", 0)
         << QApplication::translate("Create", "++++", 0)
        );
        exp_4->clear();
        exp_4->insertItems(0, QStringList()
         << QApplication::translate("Create", "\350\237\271\350\202\211", 0)
         << QApplication::translate("Create", "\351\270\241\350\233\213", 0)
         << QApplication::translate("Create", "\347\211\233\345\245\266", 0)
         << QApplication::translate("Create", "\347\211\233\350\202\211", 0)
         << QApplication::translate("Create", "\345\260\217\350\231\276", 0)
         << QApplication::translate("Create", "\350\212\222\346\236\234", 0)
         << QApplication::translate("Create", "\346\241\203\345\255\220", 0)
         << QApplication::translate("Create", "\350\213\271\346\236\234", 0)
         << QApplication::translate("Create", "\351\246\231\350\225\211", 0)
         << QApplication::translate("Create", "\350\212\261\347\224\237", 0)
        );
        res_4->clear();
        res_4->insertItems(0, QStringList()
         << QApplication::translate("Create", "-", 0)
         << QApplication::translate("Create", "+", 0)
         << QApplication::translate("Create", "++", 0)
         << QApplication::translate("Create", "+++", 0)
         << QApplication::translate("Create", "++++", 0)
        );
        exp_5->clear();
        exp_5->insertItems(0, QStringList()
         << QApplication::translate("Create", "\350\212\222\346\236\234", 0)
         << QApplication::translate("Create", "\351\270\241\350\233\213", 0)
         << QApplication::translate("Create", "\347\211\233\345\245\266", 0)
         << QApplication::translate("Create", "\347\211\233\350\202\211", 0)
         << QApplication::translate("Create", "\345\260\217\350\231\276", 0)
         << QApplication::translate("Create", "\350\237\271\350\202\211", 0)
         << QApplication::translate("Create", "\346\241\203\345\255\220", 0)
         << QApplication::translate("Create", "\350\213\271\346\236\234", 0)
         << QApplication::translate("Create", "\351\246\231\350\225\211", 0)
         << QApplication::translate("Create", "\350\212\261\347\224\237", 0)
        );
        res_5->clear();
        res_5->insertItems(0, QStringList()
         << QApplication::translate("Create", "-", 0)
         << QApplication::translate("Create", "+", 0)
         << QApplication::translate("Create", "++", 0)
         << QApplication::translate("Create", "+++", 0)
         << QApplication::translate("Create", "++++", 0)
        );
        exp_6->clear();
        exp_6->insertItems(0, QStringList()
         << QApplication::translate("Create", "\346\241\203\345\255\220", 0)
         << QApplication::translate("Create", "\351\270\241\350\233\213", 0)
         << QApplication::translate("Create", "\347\211\233\345\245\266", 0)
         << QApplication::translate("Create", "\347\211\233\350\202\211", 0)
         << QApplication::translate("Create", "\345\260\217\350\231\276", 0)
         << QApplication::translate("Create", "\350\237\271\350\202\211", 0)
         << QApplication::translate("Create", "\350\212\222\346\236\234", 0)
         << QApplication::translate("Create", "\350\213\271\346\236\234", 0)
         << QApplication::translate("Create", "\351\246\231\350\225\211", 0)
         << QApplication::translate("Create", "\350\212\261\347\224\237", 0)
        );
        res_6->clear();
        res_6->insertItems(0, QStringList()
         << QApplication::translate("Create", "-", 0)
         << QApplication::translate("Create", "+", 0)
         << QApplication::translate("Create", "++", 0)
         << QApplication::translate("Create", "+++", 0)
         << QApplication::translate("Create", "++++", 0)
        );
        exp_7->clear();
        exp_7->insertItems(0, QStringList()
         << QApplication::translate("Create", "\350\213\271\346\236\234", 0)
         << QApplication::translate("Create", "\351\270\241\350\233\213", 0)
         << QApplication::translate("Create", "\347\211\233\345\245\266", 0)
         << QApplication::translate("Create", "\347\211\233\350\202\211", 0)
         << QApplication::translate("Create", "\345\260\217\350\231\276", 0)
         << QApplication::translate("Create", "\350\237\271\350\202\211", 0)
         << QApplication::translate("Create", "\350\212\222\346\236\234", 0)
         << QApplication::translate("Create", "\346\241\203\345\255\220", 0)
         << QApplication::translate("Create", "\351\246\231\350\225\211", 0)
         << QApplication::translate("Create", "\350\212\261\347\224\237", 0)
        );
        res_7->clear();
        res_7->insertItems(0, QStringList()
         << QApplication::translate("Create", "-", 0)
         << QApplication::translate("Create", "+", 0)
         << QApplication::translate("Create", "++", 0)
         << QApplication::translate("Create", "+++", 0)
         << QApplication::translate("Create", "++++", 0)
        );
        exp_8->clear();
        exp_8->insertItems(0, QStringList()
         << QApplication::translate("Create", "\351\246\231\350\225\211", 0)
         << QApplication::translate("Create", "\351\270\241\350\233\213", 0)
         << QApplication::translate("Create", "\347\211\233\345\245\266", 0)
         << QApplication::translate("Create", "\347\211\233\350\202\211", 0)
         << QApplication::translate("Create", "\345\260\217\350\231\276", 0)
         << QApplication::translate("Create", "\350\237\271\350\202\211", 0)
         << QApplication::translate("Create", "\350\212\222\346\236\234", 0)
         << QApplication::translate("Create", "\346\241\203\345\255\220", 0)
         << QApplication::translate("Create", "\350\213\271\346\236\234", 0)
         << QApplication::translate("Create", "\350\212\261\347\224\237", 0)
        );
        res_8->clear();
        res_8->insertItems(0, QStringList()
         << QApplication::translate("Create", "-", 0)
         << QApplication::translate("Create", "+", 0)
         << QApplication::translate("Create", "++", 0)
         << QApplication::translate("Create", "+++", 0)
         << QApplication::translate("Create", "++++", 0)
        );
        exp_9->clear();
        exp_9->insertItems(0, QStringList()
         << QApplication::translate("Create", "\350\212\261\347\224\237", 0)
         << QApplication::translate("Create", "\351\270\241\350\233\213", 0)
         << QApplication::translate("Create", "\347\211\233\345\245\266", 0)
         << QApplication::translate("Create", "\347\211\233\350\202\211", 0)
         << QApplication::translate("Create", "\345\260\217\350\231\276", 0)
         << QApplication::translate("Create", "\350\237\271\350\202\211", 0)
         << QApplication::translate("Create", "\350\212\222\346\236\234", 0)
         << QApplication::translate("Create", "\346\241\203\345\255\220", 0)
         << QApplication::translate("Create", "\350\213\271\346\236\234", 0)
         << QApplication::translate("Create", "\351\246\231\350\225\211", 0)
        );
        res_9->clear();
        res_9->insertItems(0, QStringList()
         << QApplication::translate("Create", "-", 0)
         << QApplication::translate("Create", "+", 0)
         << QApplication::translate("Create", "++", 0)
         << QApplication::translate("Create", "+++", 0)
         << QApplication::translate("Create", "++++", 0)
        );
        groupBox_4->setTitle(QApplication::translate("Create", "\345\220\270\345\205\245\347\273\204", 0));
        exp_15->clear();
        exp_15->insertItems(0, QStringList()
         << QApplication::translate("Create", "\346\243\211\347\273\222", 0)
         << QApplication::translate("Create", "\347\262\211\345\260\230\350\236\250", 0)
         << QApplication::translate("Create", "\345\261\213\345\260\230\350\236\250", 0)
         << QApplication::translate("Create", "\346\235\202\350\215\211", 0)
         << QApplication::translate("Create", "\346\240\221I", 0)
         << QApplication::translate("Create", "\346\240\221II", 0)
         << QApplication::translate("Create", "\347\276\275\346\257\233", 0)
         << QApplication::translate("Create", "\350\237\221\350\236\202", 0)
         << QApplication::translate("Create", "\351\234\211\350\217\214I", 0)
         << QApplication::translate("Create", "\345\212\250\347\211\251\346\257\233I", 0)
        );
        res_15->clear();
        res_15->insertItems(0, QStringList()
         << QApplication::translate("Create", "-", 0)
         << QApplication::translate("Create", "+", 0)
         << QApplication::translate("Create", "++", 0)
         << QApplication::translate("Create", "+++", 0)
         << QApplication::translate("Create", "++++", 0)
        );
        exp_16->clear();
        exp_16->insertItems(0, QStringList()
         << QApplication::translate("Create", "\347\276\275\346\257\233", 0)
         << QApplication::translate("Create", "\347\262\211\345\260\230\350\236\250", 0)
         << QApplication::translate("Create", "\345\261\213\345\260\230\350\236\250", 0)
         << QApplication::translate("Create", "\346\235\202\350\215\211", 0)
         << QApplication::translate("Create", "\346\240\221I", 0)
         << QApplication::translate("Create", "\346\240\221II", 0)
         << QApplication::translate("Create", "\346\243\211\347\273\222", 0)
         << QApplication::translate("Create", "\350\237\221\350\236\202", 0)
         << QApplication::translate("Create", "\351\234\211\350\217\214I", 0)
         << QApplication::translate("Create", "\345\212\250\347\211\251\346\257\233I", 0)
        );
        res_16->clear();
        res_16->insertItems(0, QStringList()
         << QApplication::translate("Create", "-", 0)
         << QApplication::translate("Create", "+", 0)
         << QApplication::translate("Create", "++", 0)
         << QApplication::translate("Create", "+++", 0)
         << QApplication::translate("Create", "++++", 0)
        );
        exp_17->clear();
        exp_17->insertItems(0, QStringList()
         << QApplication::translate("Create", "\350\237\221\350\236\202", 0)
         << QApplication::translate("Create", "\347\262\211\345\260\230\350\236\250", 0)
         << QApplication::translate("Create", "\345\261\213\345\260\230\350\236\250", 0)
         << QApplication::translate("Create", "\346\235\202\350\215\211", 0)
         << QApplication::translate("Create", "\346\240\221I", 0)
         << QApplication::translate("Create", "\346\240\221II", 0)
         << QApplication::translate("Create", "\346\243\211\347\273\222", 0)
         << QApplication::translate("Create", "\347\276\275\346\257\233", 0)
         << QApplication::translate("Create", "\351\234\211\350\217\214I", 0)
         << QApplication::translate("Create", "\345\212\250\347\211\251\346\257\233I", 0)
        );
        res_17->clear();
        res_17->insertItems(0, QStringList()
         << QApplication::translate("Create", "-", 0)
         << QApplication::translate("Create", "+", 0)
         << QApplication::translate("Create", "++", 0)
         << QApplication::translate("Create", "+++", 0)
         << QApplication::translate("Create", "++++", 0)
        );
        exp_18->clear();
        exp_18->insertItems(0, QStringList()
         << QApplication::translate("Create", "\351\234\211\350\217\214I", 0)
         << QApplication::translate("Create", "\347\262\211\345\260\230\350\236\250", 0)
         << QApplication::translate("Create", "\345\261\213\345\260\230\350\236\250", 0)
         << QApplication::translate("Create", "\346\235\202\350\215\211", 0)
         << QApplication::translate("Create", "\346\240\221I", 0)
         << QApplication::translate("Create", "\346\240\221II", 0)
         << QApplication::translate("Create", "\346\243\211\347\273\222", 0)
         << QApplication::translate("Create", "\347\276\275\346\257\233", 0)
         << QApplication::translate("Create", "\350\237\221\350\236\202", 0)
         << QApplication::translate("Create", "\345\212\250\347\211\251\346\257\233I", 0)
        );
        res_18->clear();
        res_18->insertItems(0, QStringList()
         << QApplication::translate("Create", "-", 0)
         << QApplication::translate("Create", "+", 0)
         << QApplication::translate("Create", "++", 0)
         << QApplication::translate("Create", "+++", 0)
         << QApplication::translate("Create", "++++", 0)
        );
        exp_19->clear();
        exp_19->insertItems(0, QStringList()
         << QApplication::translate("Create", "\345\212\250\347\211\251\346\257\233I", 0)
         << QApplication::translate("Create", "\347\262\211\345\260\230\350\236\250", 0)
         << QApplication::translate("Create", "\345\261\213\345\260\230\350\236\250", 0)
         << QApplication::translate("Create", "\346\235\202\350\215\211", 0)
         << QApplication::translate("Create", "\346\240\221I", 0)
         << QApplication::translate("Create", "\346\240\221II", 0)
         << QApplication::translate("Create", "\346\243\211\347\273\222", 0)
         << QApplication::translate("Create", "\347\276\275\346\257\233", 0)
         << QApplication::translate("Create", "\350\237\221\350\236\202", 0)
         << QApplication::translate("Create", "\351\234\211\350\217\214I", 0)
        );
        res_19->clear();
        res_19->insertItems(0, QStringList()
         << QApplication::translate("Create", "-", 0)
         << QApplication::translate("Create", "+", 0)
         << QApplication::translate("Create", "++", 0)
         << QApplication::translate("Create", "+++", 0)
         << QApplication::translate("Create", "++++", 0)
        );
        exp_10->clear();
        exp_10->insertItems(0, QStringList()
         << QApplication::translate("Create", "\347\262\211\345\260\230\350\236\250", 0)
         << QApplication::translate("Create", "\345\261\213\345\260\230\350\236\250", 0)
         << QApplication::translate("Create", "\346\235\202\350\215\211", 0)
         << QApplication::translate("Create", "\346\240\221I", 0)
         << QApplication::translate("Create", "\346\240\221II", 0)
         << QApplication::translate("Create", "\346\243\211\347\273\222", 0)
         << QApplication::translate("Create", "\347\276\275\346\257\233", 0)
         << QApplication::translate("Create", "\350\237\221\350\236\202", 0)
         << QApplication::translate("Create", "\351\234\211\350\217\214I", 0)
         << QApplication::translate("Create", "\345\212\250\347\211\251\346\257\233I", 0)
        );
        res_10->clear();
        res_10->insertItems(0, QStringList()
         << QApplication::translate("Create", "-", 0)
         << QApplication::translate("Create", "+", 0)
         << QApplication::translate("Create", "++", 0)
         << QApplication::translate("Create", "+++", 0)
         << QApplication::translate("Create", "++++", 0)
        );
        exp_11->clear();
        exp_11->insertItems(0, QStringList()
         << QApplication::translate("Create", "\345\261\213\345\260\230\350\236\250", 0)
         << QApplication::translate("Create", "\347\262\211\345\260\230\350\236\250", 0)
         << QApplication::translate("Create", "\346\235\202\350\215\211", 0)
         << QApplication::translate("Create", "\346\240\221I", 0)
         << QApplication::translate("Create", "\346\240\221II", 0)
         << QApplication::translate("Create", "\346\243\211\347\273\222", 0)
         << QApplication::translate("Create", "\347\276\275\346\257\233", 0)
         << QApplication::translate("Create", "\350\237\221\350\236\202", 0)
         << QApplication::translate("Create", "\351\234\211\350\217\214I", 0)
         << QApplication::translate("Create", "\345\212\250\347\211\251\346\257\233I", 0)
        );
        res_11->clear();
        res_11->insertItems(0, QStringList()
         << QApplication::translate("Create", "-", 0)
         << QApplication::translate("Create", "+", 0)
         << QApplication::translate("Create", "++", 0)
         << QApplication::translate("Create", "+++", 0)
         << QApplication::translate("Create", "++++", 0)
        );
        exp_12->clear();
        exp_12->insertItems(0, QStringList()
         << QApplication::translate("Create", "\346\235\202\350\215\211", 0)
         << QApplication::translate("Create", "\347\262\211\345\260\230\350\236\250", 0)
         << QApplication::translate("Create", "\345\261\213\345\260\230\350\236\250", 0)
         << QApplication::translate("Create", "\346\240\221I", 0)
         << QApplication::translate("Create", "\346\240\221II", 0)
         << QApplication::translate("Create", "\346\243\211\347\273\222", 0)
         << QApplication::translate("Create", "\347\276\275\346\257\233", 0)
         << QApplication::translate("Create", "\350\237\221\350\236\202", 0)
         << QApplication::translate("Create", "\351\234\211\350\217\214I", 0)
         << QApplication::translate("Create", "\345\212\250\347\211\251\346\257\233I", 0)
        );
        res_12->clear();
        res_12->insertItems(0, QStringList()
         << QApplication::translate("Create", "-", 0)
         << QApplication::translate("Create", "+", 0)
         << QApplication::translate("Create", "++", 0)
         << QApplication::translate("Create", "+++", 0)
         << QApplication::translate("Create", "++++", 0)
        );
        exp_13->clear();
        exp_13->insertItems(0, QStringList()
         << QApplication::translate("Create", "\346\240\221I", 0)
         << QApplication::translate("Create", "\347\262\211\345\260\230\350\236\250", 0)
         << QApplication::translate("Create", "\345\261\213\345\260\230\350\236\250", 0)
         << QApplication::translate("Create", "\346\235\202\350\215\211", 0)
         << QApplication::translate("Create", "\346\240\221II", 0)
         << QApplication::translate("Create", "\346\243\211\347\273\222", 0)
         << QApplication::translate("Create", "\347\276\275\346\257\233", 0)
         << QApplication::translate("Create", "\350\237\221\350\236\202", 0)
         << QApplication::translate("Create", "\351\234\211\350\217\214I", 0)
         << QApplication::translate("Create", "\345\212\250\347\211\251\346\257\233I", 0)
        );
        res_13->clear();
        res_13->insertItems(0, QStringList()
         << QApplication::translate("Create", "-", 0)
         << QApplication::translate("Create", "+", 0)
         << QApplication::translate("Create", "++", 0)
         << QApplication::translate("Create", "+++", 0)
         << QApplication::translate("Create", "++++", 0)
        );
        exp_14->clear();
        exp_14->insertItems(0, QStringList()
         << QApplication::translate("Create", "\346\240\221II", 0)
         << QApplication::translate("Create", "\347\262\211\345\260\230\350\236\250", 0)
         << QApplication::translate("Create", "\345\261\213\345\260\230\350\236\250", 0)
         << QApplication::translate("Create", "\346\235\202\350\215\211", 0)
         << QApplication::translate("Create", "\346\240\221I", 0)
         << QApplication::translate("Create", "\346\243\211\347\273\222", 0)
         << QApplication::translate("Create", "\347\276\275\346\257\233", 0)
         << QApplication::translate("Create", "\350\237\221\350\236\202", 0)
         << QApplication::translate("Create", "\351\234\211\350\217\214I", 0)
         << QApplication::translate("Create", "\345\212\250\347\211\251\346\257\233I", 0)
        );
        res_14->clear();
        res_14->insertItems(0, QStringList()
         << QApplication::translate("Create", "-", 0)
         << QApplication::translate("Create", "+", 0)
         << QApplication::translate("Create", "++", 0)
         << QApplication::translate("Create", "+++", 0)
         << QApplication::translate("Create", "++++", 0)
        );
        label_15->setText(QApplication::translate("Create", "\345\244\207\346\263\250", 0));
    } // retranslateUi

};

namespace Ui {
    class Create: public Ui_Create {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATE_H
