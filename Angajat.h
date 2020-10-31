//
// Created by andrei on 31.10.2020.
//
#include <iostream>

#ifndef MAIN_CPP_ANGAJAT_H
#define MAIN_CPP_ANGAJAT_H

struct data
{
    int zi;
    int luna;
    int an;
};

class Angajat
{
private:
    std::string Nume_Angajat;
    data Data_Angajarii;
public:
    Angajat(std::string Nume_Angajat, data Data_Angajarii);
    ~Angajat()
    {

    }

};

#endif //MAIN_CPP_ANGAJAT_H
