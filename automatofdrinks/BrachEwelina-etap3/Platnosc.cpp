//
// Created by acer on 12.12.2020.
//

#include "Wyjatki.h"
#include "Automat.h"



 int read_int();

void Platnosc::zaplac(const Napoj& n) {

    //Automat a;
    int sposob;


    do {
        try {
            cout << endl << endl << "Wybierz metode platnosci: \n 1. Gotowka\n 2. Karta \n 3. BLIK " << endl;

            sposob = read_int();

            czy_blad::wyjatek_platnosc(sposob);

            //cout<<"Wybrano numer: "<<sposob<<endl;

            switch (sposob) {
                case 1:
                    Sposob_platnosci::gotowka(n);
                    break;
                case 2:
                    Sposob_platnosci::karta();
                    break;
                case 3:
                    Sposob_platnosci::BLIK();
                    break;

                    // default:
                    //throw Wyjatek("Niepoprawny numer! Wybierz napoj ponownie.");
                    // cout << "Niepoprawny numer! Wybierz napoj ponownie.";
            }
        }
        catch (Wyjatek &w) {
            std::cout << w.message;

        }

    }while(sposob>3 || sposob <=0);

}

