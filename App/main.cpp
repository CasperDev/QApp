#include "mainwindow.h"
#include "libcore.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    Libcore core;
    QString title = "Calc: 2+3=%1";
    w.setWindowTitle(title.arg(core.add(2,3)));
    w.show();
    return QCoreApplication::exec();
}
