#include "widget.h"

#include <QApplication>

using namespace DuarteCorporation;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setStyle("fusion");
    Widget w;
    Widget w2;
    w.show();
    w2.show();
    return a.exec();
}
