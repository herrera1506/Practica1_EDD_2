#ifndef LISTACLIENTES_H
#define LISTACLIENTES_H
#include <iostream>
#include <string>
#include <stdio.h>
#include "NodoClientes.h"

using namespace std;


class ListaClientes
{
    public:
        ListaClientes();
        virtual ~ListaClientes();
        int id_actual = 0;

        NodoClientes *primero;
        NodoClientes *ultimo;

        void insertar_dato(string nombre, string tipo_cliente, string estado, int edad, string informacion, string ubicacion);
        void mostrar_datos();


    protected:

    private:
};

#endif // LISTACLIENTES_H
