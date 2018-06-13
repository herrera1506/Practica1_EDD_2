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

Clientes::~Clientes()
{
    //dtor
}
