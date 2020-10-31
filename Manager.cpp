//
// Created by andrei on 31.10.2020.
//

#include "Manager.h"
//#include "Angajat.h"


Manager::Manager(std::string numeAngajat, data dataAngajarii, int Id_Manager, data Data_Since_Manager)
        : Angajat(numeAngajat, dataAngajarii) {
    this->Id_Manager=Id_Manager;
    this->Data_Since_Manager=Data_Since_Manager;

}