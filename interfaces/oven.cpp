#include "oven.h"

Oven::Oven(QObject *parent)
    : QObject{parent}
{}


bool Oven::cook()
{
    return true;
}

int Oven::powerSource()
{
    return this->source;
}
