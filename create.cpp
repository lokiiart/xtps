#include "create.h"
#include "ui_create.h"

#include <QMediaService>
#include <QMediaRecorder>
#include <QCameraViewfinder>
#include <QCameraInfo>
#include <QMediaMetaData>
#include <QSqlQuery>
#include <QCameraImageCapture>
#include <QDir>
#include <QTime>
#include <QTextDocumentWriter>
#include <QTextDocument>
#include <QMessageBox>
#include <QPrintPreviewDialog>
#include <QPrinter>
#include <QPrinterInfo>
#include <QPdfWriter>
#include <QPainter>
#include <QTextTable>
#include <QTextTableFormat>


Create::Create(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Create),
    camera(new QCamera)
{
    ui->setupUi(this);

    // 摄像头处理
    qDebug()<< "im init!1!"<<endl;
    if(QCameraInfo::availableCameras().count()!=0){
        camera = new QCamera(QCameraInfo::defaultCamera());
        //  TO-DO: if defaultCamera not exists, report error then quit
        camera->setViewfinder(ui->cameraWidget);
        camera->start();
    }else{
        QMessageBox::critical(NULL, "提示", "未找到默认摄像头");
    }

    //数据处理
    patient = new Patient();

    ui->leftBtn->setEnabled(false);
    ui->rightBtn->setEnabled(false);
    ui->leftDelBtn->setEnabled(false);
    ui->rightDelBtn->setEnabled(false);
    ui->saveBtn->setEnabled(false);
    ui->ssaveBtn->setEnabled(false);
}

Create::~Create()
{
    qDebug()<< "im over"<<endl;
    delete ui;
    delete camera;
}

void Create::on_saveBtn_clicked()
{
    qDebug()<<"TMPDIR:" << QDir::currentPath();
    //TO-DO 判断输入不完整的情况
    this->patient->fName = ui->fname->text();
    this->patient->sGender = ui->gender->text();
    this->patient->sAge = ui->age->text();
    this->patient->sDepartment = ui->department->text();
    this->patient->sBedNumber = ui->bedNum->text();
    this->patient->bSymptom[0] = ui->zheng0->isChecked()?true:false;
    this->patient->bSymptom[1] = ui->zheng1->isChecked()?true:false;
    this->patient->bSymptom[2] = ui->zheng2->isChecked()?true:false;
    this->patient->bSymptom[3] = ui->zheng3->isChecked()?true:false;
    this->patient->bSymptom[4] = ui->zheng4->isChecked()?true:false;
    this->patient->bSymptom[5] = ui->zheng5->isChecked()?true:false;
    this->patient->bSymptom[6] = ui->zheng6->isChecked()?true:false;
    this->patient->bSymptom[7] = ui->zheng7->isChecked()?true:false;
    this->patient->sYear = ui->year->text();
    this->patient->phone = ui->phone->text();
    this->patient->address = ui->address->text();
    this->patient->comment = ui->comment->toPlainText();


    this->patient->exp_0 = ui->exp_0->currentText();
    this->patient->exp_1 = ui->exp_1->currentText();
    this->patient->exp_2 = ui->exp_2->currentText();
    this->patient->exp_3 = ui->exp_3->currentText();
    this->patient->exp_4 = ui->exp_4->currentText();
    this->patient->exp_5 = ui->exp_5->currentText();
    this->patient->exp_6 = ui->exp_6->currentText();
    this->patient->exp_7 = ui->exp_7->currentText();
    this->patient->exp_8 = ui->exp_8->currentText();
    this->patient->exp_9 = ui->exp_9->currentText();
    this->patient->exp_10 = ui->exp_10->currentText();
    this->patient->exp_11 = ui->exp_11->currentText();
    this->patient->exp_12 = ui->exp_12->currentText();
    this->patient->exp_13 = ui->exp_13->currentText();
    this->patient->exp_14 = ui->exp_14->currentText();
    this->patient->exp_15 = ui->exp_15->currentText();
    this->patient->exp_16 = ui->exp_16->currentText();
    this->patient->exp_17 = ui->exp_17->currentText();
    this->patient->exp_18 = ui->exp_18->currentText();
    this->patient->exp_19 = ui->exp_19->currentText();

    this->patient->res_0 = ui->res_0->currentText();
    this->patient->res_1 = ui->res_1->currentText();
    this->patient->res_2 = ui->res_2->currentText();
    this->patient->res_3 = ui->res_3->currentText();
    this->patient->res_4 = ui->res_4->currentText();
    this->patient->res_5 = ui->res_5->currentText();
    this->patient->res_6 = ui->res_6->currentText();
    this->patient->res_7 = ui->res_7->currentText();
    this->patient->res_8 = ui->res_8->currentText();
    this->patient->res_9 = ui->res_9->currentText();
    this->patient->res_10 = ui->res_10->currentText();
    this->patient->res_11 = ui->res_11->currentText();
    this->patient->res_12 = ui->res_12->currentText();
    this->patient->res_13 = ui->res_13->currentText();
    this->patient->res_14 = ui->res_14->currentText();
    this->patient->res_15 = ui->res_15->currentText();
    this->patient->res_16 = ui->res_16->currentText();
    this->patient->res_17 = ui->res_17->currentText();
    this->patient->res_18 = ui->res_18->currentText();
    this->patient->res_19 = ui->res_19->currentText();
    this->patient->reporter = ui->reporter->text();
    this->patient->date = QDateTime::currentDateTime().toString("yyyy-MM-dd");
    this->patient->allergies = ui->allergies->text();
    this->patient->medicine = ui->medicine->currentText();
    this->patient->medicineTime = ui->medicineTime->text();


    this->patient->res_A = ui->res_A->currentText();
    this->patient->res_B = ui->res_B->currentText();

    if(this->patient->sBedNumber.isEmpty()){
        QMessageBox::critical(NULL, "提示", "请正确填写病案号");
        ui->saveBtn->setEnabled(false);
        return;
    }

//    return a file address
//    doPaint(docAddress);

    QPrinter *printer = new QPrinter();
    printer->setPageSize(QPrinter::A4);
//    QPrintPreviewDialog preview(doPaint(docAddress));
    QPrintPreviewDialog preview(printer);
    preview.setWindowFlags(Qt::Window);
    connect(&preview, SIGNAL(paintRequested(QPrinter *)), this, SLOT(printPreview(QPrinter *)));
    preview.exec();


//    this->patient->doc=docAddress;
    //return a bool 保存成功要有反馈
    this->patient->save();
}

