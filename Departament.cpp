//
// Created by andrei on 31.10.2020.
//

#include "Departament.h"
#include "Angajat.h"

Departament::Departament(int Id_departament, std::string Nume_Departament, Angajat *Angajati)
{
std::cout<<"Constructor ";
this->Id_departament=Id_departament;
this->Nume_Departament=Nume_Departament;
this->Angajati=Angajati;

}