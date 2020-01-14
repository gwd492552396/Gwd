#-------------------------------------------------
#
# Project created by QtCreator 2018-12-15T13:10:07
#
#-------------------------------------------------

QT       += core gui

QT += sql
QT += serialport
LIBS += -lsqlite3
QT += multimedia
QT += multimediawidgets
QT   += concurrent

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets


TARGET = 7in
TEMPLATE = app


SOURCES += main.cpp\
        mainwidget.cpp \
    homepage.cpp \
    weight.cpp \
    video.cpp \
    informationquery.cpp \
    index.cpp \
    zc.cpp \
    power.cpp \
    enigne.cpp \
    liquid.cpp \
    pressure.cpp \
    temperature.cpp \
    error.cpp \
    warning.cpp \
    driverpower.cpp \
    isgpower.cpp \
    help.cpp \
    set.cpp \
    login.cpp \
    management.cpp \
    adduser.cpp \
    superuserpage.cpp \
    generalsettings.cpp \
    optionalfunction.cpp \
    choosecartype.cpp \
    weighingparameter.cpp \
    frmnum.cpp \
    buttondialog.cpp \
    mytimer.cpp \
    readdata.cpp \
    frminput.cpp \
    buttonwidget.cpp \
    textwidget.cpp \
    timewidget.cpp \
    database_7in.cpp \
    messagewidget.cpp \
    lightwidget.cpp \
    gearbox.cpp \
    serial_port.cpp \
    receiver.cpp \
    auto_brightness.cpp

HEADERS  += mainwidget.h \
    homepage.h \
    weight.h \
    video.h \
    informationquery.h \
    index.h \
    zc.h \
    power.h \
    enigne.h \
    liquid.h \
    pressure.h \
    temperature.h \
    error.h \
    warning.h \
    driverpower.h \
    isgpower.h \
    help.h \
    set.h \
    login.h \
    management.h \
    adduser.h \
    superuserpage.h \
    generalsettings.h \
    optionalfunction.h \
    choosecartype.h \
    weighingparameter.h \
    frmnum.h \
    buttondialog.h \
    mytimer.h \
    readdata.h \
    frminput.h \
    buttonwidget.h \
    textwidget.h \
    timewidget.h \
    database_7in.h \
    messagewidget.h \
    lightwidget.h \
    gearbox.h \
    serial_port.h \
    receiver.h \
    auto_brightness.h

FORMS    += mainwidget.ui \
    homepage.ui \
    weight.ui \
    video.ui \
    informationquery.ui \
    index.ui \
    zc.ui \
    power.ui \
    enigne.ui \
    liquid.ui \
    pressure.ui \
    temperature.ui \
    error.ui \
    warning.ui \
    driverpower.ui \
    isgpower.ui \
    help.ui \
    set.ui \
    login.ui \
    management.ui \
    adduser.ui \
    superuserpage.ui \
    generalsettings.ui \
    optionalfunction.ui \
    choosecartype.ui \
    weighingparameter.ui \
    frmnum.ui \
    buttondialog.ui \
    frminput.ui \
    buttonwidget.ui \
    textwidget.ui \
    timewidget.ui \
    messagewidget.ui \
    lightwidget.ui \
    gearbox.ui

RESOURCES += \
    resources/res.qrc

DISTFILES +=