void Create::printPreview(QPrinter *printer){
    doPaint(printer);
//    doPrint(printer);
}

void Create::doPaint(QPrinter *printer){

    QImage leftImage;
    leftImage.load(this->patient->sLeftJPG);
    QImage rightImage;
    rightImage.load(this->patient->sRightJPG);
    QTextDocument textDoc;
    textDoc.addResource(QTextDocument::ImageResource, QUrl("data://leftJPG.jpg"), QVariant(leftImage));
    textDoc.addResource(QTextDocument::ImageResource, QUrl("data://rightJPG.jpg"), QVariant(rightImage));

    QTextCursor cursor(&textDoc);

//    cursor.insertHtml(html);
//    //header
    QTextCharFormat header(cursor.charFormat());
    QTextBlockFormat blockFormat;
    blockFormat.setAlignment(Qt::AlignHCenter);
    blockFormat.setBottomMargin(5);
    blockFormat.setTopMargin(5);
    cursor.setBlockFormat(blockFormat);
    header.setFontFamily("KaiTi_GB2312");
//    header.setFontFamily("WenQuanYi Zen Hei");
    header.setVerticalAlignment(QTextCharFormat::AlignMiddle);
    header.setFontWeight(QFont::Bold);
    header.setForeground(Qt::darkBlue);
    header.setFontPointSize(20);
    cursor.insertText("中南大学湘雅医院耳鼻咽喉头颈外科", header);


    cursor.insertBlock();

    //title
    QTextCharFormat title(cursor.charFormat());
    title.setFontPointSize(18);
    title.setFontFamily("宋体");
    title.setForeground(Qt::blue);
    blockFormat.setBottomMargin(3);
    cursor.setBlockFormat(blockFormat);
    cursor.insertText("变应原点刺检测报告单",title);
    cursor.insertHtml("<hr />");
    cursor.setCharFormat(title);


    //basic info
    QTextTableFormat basicTableFormat;
    basicTableFormat.setBorder(0);
    basicTableFormat.setWidth(printer->width()-60);
    basicTableFormat.setPadding(5);
    QTextTable *basicTable=cursor.insertTable(3,3, basicTableFormat);
    basicTable->mergeCells(2,1,1,2);

    QTextCursor basicCursor;

    QTextCharFormat tableTitle(basicCursor.charFormat());
    tableTitle.setForeground(Qt::blue);
    tableTitle.setFontFamily("宋体");
    tableTitle.setFontPointSize(12);
    QTextCharFormat tableContent(basicCursor.charFormat());
    tableContent.setForeground(Qt::black);
    tableContent.setFontPointSize(12);
    tableContent.setFontFamily("宋体");

    basicCursor=basicTable->cellAt(0,0).firstCursorPosition();
    basicCursor.insertText("姓   名：",tableTitle);
    basicCursor.insertText(this->patient->fName+this->patient->lName,tableContent);
    basicCursor=basicTable->cellAt(0,1).firstCursorPosition();
    basicCursor.insertText("性  别：", tableTitle);
    basicCursor.insertText(this->patient->sGender,tableContent);
    basicCursor=basicTable->cellAt(0,2).firstCursorPosition();
    basicCursor.insertText("年   龄：", tableTitle);
    basicCursor.insertText(this->patient->sAge,tableContent);
    basicCursor=basicTable->cellAt(1,0).firstCursorPosition();
    basicCursor.insertText("科   室：",tableTitle);
    basicCursor.insertText(this->patient->sDepartment,tableContent);
    basicCursor=basicTable->cellAt(1,1).firstCursorPosition();
    basicCursor.insertText("ID号：",tableTitle);
    basicCursor.insertText(this->patient->sBedNumber,tableContent);
    basicCursor=basicTable->cellAt(2,0).firstCursorPosition();
    basicCursor.insertText("联系方式：",tableTitle);
    basicCursor.insertText(this->patient->phone,tableContent);
    basicCursor=basicTable->cellAt(2,1).firstCursorPosition();
    basicCursor.insertText("联系地址：",tableTitle);
    basicCursor.insertText(this->patient->address,tableContent);

    //症状表格
//    QTextFrame *symptomFrame = cursor.currentFrame();
    cursor = basicTable->lastCursorPosition();
    cursor.movePosition(QTextCursor::NextBlock,QTextCursor::MoveAnchor);
    cursor.insertHtml("<hr /><br />");
    cursor.insertText("症状", tableTitle);

    QTextTableFormat symptomTableFormat;
    symptomTableFormat.setBorder(0);
    symptomTableFormat.setWidth(printer->width()-60);
    symptomTableFormat.setPadding(5);
    QTextTable *symptomTable=cursor.insertTable(2,5, symptomTableFormat);
    QTextCursor symptomCursor;
    symptomCursor=symptomTable->cellAt(0,0).firstCursorPosition();
    symptomCursor.insertText("鼻塞",tableTitle);
    symptomCursor.insertText(this->patient->bSymptom[0]?"■":"□",tableTitle);
    symptomCursor=symptomTable->cellAt(0,1).firstCursorPosition();
    symptomCursor.insertText("鼻痒", tableTitle);
    symptomCursor.insertText(this->patient->bSymptom[1]?"■":"□",tableTitle);
    symptomCursor=symptomTable->cellAt(0,2).firstCursorPosition();
    symptomCursor.insertText("喷嚏", tableTitle);
    symptomCursor.insertText(this->patient->bSymptom[2]?"■":"□",tableTitle);
    symptomCursor=symptomTable->cellAt(0,3).firstCursorPosition();
    symptomCursor.insertText("清涕",tableTitle);
    symptomCursor.insertText(this->patient->bSymptom[3]?"■":"□",tableTitle);
    symptomCursor=symptomTable->cellAt(0,4).firstCursorPosition();
    symptomCursor.insertText("眼痒",tableTitle);
    symptomCursor.insertText(this->patient->bSymptom[4]?"■":"□",tableTitle);
    symptomCursor=symptomTable->cellAt(1,0).firstCursorPosition();
    symptomCursor.insertText("咽痒",tableTitle);
    symptomCursor.insertText(this->patient->bSymptom[5]?"■":"□",tableTitle);
    symptomCursor=symptomTable->cellAt(1,1).firstCursorPosition();
    symptomCursor.insertText("咳嗽",tableTitle);
    symptomCursor.insertText(this->patient->bSymptom[6]?"■":"□",tableTitle);
    symptomCursor=symptomTable->cellAt(1,2).firstCursorPosition();
    symptomCursor.insertText("胸闷",tableTitle);
    symptomCursor.insertText(this->patient->bSymptom[7]?"■":"□",tableTitle);
    symptomTable->mergeCells(1, 3, 1, 2);
    symptomCursor=symptomTable->cellAt(1,3).firstCursorPosition();
    symptomCursor.insertText(this->patient->sYear+"年",tableContent);

    cursor = symptomTable->lastCursorPosition();
    cursor.movePosition(QTextCursor::NextBlock,QTextCursor::MoveAnchor);
    QTextTable *aTable=cursor.insertTable(2,2,symptomTableFormat);
    aTable->mergeCells(0,0,1,2);
    symptomCursor=aTable->cellAt(0,0).firstCursorPosition();
    symptomCursor.insertText("过敏史：",tableTitle);
    symptomCursor.insertText(this->patient->allergies.isEmpty()?"无":this->patient->allergies, tableContent);
    symptomCursor=aTable->cellAt(1,0).firstCursorPosition();
    symptomCursor.insertText("近一周有无服用抗过敏药或感冒药：",tableTitle);
    symptomCursor.insertText(this->patient->medicine, tableContent);
    symptomCursor=aTable->cellAt(1,1).firstCursorPosition();
    if(this->patient->medicine!="无"){
        symptomCursor.insertText("最近服药时间"+this->patient->medicineTime+"天前",tableTitle);
    }
    cursor = aTable->lastCursorPosition();
    cursor.movePosition(QTextCursor::NextBlock,QTextCursor::MoveAnchor);


    //左手
    cursor.insertHtml("<hr /><br />");
    cursor.insertText("左手（吸入组）");
    QTextImageFormat leftJPG;
    leftJPG.setWidth(320);
    leftJPG.setHeight(200);
    leftJPG.setName("data://leftJPG.jpg");

    QTextTableFormat leftTableFormat;
    leftTableFormat.setBorder(0);
    leftTableFormat.setWidth(printer->width()-60);
    leftTableFormat.setAlignment(Qt::AlignCenter);
    leftTableFormat.setPadding(5);
    leftTableFormat.setCellPadding(5);
    QTextTable *leftTable=cursor.insertTable(4,6, leftTableFormat);
    leftTable->mergeCells(0,0,4,1);
    QTextCursor leftCursor;
    leftCursor=leftTable->cellAt(0,0).firstCursorPosition();
    leftCursor.insertImage(leftJPG);


    leftCursor=leftTable->cellAt(0,1).firstCursorPosition();
    leftCursor.insertText(this->patient->exp_10,tableTitle);
    leftCursor=leftTable->cellAt(0,2).firstCursorPosition();
    leftCursor.insertText(this->patient->exp_11,tableTitle);
    leftCursor=leftTable->cellAt(0,3).firstCursorPosition();
    leftCursor.insertText(this->patient->exp_12,tableTitle);
    leftCursor=leftTable->cellAt(0,4).firstCursorPosition();
    leftCursor.insertText(this->patient->exp_13,tableTitle);
    leftCursor=leftTable->cellAt(0,5).firstCursorPosition();
    leftCursor.insertText(this->patient->exp_14,tableTitle);
    leftCursor=leftTable->cellAt(2,1).firstCursorPosition();
    leftCursor.insertText(this->patient->exp_15,tableTitle);
    leftCursor=leftTable->cellAt(2,2).firstCursorPosition();
    leftCursor.insertText(this->patient->exp_16,tableTitle);
    leftCursor=leftTable->cellAt(2,3).firstCursorPosition();
    leftCursor.insertText(this->patient->exp_17,tableTitle);
    leftCursor=leftTable->cellAt(2,4).firstCursorPosition();
    leftCursor.insertText(this->patient->exp_18,tableTitle);
    leftCursor=leftTable->cellAt(2,5).firstCursorPosition();
    leftCursor.insertText(this->patient->exp_19,tableTitle);

    leftCursor=leftTable->cellAt(1,1).firstCursorPosition();
    leftCursor.insertText(this->patient->res_10,tableTitle);
    leftCursor=leftTable->cellAt(1,2).firstCursorPosition();
    leftCursor.insertText(this->patient->res_11,tableTitle);
    leftCursor=leftTable->cellAt(1,3).firstCursorPosition();
    leftCursor.insertText(this->patient->res_12,tableTitle);
    leftCursor=leftTable->cellAt(1,4).firstCursorPosition();
    leftCursor.insertText(this->patient->res_13,tableTitle);
    leftCursor=leftTable->cellAt(1,5).firstCursorPosition();
    leftCursor.insertText(this->patient->res_14,tableTitle);
    leftCursor=leftTable->cellAt(3,1).firstCursorPosition();
    leftCursor.insertText(this->patient->res_15,tableTitle);
    leftCursor=leftTable->cellAt(3,2).firstCursorPosition();
    leftCursor.insertText(this->patient->res_16,tableTitle);
    leftCursor=leftTable->cellAt(3,3).firstCursorPosition();
    leftCursor.insertText(this->patient->res_17,tableTitle);
    leftCursor=leftTable->cellAt(3,4).firstCursorPosition();
    leftCursor.insertText(this->patient->res_18,tableTitle);
    leftCursor=leftTable->cellAt(3,5).firstCursorPosition();
    leftCursor.insertText(this->patient->res_19,tableTitle);

    //右手
    cursor = leftTable->lastCursorPosition();
    cursor.movePosition(QTextCursor::NextBlock,QTextCursor::MoveAnchor);

    cursor.insertBlock();
    cursor.insertText("右手（食入组）");
    QTextImageFormat rightJPG;
    rightJPG.setWidth(320);
    rightJPG.setHeight(200);
    rightJPG.setName("data://rightJPG.jpg");

    QTextTableFormat rightTableFormat;
    rightTableFormat.setBorder(0);
    rightTableFormat.setWidth(printer->width()-60);
    rightTableFormat.setAlignment(Qt::AlignCenter);
    rightTableFormat.setPadding(5);
    rightTableFormat.setCellPadding(5);
    QTextTable *rightTable=cursor.insertTable(6,6, rightTableFormat);
    rightTable->mergeCells(0,0,6,1);
    QTextCursor rightCursor;
    rightCursor=rightTable->cellAt(0,0).firstCursorPosition();
    rightCursor.insertImage(rightJPG);


    rightCursor=rightTable->cellAt(0,1).firstCursorPosition();
    rightCursor.insertText(this->patient->exp_0+'\n',tableTitle);
    rightCursor=rightTable->cellAt(0,2).firstCursorPosition();
    rightCursor.insertText(this->patient->exp_1,tableTitle);
    rightCursor=rightTable->cellAt(0,3).firstCursorPosition();
    rightCursor.insertText(this->patient->exp_2,tableTitle);
    rightCursor=rightTable->cellAt(0,4).firstCursorPosition();
    rightCursor.insertText(this->patient->exp_3,tableTitle);
    rightCursor=rightTable->cellAt(0,5).firstCursorPosition();
    rightCursor.insertText(this->patient->exp_4,tableTitle);
    rightCursor=rightTable->cellAt(2,1).firstCursorPosition();
    rightCursor.insertText(this->patient->exp_5,tableTitle);
    rightCursor=rightTable->cellAt(2,2).firstCursorPosition();
    rightCursor.insertText(this->patient->exp_6,tableTitle);
    rightCursor=rightTable->cellAt(2,3).firstCursorPosition();
    rightCursor.insertText(this->patient->exp_7,tableTitle);
    rightCursor=rightTable->cellAt(2,4).firstCursorPosition();
    rightCursor.insertText(this->patient->exp_8,tableTitle);
    rightCursor=rightTable->cellAt(2,5).firstCursorPosition();
    rightCursor.insertText(this->patient->exp_9,tableTitle);

    rightCursor=rightTable->cellAt(1,1).firstCursorPosition();
    rightCursor.insertText(this->patient->res_0,tableTitle);
    rightCursor=rightTable->cellAt(1,2).firstCursorPosition();
    rightCursor.insertText(this->patient->res_1,tableTitle);
    rightCursor=rightTable->cellAt(1,3).firstCursorPosition();
    rightCursor.insertText(this->patient->res_2,tableTitle);
    rightCursor=rightTable->cellAt(1,4).firstCursorPosition();
    rightCursor.insertText(this->patient->res_3,tableTitle);
    rightCursor=rightTable->cellAt(1,5).firstCursorPosition();
    rightCursor.insertText(this->patient->res_4,tableTitle);
    rightCursor=rightTable->cellAt(3,1).firstCursorPosition();
    rightCursor.insertText(this->patient->res_5,tableTitle);
    rightCursor=rightTable->cellAt(3,2).firstCursorPosition();
    rightCursor.insertText(this->patient->res_6,tableTitle);
    rightCursor=rightTable->cellAt(3,3).firstCursorPosition();
    rightCursor.insertText(this->patient->res_7,tableTitle);
    rightCursor=rightTable->cellAt(3,4).firstCursorPosition();
    rightCursor.insertText(this->patient->res_8,tableTitle);
    rightCursor=rightTable->cellAt(3,5).firstCursorPosition();
    rightCursor.insertText(this->patient->res_9,tableTitle);

    rightTable->mergeCells(4,1,1,3);
    rightTable->mergeCells(4,4,1,2);
    rightCursor=rightTable->cellAt(4,1).firstCursorPosition();

    rightCursor.insertText("阴性对照（生理盐水）",tableTitle);
    rightCursor=rightTable->cellAt(5,1).firstCursorPosition();
    rightCursor.insertText('('+this->patient->res_A+')',tableContent);
    rightCursor=rightTable->cellAt(4,4).firstCursorPosition();
    rightCursor.insertText("阳性对照（组胺）",tableTitle);
    rightCursor=rightTable->cellAt(5,4).firstCursorPosition();
    rightCursor.insertText('('+this->patient->res_B+')',tableContent);


    cursor = rightTable->lastCursorPosition();
    cursor.movePosition(QTextCursor::NextBlock,QTextCursor::MoveAnchor);

//    cursor.insertBlock();
//    cursor.insertHtml("<hr />");
//    cursor.insertText("参考组");
//    QTextTableFormat referTableFormat;
//    referTableFormat.setBorder(0);
//    referTableFormat.setWidth(printer->width()-80);
//    referTableFormat.setAlignment(Qt::AlignCenter);
//    referTableFormat.setPadding(5);
//    referTableFormat.setCellPadding(5);
//    QTextTable *referTable=cursor.insertTable(1,4, referTableFormat);
//    QTextCursor referCursor;
//    referCursor=referTable->cellAt(0,0).firstCursorPosition();
//    referCursor.insertText("\n阴性对照（生理盐水）",tableTitle);
//    referCursor=referTable->cellAt(0,2).firstCursorPosition();
//    referCursor.insertText("阳性对照（组胺）",tableTitle);
//    referCursor=referTable->cellAt(0,1).firstCursorPosition();
//    referCursor.insertText('('+this->patient->res_A+')',tableContent);
//    referCursor=referTable->cellAt(0,3).firstCursorPosition();
//    referCursor.insertText('('+this->patient->res_A+')',tableContent);

//    cursor=referTable->lastCursorPosition();
//    cursor.movePosition(QTextCursor::NextBlock,QTextCursor::MoveAnchor);

    cursor.insertHtml("<hr /><br />");
//    tableTitle.setFontPointSize(8);
    cursor.insertText("备注：",tableTitle);
    if(this->patient->comment.isEmpty()){
        cursor.insertText("无", tableContent);
    }else{
        cursor.insertText(this->patient->comment, tableContent);
    }
    tableContent.setFontPointSize(6);
    cursor.insertBlock();
    cursor.insertText("变应原注释：", tableContent);
    cursor.insertBlock();
    cursor.insertText("杂草 （艾蒿  荨麻  蒲公英  长叶车前草）");
    cursor.insertBlock();
    cursor.insertText("树I （桤木 榛属 杨属 榆科 柳属）");
    cursor.insertBlock();
    cursor.insertText("树II （桦木 水青冈 栎属 法国梧桐）");
    cursor.insertBlock();
    cursor.insertText("霉菌I （交链孢菌属 葡萄孢属 多主枝孢菌属 新月弯孢属 串珠镰孢菌 蠕孢菌）");
    cursor.insertBlock();
    cursor.insertText("动物毛I （苍鼠上皮 狗上皮 兔上皮 猫上皮 豚鼠上皮）");
    tableTitle.setFontWeight(QFont::Black);
    cursor.insertText("\n");
    cursor.insertText("\t\t\t\t\t\t检查医生:    "+this->patient->reporter, tableTitle);
    cursor.insertBlock();
    cursor.insertText("\t\t\t\t\t\t检查日期：   "+QDateTime::currentDateTime().toString("yyyy-MM-dd")) ;
    cursor.insertHtml("<hr /><br />");
    cursor.insertText("耳鼻咽喉科免疫治疗室设门诊四楼（0731-89753265）\n");
    cursor.insertText("此报告单只供医师参考，不做证明使用。");




//    QTextImageFormat rightJPG;
//    rightJPG.setName("date://rightJPG.jpg");
//    cursor.insertImage(leftJPG);

    QSizeF paperSize;
    paperSize.setHeight(printer->height());
    paperSize.setWidth(printer->width());
    textDoc.setPageSize(paperSize);
    textDoc.setDocumentMargin(30);

    textDoc.print(printer);

}

