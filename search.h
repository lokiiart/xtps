#ifndef SEARCH_H
#define SEARCH_H

#include <QDialog>
#include <QSqlTableModel>

namespace Ui {
class Search;
}

class Search : public QDialog
{
    Q_OBJECT

public:
    explicit Search(QWidget *parent = 0);
    ~Search();

private slots:
    void on_numBtn_clicked();

private:
    Ui::Search *ui;
    QSqlTableModel *model;
};

#endif // SEARCH_H
