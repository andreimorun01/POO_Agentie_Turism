//
// Created by andrei on 31.10.2020.
//

#include "Agentie_Turism.h"
#include "Departament.h"


Agentie_Turism::Agentie_Turism(std::string Nume, data Data_Infiintare)
{
std::cout<<"Constructor ";
this->Nume=Nume;
this->Data_Infiintare=Data_Infiintare;
//this->Departamente=new Departament();
}

Agentie_Turism::Agentie_Turism(const Agentie_Turism &Copie_Agentie)
{
    this->Nume=Copie_Agentie.Nume;
    this->Data_Infiintare=Copie_Agentie.Data_Infiintare;
    this->Departamente=Copie_Agentie.Departamente;
}

Agentie_Turism &Agentie_Turism :: operator =(const Agentie_Turism &Obiect)
{
    this->Nume=Obiect.Nume;
    this->Data_Infiintare=Obiect.Data_Infiintare;
    this->Departamente=Obiect.Departamente;
    return *this;
}

std::ostream &operator<<(std::ostream &os, const Agentie_Turism &Obj)
{
    os<<"Test"<<"\n";
    return os;
}
