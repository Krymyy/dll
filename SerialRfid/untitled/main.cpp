#include "mainwindow.h"
#include <QApplication>
#include <QDebug>
int main(int argc, char *argv[])
{
    qDebug() << "eri" ;
    QApplication a(argc, argv);
    MainWindow w;
   // w.show();
   //w.showFullScreen();
    return a.exec();
}
