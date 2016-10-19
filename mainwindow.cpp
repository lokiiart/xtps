#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "create.h"
#include "patient.h"
#include "search.h"

#include <QDialog>

#include <QDesktopServices>
#include <QDir>
#include <QUrl>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_newBtn_clicked()
{
    QDialog *mCreate = new Create();
    mCreate->setWindowFlags(Qt::Window);
    mCreate->show();
}

void MainWindow::on_selectBtn_clicked()
{

    QDialog *mSearch = new Search();
    mSearch->show();
}

void MainWindow::on_fileBtn_clicked()
{
    QString docAddress = "file:///";
    docAddress += QDir::currentPath();
    docAddress += "/docs";
    QDesktopServices::openUrl(QUrl(docAddress));
}
