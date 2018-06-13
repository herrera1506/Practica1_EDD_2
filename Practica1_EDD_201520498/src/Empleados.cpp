#include "Empleados.h"


Empleados::Empleados()
{
    //ctor
        id=0;
        TipoEmpleado="";
        Informacion="";
        Empleado_Ubicacion="";
        Siguiente=NULL;
        Anterior=NULL;
}

Empleados::~Empleados()
{
    //dtor
}

Empleados::Empleados(string TipoEmpleado, string Informacion, string Empleado_Ubicacion){

        this->TipoEmpleado=TipoEmpleado;
        this->Informacion=Informacion;
        this->Empleado_Ubicacion=Empleado_Ubicacion;
}
