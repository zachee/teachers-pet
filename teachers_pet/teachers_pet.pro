#-------------------------------------------------
#
# Project created by QtCreator 2018-01-12T19:06:14
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = teachers_pet
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    student.cpp \
    course.cpp

HEADERS  += mainwindow.h \
    student.h \
    course.h

FORMS    += mainwindow.ui
