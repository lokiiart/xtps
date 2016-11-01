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

    void on_nameBtn_clicked();

    void on_showAll_clicked();

    void on_tableView_clicked(const QModelIndex &index);

    void on_deleteBtn_clicked();

    void on_tableView_doubleClicked(const QModelIndex &index);

private:
    Ui::Search *ui;
    QSqlTableModel *model;
};

#endif // SEARCH_H
