/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *newBtn;
    QPushButton *selectBtn;
    QPushButton *fileBtn;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(489, 198);
        QFont font;
        font.setFamily(QStringLiteral("Microsoft YaHei UI Light"));
        MainWindow->setFont(font);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(340, 0, 121, 20));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(100, 130, 47, 13));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(240, 130, 47, 13));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(380, 130, 47, 13));
        newBtn = new QPushButton(centralWidget);
        newBtn->setObjectName(QStringLiteral("newBtn"));
        newBtn->setGeometry(QRect(50, 20, 121, 101));
        newBtn->setStyleSheet(QStringLiteral("border-image: url(:/myResources/new.png);"));
        newBtn->setIconSize(QSize(32, 32));
        newBtn->setAutoDefault(true);
        selectBtn = new QPushButton(centralWidget);
        selectBtn->setObjectName(QStringLiteral("selectBtn"));
        selectBtn->setGeometry(QRect(190, 20, 121, 101));
        selectBtn->setStyleSheet(QStringLiteral("border-image: url(:/myResources/search.png);"));
        fileBtn = new QPushButton(centralWidget);
        fileBtn->setObjectName(QStringLiteral("fileBtn"));
        fileBtn->setGeometry(QRect(340, 20, 111, 101));
        fileBtn->setStyleSheet(QLatin1String("\n"
"border-image: url(:/myResources/file.png);"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 489, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\344\270\255\345\215\227\345\244\247\345\255\246\346\271\230\351\233\205\345\214\273\351\231\242\350\200\263\351\274\273\345\222\275\345\226\211\347\247\221\345\217\230\345\272\224\345\216\237\347\202\271\345\210\272\345\256\236\351\252\214", 0));
        label->setText(QApplication::translate("MainWindow", "\346\212\200\346\234\257\346\224\257\346\214\201 \351\225\277\346\262\231\346\213\274\346\213\274\347\275\221\347\273\234", 0));
        label_2->setText(QApplication::translate("MainWindow", "\346\226\260\345\273\272", 0));
        label_3->setText(QApplication::translate("MainWindow", "\346\237\245\350\257\242", 0));
        label_4->setText(QApplication::translate("MainWindow", "\346\226\207\344\273\266\345\272\223", 0));
        newBtn->setText(QString());
        selectBtn->setText(QString());
        fileBtn->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
