#-------------------------------------------------
# Just a common object-oriented qt console project which includes
# classes you want to test
#
# All tests are defined in subproject tests
#-------------------------------------------------

QT += core
QT -= gui

CONFIG += c++11

# Uncomment next line for static build
#QMAKE_LFLAGS_RELEASE += -static -static-libgcc

SUBDIRS += tests

TARGET = TDDexample

CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

HEADERS += \
    myclass.h

SOURCES += main.cpp \
    myclass.cpp

DEFINES += QT_DEPRECATED_WARNINGS




