//
// Created by acer on 12.12.2020.
//

#ifndef BRACHEWELINA_ETAP1_PLATNOSC_H
#define BRACHEWELINA_ETAP1_PLATNOSC_H

#include "Napoj.h"
class Automat;



class Platnosc
{

public:
    Platnosc()= default;
    static void zaplac(const Napoj&n);
    ~Platnosc()= default;
    friend class Automat;




};



#endif //BRACHEWELINA_ETAP1_PLATNOSC_H
