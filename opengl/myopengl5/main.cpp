#include "myqt5widget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    myqt5Widget w;
    w.show();
    return a.exec();
}
