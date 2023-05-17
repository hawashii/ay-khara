#-------------------------------------------------
#
# Project created by QtCreator 2023-05-17T00:37:52
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = untitled
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    pattern.cpp \
    ttext.cpp \
    brute_force.cpp \
    percentage1.cpp \
    bar.cpp \
    rabin_karp.cpp \
    detect.cpp \
    percentage.cpp

HEADERS  += mainwindow.h \
    pattern.h \
    ttext.h \
    brute_force.h \
    percentage1.h \
    bar.h \
    rabin_karp.h \
    detect.h \
    percentage.h

FORMS    += mainwindow.ui
