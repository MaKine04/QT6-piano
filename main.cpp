#include "mainwindow.h"
#include <QApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QApplication::setStyle("fusion");
    MainWindow w;
    w.resize(250,300);
    w.show();
    return a.exec();
}
