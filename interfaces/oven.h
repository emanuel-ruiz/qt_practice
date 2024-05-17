#ifndef OVEN_H
#define OVEN_H

#include <QObject>
#include "Appliance.h"
#include "Heating.h"

class Oven : public QObject, public Appliance, public Heating
{
    Q_OBJECT
public:
    explicit Oven(QObject *parent = nullptr, int temperature =0, int source=0):temperature{temperature},source{source}{}
    //heating interface
    bool cook() override;
    // Appliance interface
    int powerSource() override;


    int temperature;
    int source;

signals:

};

#endif // OVEN_H
