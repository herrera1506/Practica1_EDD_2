#include "Paqueteria.h"

Paqueteria::Paqueteria()
{
    //ctor
}
Paqueteria::Paqueteria(int id, string Nombre, string TipoPaquete,string Asunto){
    this->id=id;
    this->Nombre=Nombre;
    this->TipoPaquete=TipoPaquete;
    this->Asunto=Asunto;

}

Paqueteria::~Paqueteria()
{
    //dtor
}

