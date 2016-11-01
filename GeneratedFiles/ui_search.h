/********************************************************************************
** Form generated from reading UI file 'search.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCH_H
#define UI_SEARCH_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_Search
{
public:
    QTableView *tableView;
    QLabel *label;
    QLineEdit *bedNum;
    QLabel *label_2;
    QLineEdit *username;
    QPushButton *numBtn;
    QPushButton *nameBtn;

    void setupUi(QDialog *Search)
    {
        if (Search->objectName().isEmpty())
            Search->setObjectName(QStringLiteral("Search"));
        Search->resize(727, 639);
        tableView = new QTableView(Search);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(40, 110, 641, 511));
        label = new QLabel(Search);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 20, 81, 16));
        bedNum = new QLineEdit(Search);
        bedNum->setObjectName(QStringLiteral("bedNum"));
        bedNum->setGeometry(QRect(150, 20, 113, 20));
        label_2 = new QLabel(Search);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 60, 71, 16));
        username = new QLineEdit(Search);
        username->setObjectName(QStringLiteral("username"));
        username->setGeometry(QRect(150, 60, 113, 20));
        numBtn = new QPushButton(Search);
        numBtn->setObjectName(QStringLiteral("numBtn"));
        numBtn->setGeometry(QRect(290, 20, 75, 23));
        nameBtn = new QPushButton(Search);
        nameBtn->setObjectName(QStringLiteral("nameBtn"));
        nameBtn->setGeometry(QRect(290, 60, 75, 23));

        retranslateUi(Search);

        QMetaObject::connectSlotsByName(Search);
    } // setupUi

    void retranslateUi(QDialog *Search)
    {
        Search->setWindowTitle(QApplication::translate("Search", "\346\237\245\350\257\242", 0));
        label->setText(QApplication::translate("Search", "\346\240\271\346\215\256\347\227\205\344\276\213\345\217\267\346\220\234\347\264\242", 0));
        label_2->setText(QApplication::translate("Search", "\346\240\271\346\215\256\345\247\223\345\220\215\346\220\234\347\264\242", 0));
        numBtn->setText(QApplication::translate("Search", "\346\220\234\347\264\242", 0));
        nameBtn->setText(QApplication::translate("Search", "\346\220\234\347\264\242", 0));
    } // retranslateUi

};

namespace Ui {
    class Search: public Ui_Search {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCH_H
