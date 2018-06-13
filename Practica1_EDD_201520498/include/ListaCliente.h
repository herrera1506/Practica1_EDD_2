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
            int Id_Actual=0;
            Clientes *primero=NULL;
            Clientes *ultimo=NULL;
        void AgregarDatos(string Nombre, string RagoEdad, int Edad, string Ubicacion, string TipoCliente, string Informacion, string Genero);
        void MostrarDatos();
        void AgregarDatos2(Clientes *Nuevo);

    protected:
    private:
};

#endif // LISTACLIENTE_H
