//
// Created by acer on 09.01.2021.
//

#ifndef BRACHEWELINA_ETAP3_WYJATKI_H
#define BRACHEWELINA_ETAP3_WYJATKI_H
#include <iostream>




struct Wyjatek: std::exception  {
    std::string message;
    explicit Wyjatek(std::string msg): message(std::move(msg)){};

};

class czy_blad
{
public:
    static void wyjatek_platnosc (const int &numer) {
        if (numer >= 4 || numer <=0) {
            throw Wyjatek("Niewybrano sposobu platnosci. Sprobuj ponownie.");
        }
        std::cout << "Wybrano numer: " << numer << std::endl;
    }
    static void wyjatek_wybor(const int &numer)
    {
        if(numer>3 || numer <=0)
        {
            throw Wyjatek("Nieprawidlowy numer ID! Wybierz ponownie");
        }
        std::cout << "Wybrano numer:  " << numer << std::endl;
    }
    static void wyjatek_start(const int &numer) {
        if (numer > 2 || numer <=0) {
            throw Wyjatek("Nieprawidlowy numer! Wybierz ponownie");
        }
        std::cout << "Wybrano numer: " << numer << std::endl;
    }

};


#endif //BRACHEWELINA_ETAP3_WYJATKI_H
