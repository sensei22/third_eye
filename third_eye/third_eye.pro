#-------------------------------------------------
#
# Project created by QtCreator 2014-03-16T19:32:59
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = third_eye
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    adminlogin.cpp \
    adminform.cpp \
    autor.cpp \
    comparator.cpp

HEADERS  += mainwindow.h \
    adminlogin.h \
    adminform.h \
    autor.h \
    comparator.h

FORMS    += mainwindow.ui \
    adminlogin.ui \
    adminform.ui \
    autor.ui


INCLUDEPATH += C:\lol\install\include

 LIBS += C:/lol/lib/*.a
