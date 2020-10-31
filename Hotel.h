//
// Created by andrei on 31.10.2020.
//
#include <iostream>
#ifndef MAIN_CPP_HOTEL_H
#define MAIN_CPP_HOTEL_H


class Hotel
{
private:
    int Numar_Stele;
    bool Camera; //0-camera dubla 1-camera single
    int Zile_Sejur;

public:
    Hotel(int Numar_Stele, bool Camera, int Zile_Sejur);

    double Pret_Sejur;
    int Calcul_Pret()
    {
        if(Camera==0)
            Pret_Sejur=150*Zile_Sejur;
        if(Camera==1)
            Pret_Sejur=270*Zile_Sejur;
        return
            Pret_Sejur;
    }
    ~Hotel()
    {

    }
};



#endif //MAIN_CPP_HOTEL_H
