CONFIG += cpp17

QT       += core testlib

QT       -= gui

TARGET = CodeCoverageExample
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app

# --coverage option is synonym for: -fprofile-arcs -ftest-coverage -lgcov
QMAKE_CXXFLAGS += --coverage
QMAKE_LFLAGS += --coverage

include( $$PWD/tests/Tests.pri )

SOURCES += \
    main.cpp \
    calculator.cpp

HEADERS += \
    calculator.h
