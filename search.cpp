#include "search.h"
#include "ui_search.h"

#include <QSqlTableModel>

Search::Search(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Search)
{
    ui->setupUi(this);

    model = new QSqlTableModel(this);
    model->setTable("patient9");
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
//    model->setSort();
    model->select(); //选取整个表的所有行
    //不显示name属性列,如果这时添加记录，则该属性的值添加不上
    model->removeColumns(6,57);
    model->removeColumn(1);
    model->removeColumn(6);
    model->setHeaderData(0, Qt::Horizontal, tr("姓名"));
    model->setHeaderData(1, Qt::Horizontal, tr("性别"));
    model->setHeaderData(2, Qt::Horizontal, tr("年龄"));
    model->setHeaderData(3, Qt::Horizontal, tr("科室"));
    model->setHeaderData(4, Qt::Horizontal, tr("病例号"));
    model->setHeaderData(5, Qt::Horizontal, tr("日期"));
    ui->tableView->setModel(model);
}

Search::~Search()
{
    delete ui;
    delete model;
}

void Search::on_numBtn_clicked()
{
    QString bedNum = ui->bedNum->text();
    model->setFilter(QString("bedNum = '%1").arg(bedNum));
    model->select();
    model->removeColumns(6,57);
    model->removeColumn(1);
    model->removeColumn(6);
}
