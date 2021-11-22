#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();

    //Note to other developers: this is probably where we'd want to read in from shapes.txt by calling the parser now
}
