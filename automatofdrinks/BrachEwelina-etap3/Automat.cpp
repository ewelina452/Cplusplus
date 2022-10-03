//
// Created by acer on 21.11.2020.
//
#include "Automat.h"
#include <iostream>
#include <string>



using namespace std;

Automat::Automat():liczba_napoi{3,3,3,3}, n1("Pepsi",3.7,0), n2("Coca Cola",2,1),n3("Goraca czekolada",10,2),n4("Kawa",6.1,3)
{}

Automat::~Automat()
= default;


void Automat::ilosc_cena()// wypisywanie napojów
{

    cout<<"Nazwa: "<<n1.nazwa<<"\t\t\t";
    cout<<"Cena: "<<n1.cena<<" zl"<<"\t\t";
    cout<<"ID: "<<n1.id<<"\t\t";
    cout<<"Ilosc sztuk: "<<liczba_napoi[0];

    cout<<endl<<"Nazwa: "<<n2.nazwa<<"\t\t";
    cout<<"Cena: "<<n2.cena<<" zl"<<"\t\t";
    cout<<"ID: "<<n2.id<<"\t\t";
    cout<<"Ilosc sztuk: "<<liczba_napoi[1];

    cout<<endl<<"Nazwa: "<<n3.nazwa<<"\t\t";
    cout<<"Cena: "<<n3.cena<<" zl"<<"\t\t";
    cout<<"ID: "<<n3.id<<"\t\t";
    cout<<"Ilosc sztuk: "<<liczba_napoi[2];

    cout<<endl<<"Nazwa: "<<n4.nazwa<<"\t\t\t";
    cout<<"Cena: "<<n4.cena<<" zl"<<"\t\t";
    cout<<"ID: "<<n4.id<<"\t\t";
    cout<<"Ilosc sztuk: "<<liczba_napoi[3];
}
void Automat::sprawdz(const Napoj& n,double cena)
{

    if (n.cena*100==cena) { // funkcja sprawdza czy wrzucono całą kwotę
        cout << endl << "Napoj zakupiony poprawnie!";

    }

}

void Automat::wybierz_napoj()
{
    Automat a;
     int numer;



    const char* napis; // stała napis
    napis="Napoj sie skonczyl! Wybierz inny";
    do {
        try {

            cout << endl << "Podaj numer ID napoju: " << endl;
            numer = read_int();
            czy_blad::wyjatek_wybor(numer);
            //cout << "Wybrano numer: " << numer << endl;
            switch (numer) {
                case 0:
                    if (liczba_napoi[n1.id] > 0) {// sprawdza czy napój jest dostępny

                        cout << endl << "Do zaplaty: " << n1.cena << " zl";
                        Platnosc::zaplac(n1);



                    } else {
                        cout << endl << napis;
                    }
                    break;
                case 1:
                    if (liczba_napoi[n2.id] > 0) {
                        cout << endl << "Do zaplaty: " << n2.cena << " zl";
                        Platnosc::zaplac(n2);
                    } else {
                        cout << endl << napis;
                    }
                    break;
                case 2:
                    if (liczba_napoi[n3.id] > 0) {

                        cout << endl << "Do zaplaty: " << n3.cena << " zl";
                        Platnosc::zaplac(n3);
                    } else {
                        cout << endl << napis;
                    }
                    break;
                case 3:
                    if (liczba_napoi[n4.id] > 0) {
                        cout << endl << "Do zaplaty: " << n4.cena << " zl";
                        Platnosc::zaplac(n4);
                    } else {
                        cout << endl << napis;
                    }
                    break;
                //default:
                   // cout << "Nieprawidlowy numer!";

            }

           if (liczba_napoi[numer] > 0) {
               liczba_napoi[numer] = liczba_napoi[numer] - 1; // zmniejszanie liczby wybranego napoju
            }
        }
        catch(Wyjatek &w)
        {
            std::cout << w.message;

        }
    }while(numer>3 || numer<=0);


}