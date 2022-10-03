//
// Created by acer on 08.01.2021.
//

#ifndef BRACHEWELINA_ETAP2_KONTENER_H
#define BRACHEWELINA_ETAP2_KONTENER_H
#include <iostream>
#include "Automat.h"
#include "Wyjatki.h"
template <typename T, size_t ROZMIAR>
class Kontener
{
    T tab[ROZMIAR]{3,3,3,3};
public:
    T& operator[](int index)
    {

        if (index < 0) {
            if (index < -ROZMIAR) {

                throw Wyjatek("Nieprawidlowy numer ID! Wybierz ponownie");


            }
            return tab[ROZMIAR+index];
        }


        if (index >= ROZMIAR) {

            throw Wyjatek("Nieprawidlowy numer ID! Wybierz ponownie.");

        }
        return tab[index];
    }


   Kontener(int i, int i1, int i2, int i3) {}
};





#endif //BRACHEWELINA_ETAP2_KONTENER_H
