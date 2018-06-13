#include "Equipaje.h"

Equipaje::Equipaje()
{
    //ctor
}

Equipaje::~Equipaje()
{
    //dtor
}

Equipaje::Equipaje(int Id, string Informacion, string TipodeEquipaje, string AsuntodeEquipaje){

    this->Id=Id;
    this->Informacion=Informacion;
    this->TipodeEquipaje=TipodeEquipaje;
    this->AsuntodeEquipaje=AsuntodeEquipaje;

}
