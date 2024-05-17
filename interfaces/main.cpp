/*
    INTERFACES
        - Inherit from interfaces when inheriting from multiple classes.

    Virtual Function
        - A member function which is declared within a base class and is
          re-defined by a derived class


    Interfaces are implented as headers only
*/

#include <QCoreApplication>
#include <QDebug>
#include "oven.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Oven cv(&a,300,240 );
    qInfo() << cv.source;
    qInfo() << cv.temperature;
    return a.exec();
}
