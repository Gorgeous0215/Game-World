#-------------------------------------------------
#
# Project created by QtCreator 2018-06-02T12:10:07
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = MineSweep
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    game_model.cpp

HEADERS  += mainwindow.h \
    game_model.h

FORMS    += mainwindow.ui

RESOURCES += \
    resource.qrc
