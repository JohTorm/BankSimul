#-------------------------------------------------
#
# Project created by QtCreator 2019-04-08T14:18:49
#
#-------------------------------------------------

QT       += core gui widgets serialport sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = BankSimul_700
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        mainwindow.cpp

HEADERS += \
        mainwindow.h

FORMS += \
        mainwindow.ui
LIBS += C:\BankSimul\BankSimul_700\DLL_pin_v2\DLLpin.dll
LIBS += C:\BankSimul\BankSimul_700\MySQL_dll_v3\MySQL.dll
LIBS += C:\BankSimul\BankSimul_700\rfid\rfid.dll

qnx: target.path = /tmp/$${TARGET}/bin
else: unic:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/plugins/ -lqsqlmysql4
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/plugins/ -lqsqlmysql4d
else:unix: LIBS += -L$$PWD/plugins/ -lqsqlmysql4

INCLUDEPATH += $$PWD/plugins
DEPENDPATH += $$PWD/plugins

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/plugins/ -lqsqlmysqld4
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/plugins/ -lqsqlmysqld4d
else:unix: LIBS += -L$$PWD/plugins/ -lqsqlmysqld4

INCLUDEPATH += $$PWD/plugins
DEPENDPATH += $$PWD/plugins
