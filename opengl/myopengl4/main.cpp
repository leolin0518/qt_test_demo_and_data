#include "myopengl4.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    myopengl4 w;
    w.show();

    return a.exec();
}
