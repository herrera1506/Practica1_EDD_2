#include "RandomClientes.h"

#include <stdlib.h>
#include <time.h>

#include <Clientes.h>

#include <iostream>

#include <string>

using namespace std;
RandomClientes::RandomClientes()
{
    //ctor
}

RandomClientes::~RandomClientes()
{
    //dtor
}
Clientes* RandomClientes::AgregarClientesRandom(int id1){

        int Edad = 3 + rand() % (99-1);
        int Tipo = 2 + rand() % (3-0);
        int Boleto = 0 + rand() % (2-1);////2 = con boleto y 1 = sin boleto
        int Genero = 0 + rand() % (2-0);//1= hombre y 0 = mujer
        int Discapacidad = 0 + rand() % (2-0); //1 discapacidad y 0 notiene
        int Embarazada = 0 + rand() % (2-0);//1 embarazada y 0 sin nada

        string Estado_Cliente = "Nada";
        int Edad_Cliente = Edad;
        string Tipo_Cliente = "Nada";
        string Genero_Cliente = "Nada";
        string Nombre_Cliente= "Nada";
        string Informacion= "Nada";
        string Ubicacion= "Nada";

        int id = id1;

        if(Edad > 18 || Edad == 18)
        {
            Edad_Cliente = Edad;
            if(Edad>75)
            {

                if(Discapacidad == 1)
                {
                    Estado_Cliente = "Persona Discapacitada";

                }
                else
                {
                    Estado_Cliente = "Persona de la Tercera Edad";
                }
            }
            else
            {

                if(Discapacidad==1)
                {
                    Estado_Cliente = "Persona Discapacitada";

                }
                else
                {
                    Estado_Cliente = "Persona Mayor de Edad";
                }
            }
        }
        else
        {
                Edad_Cliente = Edad;
                if(Discapacidad==1)
                {
                    Estado_Cliente = "Persona Discapacitada";

                }
                else
                {
                    Estado_Cliente = "Persona Menor de Edad";
                }
        }

        if(Tipo == 1)
        {
            Tipo_Cliente = "Pasajero Premium";
        }
        else if (Tipo == 2)
        {
            Tipo_Cliente = "Pasejero Regular";
        }
        else
        {
            Tipo_Cliente = "Pasajero Invitado";
        }

        Nombre_Cliente = "Cliente_" + to_string(id);


        if(Genero == 1)
        {
            Genero_Cliente = "Mujer";
            if(Embarazada == 1 && Discapacidad != 1)
            {
                Estado_Cliente = "Mujer Embarazada";
            }
        }
        else
        {
            Genero_Cliente = "Hombre";
        }
        //string nombre, string RangoEdad, int Edad, string Ubicacion,string TipoCliente, string Informacion,string Genero
        //string nombre, string RangoEdad, int Edad, string Ubicacion,string TipoCliente, string Informacion,string Genero,int Boleto
        Clientes *Random_Clientes = new Clientes(Nombre_Cliente,Estado_Cliente,Edad_Cliente,Ubicacion,Tipo_Cliente,Informacion,Genero_Cliente,Boleto);

        return Random_Clientes;

    }

