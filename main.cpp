#include "Agentie_Turism.h"
#include "Manager.h"
#include "Departament.h"
#include "Angajat.h"
#include "Hotel.h"

int main()
{
    data Data_Infiintare;
    Data_Infiintare.zi=10;
    Data_Infiintare.luna=1;
    Data_Infiintare.an=2000;
    Agentie_Turism Agentie("Agentia_Morun", Data_Infiintare);


    return 0;
}
