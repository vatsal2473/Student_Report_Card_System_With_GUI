QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    admin.cpp \
    create.cpp \
    delete_report.cpp \
    edit_report.cpp \
    login.cpp \
    main.cpp \
    mainwindow.cpp \
    search_report.cpp \
    show_all_report.cpp \
    student.cpp

HEADERS += \
    admin.h \
    create.h \
    delete_report.h \
    edit_report.h \
    login.h \
    mainwindow.h \
    search_report.h \
    show_all_report.h \
    student.h

FORMS += \
    admin.ui \
    create.ui \
    delete_report.ui \
    edit_report.ui \
    login.ui \
    mainwindow.ui \
    search_report.ui \
    show_all_report.ui \
    student.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES +=