void Create::doPrint(QPrinter *printer){
    qDebug() << "I'm Printing" <<endl;
    QString docAddress = QDir::currentPath();
    docAddress += "/docs/";
    docAddress += this->patient->sBedNumber;
    docAddress +="---";
    docAddress += QDateTime::currentDateTime().toString("yyyy-MM-dd-");
    qsrand(QTime(0, 0, 0).secsTo(QTime::currentTime()));
    int rand = qrand() % 5000;
    docAddress += QString::number(rand);
    docAddress +=".pdf";
    if(!QDir("docs").exists()){
        QDir().mkdir("docs");
    }


//    cursor.insertHtml(this->html);
    QPrinter *saveprinter = new QPrinter(QPrinterInfo::defaultPrinter());
    saveprinter->setPageSize(QPrinter::A4);
    saveprinter->setOutputFormat(QPrinter::PdfFormat);
    saveprinter->setOutputFileName(docAddress);

    doPaint(saveprinter);
    this->patient->doc = docAddress;
}


void Create::on_captureBtn_clicked()
{
    QCameraImageCapture *imageCapture = new QCameraImageCapture(this->camera);
    this->camera->setCaptureMode(QCamera::CaptureStillImage);
    this->camera->searchAndLock();
//    if(this->tmpAddress.isEmpty()){
        QString imgAddress = QDir::currentPath();
        imgAddress += "/images/";
        imgAddress += QDateTime::currentDateTime().toString("yyyy-MM-dd-");
        qsrand(QTime(0, 0, 0).secsTo(QTime::currentTime()));
        int rand = qrand() % 5000;
        imgAddress += QString::number(rand);
        imgAddress +=".jpg";
        if(!QDir("images").exists()){
            QDir().mkdir("images");
        }
        this->tmpAddress = imgAddress;
//    }
    imageCapture->capture(this->tmpAddress);
    qDebug() << "Application Path:" << QApplication::applicationDirPath() <<endl;
    qDebug() << "JPGAddress: " << this->tmpAddress <<endl;
    connect(imageCapture, SIGNAL(imageCaptured(int,QImage)), this, SLOT(processCapturedImage(int,QImage)));
    this->camera->unlock();
}

