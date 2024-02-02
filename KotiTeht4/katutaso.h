// katutaso.h
#ifndef KATUTASO_H
#define KATUTASO_H

#include "kerros.h"

class Katutaso : public Kerros
{
public:
    Katutaso();
    void maaritaAsunnot() override;
    double laskeKulutus(double hinta) override;
};

#endif // KATUTASO_H
