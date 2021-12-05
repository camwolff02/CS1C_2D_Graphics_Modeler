#include "mainwindow.h"
#include "login.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication b(argc,argv);
    login l;
    l.setWindowTitle("Login");
    l.show();
    return l.exec();

    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle("Canvas");
    w.show();
    return a.exec();

}