void Create::processCapturedImage(int requestId, const QImage &img){
    Q_UNUSED(requestId);
    QImage scaledImage = img.scaled(ui->cameraWidget->size(),
                                    Qt::KeepAspectRatio,
                                    Qt::SmoothTransformation);

    ui->lastPreviewLabel->setPixmap(QPixmap::fromImage(scaledImage));
    displayCapturedImage();
}


void Create::displayCapturedImage()
{
    ui->stackedWidget->setCurrentIndex(1);
    ui->leftBtn->setEnabled(true);
    ui->rightBtn->setEnabled(true);
}

void Create::on_closeBtn_clicked()
{
   this->close();
}

void Create::on_leftBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
    //this->patient->lefthandJPG=某个位置
    QPixmap pixmap;
    pixmap.load(this->tmpAddress);
    ui->leftHand->setPixmap(pixmap.scaled(
            ui->cameraWidget->size(),
            Qt::KeepAspectRatio,
            Qt::SmoothTransformation
    ));

    this->patient->sLeftJPG = this->tmpAddress;
    ui->leftDelBtn->setEnabled(true);
    ui->leftBtn->setEnabled(false);
    ui->rightBtn->setEnabled(false);
}

//TO-DO 几个按键的顺序，按拍照之前，其它的按键是disable的



