//
// Created by acer on 21.11.2020.
//

#ifndef AUTOMAT_AUTOMAT_H
#define AUTOMAT_AUTOMAT_H

#include <fstream>
#include "Napoj.h"
#include "sposob_platnosci.h"
#include "Kontener.h"

class Platnosc;

using namespace std;

std::string read_string();
int read_int();

class Automat
{


    Kontener<int,4>liczba_napoi;

   Napoj n1;
   Napoj n2;
   Napoj n3;
   Napoj n4;

public:
   // Automat():liczba_napoi{3,3,3,3}, n1("Pepsi",3.7,0), n2("Coca Cola",2,1),n3("Goraca czekolada",10,2),n4("Kawa",6.1,3){}

        void ilosc_cena();
        void wybierz_napoj();
        static void sprawdz(const Napoj &n, double cena);

        friend class Platnosc;

    Automat();
    // konstruktor Automat

    ~Automat();//=default;

};

#endif //AUTOMAT_AUTOMAT_H
