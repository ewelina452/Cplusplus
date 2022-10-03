#include <iostream>
#include "Automat.h"
using namespace std;
fstream plik;

int main(int argc, char *argv[])
{

    if(argc>1)
    {
        plik.open(argv[1]);
        if(plik.is_open()) {

            for(int i=0; i<argc;i++)
            {
                cout<<i<<":"<<argv[i]<<endl;                //wyswietlenie argumetow
            }
        }
    }

    Automat a;

    int numer;

        do  {
            try {
                cout << endl << endl << "Dostepne napoje: " << endl;
                a.ilosc_cena();
                cout << endl << endl << "----------Menu---------- \n 1. Wybierz napoj i zaplac\n 2. Wyjscie" << endl;
                numer = read_int();
                czy_blad::wyjatek_start(numer);
                //cout << "Wybrano numer: " << numer << endl;
                switch (numer) {
                    case 1:
                        a.wybierz_napoj();
                        break;
                    case 2:
                        plik.close();
                        exit(0);

                   // default:
                       // cout << "Nieprawidlowy numer!";
                }
            }
                catch(Wyjatek &w)
                {
                    std::cout <<w.message;

                }

            }while(numer!=2);// wybór poszczególnych etapów w automacie, do momemtu wyjscia


    return 0;

}
int read_int() {
    std::string line;
    if(plik.is_open()){
        std::getline(plik, line);
    }
    else{std::getline(std::cin, line);}
    return atoi(line.c_str());
}

std::string read_string() {
    std::string line;
    if(plik.is_open()){
        std::getline(plik, line);
    }
   else {std::getline(std::cin, line);}
    return line;
}