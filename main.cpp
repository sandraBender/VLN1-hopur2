#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication application(argc, argv);
    Service serv;
    serv.connect();
    MainWindow window;
    window.show();

    return application.exec();
}
