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
        virtual ~Clientes();
        Clientes *Siguiente;
        Clientes *Anterior;
        Clientes *ultimo;
        int id;
        string Nombre;
        string RangoEdad;
        int Edad;
        string TipoCliente;
        string Informacion;
        string Ubicacion;
        string Genero;


    protected:
    private:

        bool Boleto = false;
        bool Cliente_en_Atencionalcliente = false;
        bool Cliente_en_Seguridad =false;
};


#endif // CLIENTES_H
