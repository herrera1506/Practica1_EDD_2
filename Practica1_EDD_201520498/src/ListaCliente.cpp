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

void ListaCliente::MostrarDatos()
{
      Clientes *aux = new Clientes();
      aux=primero;

    while(aux != NULL)
    {
        if(aux->Anterior!= NULL)
         {
            cout<<"<-"<<aux->Anterior->Nombre<<" ] - ";
         }
         cout<<" <-[ "<<aux->Nombre<<" ] -> ";
         aux = aux->Siguiente;
         if(aux!=NULL)
         {
             cout<<" ->[ "<<aux->Nombre<<" ] \n ";
         }
    }
}


