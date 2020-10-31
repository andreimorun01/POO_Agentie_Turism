//
// Created by andrei on 31.10.2020.
//
#include <iostream>
#include "Angajat.h"

#ifndef MAIN_CPP_MANAGER_H
#define MAIN_CPP_MANAGER_H

class Manager : public Angajat
{
private:
    int Id_Manager;
    data Data_Since_Manager{};
public:
    Manager(std::string numeAngajat, data dataAngajarii, int Id_Manager, data Data_Since_Manager);
    ~Manager()
    {

    }

};

#endif //MAIN_CPP_MANAGER_H
