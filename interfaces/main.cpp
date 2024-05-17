/*
    INTERFACES
        - Inherit from interfaces when inheriting from multiple classes.

    Virtual Function
        - A member function which is declared within a base class and is
          re-defined by a derived class


    Interfaces are implented as headers only
*/

#include <QCoreApplication>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    return a.exec();
}