void Create::on_rightBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
    //this->patient->lefthandJPG=某个位置
    QPixmap pixmap;
    pixmap.load(this->tmpAddress);
    ui->rightHand->setPixmap(pixmap.scaled(
            ui->cameraWidget->size(),
            Qt::KeepAspectRatio,
            Qt::SmoothTransformation
    ));

    this->patient->sRightJPG = this->tmpAddress;
    ui->rightDelBtn->setEnabled(true);
    ui->rightBtn->setEnabled(false);
    ui->leftBtn->setEnabled(false);
}

void Create::on_leftDelBtn_clicked()
{
    ui->leftHand->setText("已删除");
    ui->leftBtn->setEnabled(false);
    ui->rightBtn->setEnabled(false);
    ui->leftDelBtn->setEnabled(false);
    QFile file;
    file.setFileName(this->patient->sLeftJPG);
    if(file.remove()){
        qDebug() << "remove leftJPG success";
    }else{
        QMessageBox msgBox;
        msgBox.setText(tr("删除左手图片失败"));
    }

}

void Create::on_rightDelBtn_clicked()
{
    ui->rightHand->setText("已删除");
    ui->leftBtn->setEnabled(false);
    ui->rightBtn->setEnabled(false);
    ui->rightDelBtn->setEnabled(false);
    QFile file;
    file.setFileName(this->patient->sRightJPG);
    if(file.remove()){
        qDebug() << "remove rightJPG success";
    }else{
        QMessageBox msgBox;
        msgBox.setText(tr("删除右手图片失败"));
    }
}




