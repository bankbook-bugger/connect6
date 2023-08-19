QT       += core gui quickwidgets

#greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Chequer.cpp \
    Chesswoman.cpp \
    Game.cpp \
    Move.cpp \
    infordialog.cpp \
    main.cpp \
    mainwindow.cpp \
    options.cpp \
    timer.cpp

HEADERS += \
    Chequer.h \
    Chesswoman.h \
    Game.h \
    Move.h \
    infordialog.h \
    mainwindow.h \
    options.h \
    timer.h

FORMS += \
    infordialog.ui \
    mainwindow.ui \
    options.ui \
    timer.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES +=
