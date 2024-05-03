// #include <QtGui/QGuiApplication>
#include <QApplication>
#include <QDialog>
#include <QLabel>
// #include "ui_hellodialog.h"
// #include "hellodialog.h"
#include "hellodialog2.h"

// #include <QLocale>
// #include <QTranslator>
int main(int argc, char* argv[]){
    QApplication a(argc, argv);
    // QDialog w;
    // QLabel label(&w);
    // label.setText("Hello World! Hello Qt!");
    // w.resize(400,300);
    // label.move(120,120);
    HelloDialog2 dialog;
    // ui.setupUi(&w);
    dialog.show();
    return a.exec();
}
