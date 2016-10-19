#-------------------------------------------------
#
# Project created by QtCreator 2016-10-12T20:47:40
#
#-------------------------------------------------

QT       += core gui sql multimedia multimediawidgets printsupport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = xtps
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    create.cpp \
    patient.cpp \
    search.cpp

HEADERS  += mainwindow.h \
    create.h \
    patient.h \
    connection.h \
    search.h

FORMS    += mainwindow.ui \
    create.ui \
    search.ui

RESOURCES += \
    myresources.qrc

DISTFILES += \
    ../build-xtps-Desktop_Qt_5_7_0_MinGW_32bit-Debug/fonts/wqy-microhei.ttc
