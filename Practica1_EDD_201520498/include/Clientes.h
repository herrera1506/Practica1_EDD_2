#ifndef CLIENTES_H
#define CLIENTES_H
#include <iostream>
#include <string>

using namespace std;
class Clientes
{
    public:
        Clientes();
        Clientes(string Nombre, string RagoEdad, int Edad, string Ubicacion, string TipoCliente, string Informacion, string Genero);
        Clientes(string Nombre, string RagoEdad, int Edad, string Ubicacion, string TipoCliente, string Informacion, string Genero, int boleto);
        virtual ~Clientes();
        Clientes *Siguiente=NULL;
        Clientes *Anterior=NULL;

        int id;
        string Nombre;
        string RangoEdad;
        int Edad;
        string TipoCliente;
        string Informacion;
        string Ubicacion;
        string Genero;

        bool Boleto = false;
        bool Cliente_en_Atencionalcliente = false;
        bool Cliente_en_Seguridad =false;


    protected:
    private:


};


#endif // CLIENTES_H
