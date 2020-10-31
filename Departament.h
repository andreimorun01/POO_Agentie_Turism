//
// Created by andrei on 31.10.2020.
//
#include <iostream>
#include "Angajat.h"

#ifndef MAIN_CPP_DEPARTAMENT_H
#define MAIN_CPP_DEPARTAMENT_H


class Departament
{
private:
    int Id_departament;
    std::string Nume_Departament;
    Angajat *Angajati;
private:
    Departament(int Id_departament, std::string Nume_Departament, Angajat *Angajati);
   ~Departament()
   {

   }
};



#endif //MAIN_CPP_DEPARTAMENT_H
