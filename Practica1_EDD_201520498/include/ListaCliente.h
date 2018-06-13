#ifndef LISTACLIENTE_H
#define LISTACLIENTE_H
#include <string>
#include <stdio.h>
#include <iostream>
#include <Clientes.h>

using namespace std;
class ListaCliente
{
    public:
        ListaCliente();
        virtual ~ListaCliente();
            int Id_Actual;
            Clientes *primero;
            Clientes *ultimo;
        void AgregarDatos(string Nombre, string RagoEdad, int Edad, string Ubicacion, string TipoCliente, string Informacion, string Genero);
        void MostrarDatos();

    protected:
    private:
};

#endif // LISTACLIENTE_H
