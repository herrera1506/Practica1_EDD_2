#include "ListaPaqueteria.h"
#include <Paqueteria.h>

ListaPaqueteria::ListaPaqueteria()
{
    //ctor
}

ListaPaqueteria::~ListaPaqueteria()
{
    //dtor
}

void ListaPaqueteria::AgregarPaquetes(Paqueteria *Paquete){

    Paqueteria * Nodo_Paquetes =Paquete;
    Nodo_Paquetes->id=Id_Actual;

     if (primero != NULL)
    {
     ultimo->Siguiente = Nodo_Paquetes;
     Nodo_Paquetes->Anterior = ultimo;
     ultimo = Nodo_Paquetes;
    }
    else {
        primero = Nodo_Paquetes;
        ultimo = Nodo_Paquetes;
    }
}

void ListaPaqueteria::MostrarDatos(){

    Paqueteria *aux= primero;

     while(aux != NULL)
    {
        cout<<"Id: "<<aux->id <<"  Nombre:   "<<aux->Nombre<<"  Tipo de Paquete:  " <<aux->TipoPaquete <<"  Asunto: "<<aux->Asunto<<"\n";
        aux= aux->Siguiente;
    }

}
