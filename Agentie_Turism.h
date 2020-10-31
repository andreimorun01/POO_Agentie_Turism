//
// Created by andrei on 31.10.2020.
//
#include <iostream>
#include "Departament.h"

#ifndef MAIN_CPP_AGENTIE_TURISM_H
#define MAIN_CPP_AGENTIE_TURISM_H

class Agentie_Turism
{
    friend std::ostream & operator <<(std::ostream &, const Agentie_Turism &);
private:
    std::string Nume;
    data Data_Infiintare;
    Departament *Departamente;

public:
    Agentie_Turism(std::string Nume, data Data_Infiintare);
    Agentie_Turism(const Agentie_Turism &Copie_Agentie);
    Agentie_Turism & operator =(const Agentie_Turism &Obiect);
    ~Agentie_Turism()
    {
        std::cout<<"Destructor ";
    }

};

#endif //MAIN_CPP_AGENTIE_TURISM_H
