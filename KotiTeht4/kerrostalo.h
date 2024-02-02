// kerrostalo.h
#ifndef KERROSTALO_H
#define KERROSTALO_H

#include "katutaso.h"

class Kerrostalo
{
private:
    Katutaso eka;
    Kerros toka;
    Kerros kolmas;

public:
    void maaritellaanAsunnot();
    double laskeKulutus(double hinta);
};

#endif // KERROSTALO_H
