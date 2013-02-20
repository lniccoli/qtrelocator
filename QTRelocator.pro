#-------------------------------------------------
#
# Project created by QtCreator 2013-02-20T14:30:59
#
#-------------------------------------------------

QT       += core xml

QT       -= gui

TARGET = QTRelocator
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app

HEADERS += *.h
SOURCES += *.cpp

RESOURCES += \
    resources.qrc

OTHER_FILES += \
    files-to-patch-windows-qt5 \
    files-to-patch-windows
