#ifndef OVEN_H
#define OVEN_H

#include <QObject>
#include "Appliance.h"
#include "Heating.h"

class Oven : public QObject, public Appliance, public Heating
{
    Q_OBJECT
public:
    explicit Oven(QObject *parent = nullptr);
    //heating interface
    bool cook();
    // Appliance interface
    int powerSource();

signals:

};

#endif // OVEN_H
