#include "ListaEquipaje.h"
#include <Equipaje.h>
ListaEquipaje::ListaEquipaje()
{
    //ctor
}

ListaEquipaje::~ListaEquipaje()
{
    //dtor
}

void ListaEquipaje::AgregarEquipaje(Equipaje *Equipajes){
  Equipaje * Nodo_Equipaje =Equipajes;
    Nodo_Equipaje->Id=Id_Actual;

     if (primero != NULL)
    {
     ultimo->Siguiente = Nodo_Equipaje;
     Nodo_Equipaje->Anterior = ultimo;
     ultimo = Nodo_Equipaje;
    }
    else {
        primero = Nodo_Equipaje;
        ultimo = Nodo_Equipaje;
    }
}


void ListaEquipaje::MostrarDatos(){
    Equipaje *aux =primero;
    while(aux != NULL)
    {
        cout<<"ID: "<< aux->Id<<"  Tipo:   "<<aux->TipodeEquipaje<<"   Asunto:  "<<aux->AsuntodeEquipaje<<"\n";;
        aux= aux->Siguiente;


    }

}
