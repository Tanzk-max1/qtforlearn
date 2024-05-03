QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

SOURCES += \
    main.cpp

windows {
     DEFINES *= Q_COMPILER_INITIALIZER_LISTS
}
