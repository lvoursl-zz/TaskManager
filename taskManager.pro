#-------------------------------------------------
#
# Project created by QtCreator 2014-12-23T22:29:03
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = taskManager
TEMPLATE = app


SOURCES += main.cpp\
        calendarwindow.cpp \
    dialogwindow.cpp

HEADERS  += calendarwindow.h \
    dialogwindow.h

FORMS    += calendarwindow.ui \
    dialogwindow.ui

RESOURCES += \
    taskManagerRes.qrc
