#include <iostream>
#include "kerrostalo.h"
#include "katutaso.h"
#include "asunto.h"

#include "kerros.h"
using namespace std;


// kerrostalo.cpp

void Kerrostalo::maaritellaanAsunnot()
{
    cout << "Maaritellaan koko kerrostalon kaikki asunnot" << endl;
    eka.maaritaAsunnot();
    toka.maaritaAsunnot();
    kolmas.maaritaAsunnot();
}

double Kerrostalo::laskeKulutus(double hinta)
{
    return eka.laskeKulutus(hinta) + toka.laskeKulutus(hinta) + kolmas.laskeKulutus(hinta);
}


// katutaso.cpp

Katutaso::Katutaso()
{
    cout << "Katutaso luotu" << endl;
}

void Katutaso::maaritaAsunnot()
{
    cout << "Maaritetaan 2 kpl katutason asuntoja" << endl;
    as1.maarita(2, 100);
    as2.maarita(2, 100);
}

double Katutaso::laskeKulutus(double hinta)
{
    return as1.laskeKulutus(hinta) + as2.laskeKulutus(hinta);
}


// kerros.cpp

Kerros::Kerros()
{
    cout << "Kerros luotu" << endl;
}

void Kerros::maaritaAsunnot()
{
    cout << "Maaritetaan 4 kpl kerroksen asuntoja" << endl;
    as1.maarita(2, 100);
    as2.maarita(2, 100);
    as3.maarita(2, 100);
    as4.maarita(2, 100);
}

double Kerros::laskeKulutus(double hinta)
{
    return as1.laskeKulutus(hinta) + as2.laskeKulutus(hinta) + as3.laskeKulutus(hinta) + as4.laskeKulutus(hinta);
}


// asunto.cpp

Asunto::Asunto() : asukasMaara(0), neliot(0) {}

void Asunto::maarita(int asukkaita, int neliot)
{
    this->asukasMaara = asukkaita;
    this->neliot = neliot;
    cout << "Asunto maaritetty asukkaita= " << asukasMaara << " neliota= " << neliot << endl;
}

double Asunto::laskeKulutus(double hinta)
{
    return asukasMaara * neliot * hinta;
}


// main.cpp

int main()
{
    cout << "asunto luotu" << endl;
    cout << "asunto luotu" << endl;
    cout << "asunto luotu" << endl;
    cout << "asunto luotu" << endl;

    Katutaso katutaso;

    Kerros kerros1;
    kerros1.maaritaAsunnot();

    Kerrostalo kerrostalo;
    kerrostalo.maaritellaanAsunnot();

    cout << "Kerrostalon kulutus, = " << kerrostalo.laskeKulutus(1) << endl;

    return 0;
}
