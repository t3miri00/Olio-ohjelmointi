// asunto.h
#ifndef ASUNTO_H
#define ASUNTO_H

#include <iostream>

class Asunto
{
public:
    int asukasMaara;
    int neliot;

    Asunto();
    void maarita(int asukkaita, int neliot);
    double laskeKulutus(double hinta);
};

#endif // ASUNTO_H
