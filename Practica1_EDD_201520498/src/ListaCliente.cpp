#include "ListaCliente.h"
#include <Clientes.h>
#include <ListaCliente.h>
#include <iostream>


ListaCliente::ListaCliente()
{
    //ctor
    primero=NULL;
    ultimo=NULL;
}

ListaCliente::~ListaCliente()
{
    //dtor
}

void ListaCliente::AgregarDatos(string Nombre, string RagoEdad, int Edad, string Ubicacion, string TipoCliente, string Informacion, string Genero){
    Clientes *Nuevo_Clientes_nodo= new Clientes(Nombre,RagoEdad,Edad,Ubicacion,TipoCliente,Informacion,Genero);

    if (primero != NULL)
    {
     ultimo->Siguiente = Nuevo_Clientes_nodo;
     Nuevo_Clientes_nodo->Anterior = ultimo;
     ultimo = Nuevo_Clientes_nodo;
    }
    else {
        primero = Nuevo_Clientes_nodo;
        ultimo = Nuevo_Clientes_nodo;
    }
}


void ListaCliente::AgregarDatos2(Clientes *Nuevo_Nodo_Cliente){

    Clientes *Nuevo_N_Cliente = Nuevo_Nodo_Cliente;
    Nuevo_N_Cliente->id = this->Id_Actual;

    if( primero != NULL){
        ultimo->Siguiente = Nuevo_N_Cliente;
        Nuevo_N_Cliente->Anterior = ultimo;
        ultimo = Nuevo_N_Cliente;
    }else {

       primero = Nuevo_N_Cliente;
       ultimo = Nuevo_N_Cliente;
    }
    }


void ListaCliente::MostrarDatos()
{
      Clientes *aux =primero;
    while(aux != NULL)
    {
        cout<<"ID: "<< aux->Nombre<<"   Edad:   "<<aux->Edad<<"   Genero:  "<<aux->Genero<<"\n";;
        aux= aux->Siguiente;


    }
}


