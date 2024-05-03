#include <QtGui/QGuiApplication>
#include <QApplication>
#include <QPainterPath>
#include <QDialog>
#include <QLabel>



// #include <QLocale>
// #include <QTranslator>
int main(int argc, char* argv[]){
    QApplication a(argc, argv);
    QDialog w;
    QLabel label(&w);
    label.setText("Hello World! Hello Qt!");
    w.show();
    return a.exec();
}
