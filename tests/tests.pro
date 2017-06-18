#-------------------------------------------------
# Project with tests for sources of project TDDexample
#-------------------------------------------------

# Framework for testing
QT       += testlib

# Uncomment next line for static build
#QMAKE_LFLAGS_RELEASE += -static -static-libgcc

TARGET = tests
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app

HEADERS += \
    ../myclass.h

SOURCES += test_myclass.cpp \
    ../myclass.cpp

DEFINES += QT_DEPRECATED_WARNINGS

DEFINES += SRCDIR=\\\"$$PWD/\\\"


