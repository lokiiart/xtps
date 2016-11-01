#ifndef CREATE_H
#define CREATE_H


#include "patient.h"

#include <QCamera>
#include <QCameraImageCapture>

#include <QDialog>
#include <QPrinter>

namespace Ui {
class Create;
}

class Create : public QDialog
{
    Q_OBJECT

public:
    explicit Create(QWidget *parent = 0);
    ~Create();

private slots:

    void displayCapturedImage();


    void processCapturedImage(int requestId, const QImage &img);

    void on_saveBtn_clicked();


    void on_captureBtn_clicked();


    void on_leftBtn_clicked();

    void on_closeBtn_clicked();


    void on_rightBtn_clicked();


    void doPaint(QPrinter *printer);
    void printPreview(QPrinter *printer);
    void doPrint(QPrinter *printer);



    void on_leftDelBtn_clicked();

    void on_rightDelBtn_clicked();



    void on_bedNum_textEdited(const QString &arg1);

    void on_ssaveBtn_clicked();

private:
    Ui::Create *ui;
    QCamera *camera;
    QPrinter *printer;
    Patient *patient;
    QString tmpAddress;
    QString html;
};

#endif // CREATE_H
