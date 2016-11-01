#include "search.h"
#include "ui_search.h"

#include <QSqlTableModel>
#include <QMessageBox>
#include <QDebug>
#include <QFile>
#include <QPrinter>
#include <QPrintDialog>
#include <QDesktopServices>
#include <QUrl>

Search::Search(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Search)
{
    ui->setupUi(this);

    model = new QSqlTableModel(this);
    model->setTable("patient12");
    model->setSort(0, Qt::DescendingOrder);
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    model->select(); //选取整个表的所有行
    //不显示name属性列,如果这时添加记录，则该属性的值添加不上
    model->setHeaderData(1, Qt::Horizontal, tr("姓名"));
    model->setHeaderData(3, Qt::Horizontal, tr("性别"));
    model->setHeaderData(4, Qt::Horizontal, tr("年龄"));
    model->setHeaderData(5, Qt::Horizontal, tr("科室"));
    model->setHeaderData(6, Qt::Horizontal, tr("ID号"));
    model->setHeaderData(60, Qt::Horizontal, tr("联系电话"));
    model->setHeaderData(61, Qt::Horizontal, tr("联系地址"));
    model->setHeaderData(64, Qt::Horizontal, tr("日期"));
    ui->tableView->setModel(model);
    ui->tableView->setColumnHidden(0, true);
    ui->tableView->setColumnHidden(2, true);
//    ui->tableView->setColumnHidden(6, true);
    ui->tableView->setColumnHidden(7, true);
    ui->tableView->setColumnHidden(8, true);
    ui->tableView->setColumnHidden(9, true);
    ui->tableView->setColumnHidden(10, true);
    ui->tableView->setColumnHidden(11, true);
    ui->tableView->setColumnHidden(12, true);
    ui->tableView->setColumnHidden(13, true);
    ui->tableView->setColumnHidden(14, true);
    ui->tableView->setColumnHidden(15, true);
    ui->tableView->setColumnHidden(16, true);
    ui->tableView->setColumnHidden(17, true);
    ui->tableView->setColumnHidden(18, true);
    ui->tableView->setColumnHidden(19, true);
    ui->tableView->setColumnHidden(20, true);
    ui->tableView->setColumnHidden(21, true);
    ui->tableView->setColumnHidden(22, true);
    ui->tableView->setColumnHidden(23, true);
    ui->tableView->setColumnHidden(24, true);
    ui->tableView->setColumnHidden(25, true);
    ui->tableView->setColumnHidden(26, true);
    ui->tableView->setColumnHidden(27, true);
    ui->tableView->setColumnHidden(28, true);
    ui->tableView->setColumnHidden(29, true);
    ui->tableView->setColumnHidden(30, true);
    ui->tableView->setColumnHidden(31, true);
    ui->tableView->setColumnHidden(32, true);
    ui->tableView->setColumnHidden(33, true);
    ui->tableView->setColumnHidden(34, true);
    ui->tableView->setColumnHidden(35, true);
    ui->tableView->setColumnHidden(36, true);
    ui->tableView->setColumnHidden(37, true);
    ui->tableView->setColumnHidden(38, true);
    ui->tableView->setColumnHidden(39, true);
    ui->tableView->setColumnHidden(40, true);
    ui->tableView->setColumnHidden(41, true);
    ui->tableView->setColumnHidden(42, true);
    ui->tableView->setColumnHidden(43, true);
    ui->tableView->setColumnHidden(44, true);
    ui->tableView->setColumnHidden(45, true);
    ui->tableView->setColumnHidden(46, true);
    ui->tableView->setColumnHidden(47, true);
    ui->tableView->setColumnHidden(48, true);
    ui->tableView->setColumnHidden(49, true);
    ui->tableView->setColumnHidden(50, true);
    ui->tableView->setColumnHidden(51, true);
    ui->tableView->setColumnHidden(52, true);
    ui->tableView->setColumnHidden(53, true);
    ui->tableView->setColumnHidden(54, true);
    ui->tableView->setColumnHidden(55, true);
    ui->tableView->setColumnHidden(56, true);
    ui->tableView->setColumnHidden(57, true);
    ui->tableView->setColumnHidden(58, true);
    ui->tableView->setColumnHidden(59, true);
//    ui->tableView->setColumnHidden(60, true);
//    ui->tableView->setColumnHidden(61, true);
    ui->tableView->setColumnHidden(62, true);
    ui->tableView->setColumnHidden(63, true);
//    ui->tableView->setColumnHidden(64, true);
    ui->tableView->setColumnHidden(65, true);
    ui->tableView->setColumnHidden(66, true);
    ui->tableView->setColumnHidden(67, true);
    ui->tableView->setColumnHidden(68, true);
}

Search::~Search()
{
    delete ui;
    delete model;
}

void Search::on_numBtn_clicked()
{
    QString bedNum = ui->bedNum->text();
    model->setFilter(QString("bedNum = '%1'").arg(bedNum));
    model->select();
}

void Search::on_nameBtn_clicked()
{
    QString username = ui->username->text();
    model->setFilter(QString("fname = '%1'").arg(username));
    model->select();
}