void Create::on_bedNum_textEdited(const QString &arg1)
{
    if(!arg1.isEmpty()){
        ui->saveBtn->setEnabled(true);
        ui->ssaveBtn->setEnabled(true);
    }
}

void Create::on_ssaveBtn_clicked()
{
    this->patient->fName = ui->fname->text();
    this->patient->sGender = ui->gender->text();
    this->patient->sAge = ui->age->text();
    this->patient->sDepartment = ui->department->text();
    this->patient->sBedNumber = ui->bedNum->text();
    this->patient->bSymptom[0] = ui->zheng0->isChecked()?true:false;
    this->patient->bSymptom[1] = ui->zheng1->isChecked()?true:false;
    this->patient->bSymptom[2] = ui->zheng2->isChecked()?true:false;
    this->patient->bSymptom[3] = ui->zheng3->isChecked()?true:false;
    this->patient->bSymptom[4] = ui->zheng4->isChecked()?true:false;
    this->patient->bSymptom[5] = ui->zheng5->isChecked()?true:false;
    this->patient->bSymptom[6] = ui->zheng6->isChecked()?true:false;
    this->patient->bSymptom[7] = ui->zheng7->isChecked()?true:false;
    this->patient->sYear = ui->year->text();
    this->patient->phone = ui->phone->text();
    this->patient->address = ui->address->text();
    this->patient->comment = ui->comment->toPlainText();


    this->patient->exp_0 = ui->exp_0->currentText();
    this->patient->exp_1 = ui->exp_1->currentText();
    this->patient->exp_2 = ui->exp_2->currentText();
    this->patient->exp_3 = ui->exp_3->currentText();
    this->patient->exp_4 = ui->exp_4->currentText();
    this->patient->exp_5 = ui->exp_5->currentText();
    this->patient->exp_6 = ui->exp_6->currentText();
    this->patient->exp_7 = ui->exp_7->currentText();
    this->patient->exp_8 = ui->exp_8->currentText();
    this->patient->exp_9 = ui->exp_9->currentText();
    this->patient->exp_10 = ui->exp_10->currentText();
    this->patient->exp_11 = ui->exp_11->currentText();
    this->patient->exp_12 = ui->exp_12->currentText();
    this->patient->exp_13 = ui->exp_13->currentText();
    this->patient->exp_14 = ui->exp_14->currentText();
    this->patient->exp_15 = ui->exp_15->currentText();
    this->patient->exp_16 = ui->exp_16->currentText();
    this->patient->exp_17 = ui->exp_17->currentText();
    this->patient->exp_18 = ui->exp_18->currentText();
    this->patient->exp_19 = ui->exp_19->currentText();

    this->patient->res_0 = ui->res_0->currentText();
    this->patient->res_1 = ui->res_1->currentText();
    this->patient->res_2 = ui->res_2->currentText();
    this->patient->res_3 = ui->res_3->currentText();
    this->patient->res_4 = ui->res_4->currentText();
    this->patient->res_5 = ui->res_5->currentText();
    this->patient->res_6 = ui->res_6->currentText();
    this->patient->res_7 = ui->res_7->currentText();
    this->patient->res_8 = ui->res_8->currentText();
    this->patient->res_9 = ui->res_9->currentText();
    this->patient->res_10 = ui->res_10->currentText();
    this->patient->res_11 = ui->res_11->currentText();
    this->patient->res_12 = ui->res_12->currentText();
    this->patient->res_13 = ui->res_13->currentText();
    this->patient->res_14 = ui->res_14->currentText();
    this->patient->res_15 = ui->res_15->currentText();
    this->patient->res_16 = ui->res_16->currentText();
    this->patient->res_17 = ui->res_17->currentText();
    this->patient->res_18 = ui->res_18->currentText();
    this->patient->res_19 = ui->res_19->currentText();
    this->patient->reporter = ui->reporter->text();
    this->patient->date = QDateTime::currentDateTime().toString("yyyy-MM-dd");
    this->patient->allergies = ui->allergies->text();
    this->patient->medicine = ui->medicine->currentText();
    this->patient->medicineTime = ui->medicineTime->text();


    this->patient->res_A = ui->res_A->currentText();
    this->patient->res_B = ui->res_B->currentText();

    if(this->patient->sBedNumber.isEmpty()){
        QMessageBox::critical(NULL, "提示", "请正确填写病案号");
        ui->saveBtn->setEnabled(false);
        return;
    }

//    return a file address
//    doPaint(docAddress);

    QString docAddress = QDir::currentPath();
    docAddress += "/docs/";
    docAddress += this->patient->sBedNumber;
    docAddress +="---";
    docAddress += QDateTime::currentDateTime().toString("yyyy-MM-dd-");
    qsrand(QTime(0, 0, 0).secsTo(QTime::currentTime()));
    int rand = qrand() % 5000;
    docAddress += QString::number(rand);
    docAddress +=".pdf";
    if(!QDir("docs").exists()){
        QDir().mkdir("docs");
    }


//    cursor.insertHtml(this->html);
    QPrinter *saveprinter = new QPrinter(QPrinterInfo::defaultPrinter());
    saveprinter->setPageSize(QPrinter::A4);
    saveprinter->setOutputFormat(QPrinter::PdfFormat);
    saveprinter->setOutputFileName(docAddress);

    doPaint(saveprinter);
    this->patient->doc = docAddress;
    this->patient->save();
    QMessageBox::warning(this, "保存成功！","请在文件库里寻找文件", QMessageBox::Yes);
    this->close();

}
