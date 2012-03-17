#include <QtGui/QApplication>
#include "palindroma.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Palindroma w;
    w.show();
    return a.exec();
}
