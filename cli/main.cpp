#include <QCoreApplication>
#include <iostream>
#include "libcore.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // We won't use the Qt event loop here.
    // But using Qt to parse args and display help text can be useful

    Libcore core;
    std::cout << "Calc: 2+3=" << core.add(2,3) << std::endl;
    return 0;
}
