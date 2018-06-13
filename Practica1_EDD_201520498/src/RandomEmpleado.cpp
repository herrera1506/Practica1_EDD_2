#include "RandomEmpleado.h"
#include <stdlib.h>
#include <time.h>
#include <Clientes.h>
#include <iostream>
#include <string>
#include <PilaEmpleado.h>


using namespace std;
RandomEmpleado::RandomEmpleado()
{
    //ctor
}

RandomEmpleado::~RandomEmpleado()
{
    //dtor
}

PilaEmpleado* RandomEmpleado::AgregarEmpleadoRandom(int dato){

    int Random = 6 + rand() % (20 -10);
    int Interaciones = Random +rand() % (51-1);
    cout<<"Numero De Interaciones"<<Interaciones;
    PilaEmpleado *RandomClie = new PilaEmpleado();

    int x=0;
        int TipoEmpleado = 1 + rand() % (1-0);//0= tripulacion y 1 Administrativo
        int InformacionEmpleado = 0 + rand() % (5-1);//Nombre,
        int UbicacionEmpleado = 0 +rand()%(2-0);//0=Paquetes , 1 = AtencionalCliente, 2=Seguridad;
        int horario;

        //string TipoEmpleado, string Informacion, string Empleado_Ubicacion
    string Tipo_Empleado="";
    string Informacion_Empleado="";
    string Ubicacion_Empleado=";";
    string Nombre_Empleado="";
    int Id= dato;

    //Tipo
    if(TipoEmpleado == 0){
            Tipo_Empleado="Empleado de Tripulacion";
    }
    else {
            Tipo_Empleado="Empleado de Administracion";
    }
    ////Informacion
    if (InformacionEmpleado == 5 ){
            Informacion_Empleado="Edgar";

    }
    else if (InformacionEmpleado == 4){
            Informacion_Empleado="Manuel";

    }else if( InformacionEmpleado == 3){
            Informacion_Empleado="Maria";

    }else if(InformacionEmpleado == 2){
            Informacion_Empleado="Fernanda";
    }
    else {
            Informacion_Empleado="Oscar";
    }

    Nombre_Empleado="Empleado" + to_string(Id);
    //








}
