#include "mainwindow.h"
#include "libcore.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    Libcore core;
    QString title = "Calc: 3+4=%1";
    w.setWindowTitle(title.arg(core.add(3,4)));
    w.show();
    return QCoreApplication::exec();
}
