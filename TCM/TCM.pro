QT += core
#QT -= gui
#add QT +=gui
QT +=gui
greaterThan(QT_MAJOR_VERSION,4): QT += widgets

TARGET = TCM
#CONFIG += console
#CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    mainwindow.cpp \
    gui/mainwindow.cpp

HEADERS += \
    mainwindow.h \
    gui/mainwindow.h

DISTFILES += \
    resources/new.png \
    resources/open.png \
    resources/save.png \
    resources/setting.png \
    resources/exit.png

