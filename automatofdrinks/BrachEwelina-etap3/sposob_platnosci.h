//
// Created by acer on 12.12.2020.
//

#ifndef BRACHEWELINA_ETAP1_SPOSOB_PLATNOSCI_H
#define BRACHEWELINA_ETAP1_SPOSOB_PLATNOSCI_H
#include <iostream>
#include "Platnosc.h"


using namespace std;

class Sposob_platnosci:Platnosc
{

    friend class Automat;
public:
    Sposob_platnosci()= default;;
    static void gotowka( const Napoj& n);
    static void karta();
    static void BLIK();
    ~Sposob_platnosci()= default;


};

#endif //BRACHEWELINA_ETAP1_SPOSOB_PLATNOŚCI_H
