#include "Clientes.h"

Clientes::Clientes()
{
    //ctor

    Edad = 0;
    RangoEdad = "";
    Informacion ="";
    Nombre ="";
    TipoCliente="";
    Ubicacion="";
    Genero="";

    Siguiente=NULL;
    Anterior=NULL;
}

Clientes::Clientes(string nombre, string RangoEdad, int Edad, string Ubicacion,string TipoCliente, string Informacion,string Genero)
{

    Nombre =nombre;
    RangoEdad = RangoEdad;
    Edad = Edad;
    Ubicacion=Ubicacion;
    TipoCliente=TipoCliente;
    Informacion =Informacion;
    Genero=Genero;
}


Clientes::Clientes(string nombre, string RangoEdad, int Edad, string Ubicacion,string TipoCliente, string Informacion,string Genero,int boleto){

    this->Nombre =nombre;
    this->RangoEdad = RangoEdad;
    this->Edad = Edad;
    this->Ubicacion=Ubicacion;
    this->TipoCliente=TipoCliente;
    this->Informacion =Informacion;
    this->Genero=Genero;

    if(boleto==1)
    {
        this->Boleto=true;
    }


}

Clientes::~Clientes()
{
    //dtor
}
