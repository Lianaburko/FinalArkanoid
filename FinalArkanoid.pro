QT       += core gui \
          multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    ball.cpp \
    breakout.cpp \
    brick.cpp \
    main.cpp \
    mainwindow.cpp \
    paddle.cpp

HEADERS += \
    ball.h \
    breakout.h \
    brick.h \
    mainwindow.h \
    music.h \
    paddle.h

FORMS += \
    mainwindow.ui \
    window.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES +=
