//
// Created by acer on 21.11.2020.
//

#ifndef AUTOMAT_NAPOJ_H
#define AUTOMAT_NAPOJ_H
#include <string>


using namespace std;
class Automat;



class Napoj
{

    string nazwa;
    double cena;
    int id;

public:
    Napoj(string n, double c, int i): nazwa(std::move(n)), cena(c),id(i)
    {}
    //explicit Napoj(string="Nazwa",double=5,int=5);
    ~Napoj()=default;
    friend class Automat;
    friend class Sposob_platnosci;



};

#endif //AUTOMAT_NAPOJ_H
