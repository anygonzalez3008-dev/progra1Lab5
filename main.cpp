#include "PruebaQt.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    PruebaQt window;
    window.show();
    return app.exec();
}
