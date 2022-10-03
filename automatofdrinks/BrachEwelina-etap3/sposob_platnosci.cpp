//
// Created by acer on 12.12.2020.
//
#include "sposob_platnosci.h"
#include "Automat.h"
#include <cstring>
#include <ctime>

using namespace std;


void Sposob_platnosci::BLIK() {


    string blik1;
    string blik2;

    time_t start,koniec;
    double roznica;
    cout<<endl<<"Czas na wpisanie kodu to 2 min";
    do {
        do {
            time(&start);
            cout << endl << "Podaj 6-cyfrowy kod: ";
            blik1=read_string();
            cout<<blik1<<endl;
            if (blik1.size() == 6)
            {
                cout << endl << "Powtorz kod: ";
                blik2=read_string();
                cout<<blik2<<endl;

                if (blik1 == blik2) {
                } else {
                    cout << endl << "Kod bledny";
                }
            }
            else{
                cout << "Nieprawidlowy format!";
            }
        }while (blik1 != blik2);
            time(&koniec);
            roznica = difftime(koniec, start);
            if (roznica > 120)
                cout << endl << "Przekroczono czas";
            else
                cout << endl <<endl<< "Napoj zakupiony poprawnie!";
    }while(roznica>120);// do momentu uplyniecia 2 min

}

 void Sposob_platnosci::karta()
{
    string pin2;
    string pin1;
    do {

        cout << endl << "Podaj 4-cyfrowy kod PIN: ";
        pin1=read_string();
        cout<<pin1;

           if(pin1.size()==4)
           {

               cout << endl << "Powtorz kod PIN: ";
               pin2=read_string();
               cout<<pin2;

               if (pin1 == pin2)

               {
                   cout << endl << "Kod PIN zgodny";
                   cout << endl << endl << "Napoj zakupiony poprawnie!";

               } else {
                   cout << endl << "Kod PIN bledny";

               }
           }
           else
           {
               cout<<"Nieprawidlowy format!";
           }


    }while(pin1 != pin2);
}

void Sposob_platnosci::gotowka(const Napoj& n) {

    int cena=0;
    int moneta;
    int wartosc_monety=0;

    double x;


    x=n.cena*100;// na początku x= wartości ceny wybranego napoju
    cout <<endl<< "----UWAGA----\n Automat przyjmuje tylko monety! \n Mozesz wrzucic: 10gr, 20gr, 50gr, 1zl, 2zl, 5zl " << endl;

    do {

        cout << endl << "Jaka monete teraz wrzucasz: " << endl;
        moneta=read_int();
        if(moneta == 10 || moneta == 20 || moneta == 50 || moneta == 1 || moneta == 2 || moneta == 5)
        {
            if (moneta == 10)
                wartosc_monety=0.1*100;
            if (moneta == 20)
                wartosc_monety=0.2*100;
            if (moneta== 50)
                wartosc_monety=0.5*100;
            if (moneta==1)
                wartosc_monety=1*100;
            if (moneta== 2)
                wartosc_monety=2*100;
            if(moneta==5)
                wartosc_monety=5*100;// mnoże wszystko razy 100, ponieważ przy doublach dopisywało mi niepotrzebne cyfry.




            if (wartosc_monety <= x)
            {
                cena = cena + wartosc_monety;

                x = n.cena*100 - cena;

                if(x>0) {

                    cout << endl << "Brakuje jeszcze: " << x/100<< " zl";
                }
            }
            else if (wartosc_monety>x)
            {
                cout << "Moneta jest za duza";
            }

        }
        else{
            cout << "Nieprawidlowy format!";
        }


    } while (n.cena*100 != cena);// sprawdzanie wrzuconej monety i odejmowanie od ceny napoju oraz pokazywanie ile zostalo do zaplaty

    Automat::sprawdz(n,cena);

}