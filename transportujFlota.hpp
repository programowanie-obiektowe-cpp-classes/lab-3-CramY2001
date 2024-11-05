#pragma once
#include "Stocznia.hpp"
unsigned int transportujFlota(unsigned int towar)
{
    if (towar == 0) return 0;
    Stocznia Gdansk;
    unsigned int TransportSuma =0;
    unsigned int LiczbaZaglowcow=0;
    while (TransportSuma < towar && TransportSuma <=Stocznia::getTotalCap())
    {
        Statek* statek= Gdansk();
        unsigned int transport = statek->transportuj();
        TransportSuma += transport;
        if (dynamic_cast<Zaglowiec*>(statek))
        {
            ++LiczbaZaglowcow;
        }
    delete statek;
    }
return LiczbaZaglowcow;
}
