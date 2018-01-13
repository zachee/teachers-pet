#-------------------------------------------------
#
# Project created by QtCreator 2018-01-12T19:06:14
#
#-------------------------------------------------

QT       += core gui widgets

qtHaveModule(printsupport): QT += printsupport

#greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = teachers_pet
TEMPLATE = app

HEADERS  += \
    student.h \
    course.h \
    spreadsheet.h \
    spreadsheetdelegate.h \
    spreadsheetitem.h \
    printview.h

SOURCES += main.cpp\
    student.cpp \
    course.cpp \
    printview.cpp \
    spreadsheet.cpp \
    spreadsheetdelegate.cpp \
    spreadsheetitem.cpp

FORMS    +=

SUBDIRS +=

RESOURCES += spreadsheet.qrc

DISTFILES += \
    images/interview.png