void Search::on_showAll_clicked()
{
    model->setTable("patient12");
    model->setSort(0, Qt::DescendingOrder);
    model->select();
    model->setHeaderData(1, Qt::Horizontal, tr("姓名"));
    model->setHeaderData(3, Qt::Horizontal, tr("性别"));
    model->setHeaderData(4, Qt::Horizontal, tr("年龄"));
    model->setHeaderData(5, Qt::Horizontal, tr("科室"));
    model->setHeaderData(6, Qt::Horizontal, tr("ID号"));
    model->setHeaderData(64, Qt::Horizontal, tr("日期"));
    ui->tableView->setModel(model);
    ui->tableView->setColumnHidden(0, true);
    ui->tableView->setColumnHidden(2, true);
//    ui->tableView->setColumnHidden(6, true);
    ui->tableView->setColumnHidden(7, true);
    ui->tableView->setColumnHidden(8, true);
    ui->tableView->setColumnHidden(9, true);
    ui->tableView->setColumnHidden(10, true);
    ui->tableView->setColumnHidden(11, true);
    ui->tableView->setColumnHidden(12, true);
    ui->tableView->setColumnHidden(13, true);
    ui->tableView->setColumnHidden(14, true);
    ui->tableView->setColumnHidden(15, true);
    ui->tableView->setColumnHidden(16, true);
    ui->tableView->setColumnHidden(17, true);
    ui->tableView->setColumnHidden(18, true);
    ui->tableView->setColumnHidden(19, true);
    ui->tableView->setColumnHidden(20, true);
    ui->tableView->setColumnHidden(21, true);
    ui->tableView->setColumnHidden(22, true);
    ui->tableView->setColumnHidden(23, true);
    ui->tableView->setColumnHidden(24, true);
    ui->tableView->setColumnHidden(25, true);
    ui->tableView->setColumnHidden(26, true);
    ui->tableView->setColumnHidden(27, true);
    ui->tableView->setColumnHidden(28, true);
    ui->tableView->setColumnHidden(29, true);
    ui->tableView->setColumnHidden(30, true);
    ui->tableView->setColumnHidden(31, true);
    ui->tableView->setColumnHidden(32, true);
    ui->tableView->setColumnHidden(33, true);
    ui->tableView->setColumnHidden(34, true);
    ui->tableView->setColumnHidden(35, true);
    ui->tableView->setColumnHidden(36, true);
    ui->tableView->setColumnHidden(37, true);
    ui->tableView->setColumnHidden(38, true);
    ui->tableView->setColumnHidden(39, true);
    ui->tableView->setColumnHidden(40, true);
    ui->tableView->setColumnHidden(41, true);
    ui->tableView->setColumnHidden(42, true);
    ui->tableView->setColumnHidden(43, true);
    ui->tableView->setColumnHidden(44, true);
    ui->tableView->setColumnHidden(45, true);
    ui->tableView->setColumnHidden(46, true);
    ui->tableView->setColumnHidden(47, true);
    ui->tableView->setColumnHidden(48, true);
    ui->tableView->setColumnHidden(49, true);
    ui->tableView->setColumnHidden(50, true);
    ui->tableView->setColumnHidden(51, true);
    ui->tableView->setColumnHidden(52, true);
    ui->tableView->setColumnHidden(53, true);
    ui->tableView->setColumnHidden(54, true);
    ui->tableView->setColumnHidden(55, true);
    ui->tableView->setColumnHidden(56, true);
    ui->tableView->setColumnHidden(57, true);
    ui->tableView->setColumnHidden(58, true);
    ui->tableView->setColumnHidden(59, true);
//    ui->tableView->setColumnHidden(60, true);
//    ui->tableView->setColumnHidden(61, true);
    ui->tableView->setColumnHidden(62, true);
    ui->tableView->setColumnHidden(63, true);
//    ui->tableView->setColumnHidden(64, true);
    ui->tableView->setColumnHidden(65, true);
    ui->tableView->setColumnHidden(66, true);
    ui->tableView->setColumnHidden(67, true);
    ui->tableView->setColumnHidden(68, true);
}

void Search::on_tableView_clicked(const QModelIndex &index)
{
    ui->deleteBtn->setEnabled(true);
}

void Search::on_deleteBtn_clicked()
{
    int curRow = ui->tableView->currentIndex().row();
    QModelIndex index = model->index(curRow, 65);
    qDebug() << "文件位置："<< index.data() <<endl;
    model->removeRow(curRow);
    int ok = QMessageBox::warning(this, tr("删除此病人检查报告！"), tr("你确定删除吗？"),
                                  QMessageBox::Yes, QMessageBox::No);

    if(ok == QMessageBox::No){
        model->revertAll();
    }else {
        QFile mFile(index.data().toString());
        mFile.remove();
        model->submitAll();
    }
}

void Search::on_tableView_doubleClicked(const QModelIndex &index)
{
    int curRow = ui->tableView->currentIndex().row();
    QModelIndex fileData = model->index(curRow, 65);
    QString filename=fileData.data().toString();
   if( !QDesktopServices::openUrl(QUrl::fromLocalFile(filename)) ){
       QMessageBox::warning(this, tr("没有程序可以打开pdf文件"),tr("没有程序可以打开pdf"),QMessageBox::Abort);
   }

}

