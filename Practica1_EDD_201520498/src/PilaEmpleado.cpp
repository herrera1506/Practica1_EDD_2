#include "PilaEmpleado.h"
#include <Empleados.h>
#include <iostream>
using namespace std;
PilaEmpleado::PilaEmpleado()
{
    //ctor
}

PilaEmpleado::~PilaEmpleado()
{
    //dtor
}

void PilaEmpleado::AgregarDatosEmpleado(string TipoEmpleado, string Informacion, string Empleado_Ubicacion){

Empleados *nuevo_nuevo = new Empleados(TipoEmpleado, Informacion, Empleado_Ubicacion);

if(primero == NULL)
{
    primero = nuevo_nuevo;
     //cout<<"\n El elemento "<<primero->Informacion<<"ha sido agregado a pila correctamente \n";
}
else
{
    nuevo_nuevo-> Siguiente = primero;
    primero = nuevo_nuevo;
  //  cout <<"\n El elemento "<<primero->Informacion<<"ha sido agregado a pila correctamente \n";
}

}

void PilaEmpleado::MostrarDatosEmpleado(){
     Empleados *aux = new Empleados();
      aux=primero;
      int n =1 ;

    while(aux != NULL)
    {

        cout<<" [ "<<n<<" ] - "<<aux->Informacion<<"\n";
        aux=aux->Siguiente;
        n++;

        }
    }
