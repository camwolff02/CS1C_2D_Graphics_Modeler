QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    addLines.cpp \
    addelllipse.cpp \
    addpolygon.cpp \
    addpolyline.cpp \
    addrectangles.cpp \
    addtextbox.cpp \
    canvas.cpp \
    contactus.cpp \
    ellipse.cpp \
    globals.cpp \
    line.cpp \
    login.cpp \
    main.cpp \
    mainwindow.cpp \
    polyline.cpp \
    shape.cpp \
    text.cpp
    canvas.cpp
    shape.cpp

HEADERS += \
    addLines.h \
    addelllipse.h \
    addpolygon.h \
    addpolyline.h \
    addrectangles.h \
    addtextbox.h \
    canvas.h \
    contactus.h \
    ellipse.h \
    globals.h \
    line.h \
    login.h \
    mainwindow.h \
    polyline.h \
    shape.h \
    text.h
    canvas.h
    shape.h


FORMS += \
    addLines.ui \
    addelllipse.ui \
    addpolygon.ui \
    addpolyline.ui \
    addrectangles.ui \
    addtextbox.ui \
    contactus.ui \
    login.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    icons.qrc
