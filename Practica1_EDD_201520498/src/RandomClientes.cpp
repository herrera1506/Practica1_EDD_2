#include "RandomClientes.h"
#include <stdlib.h>
#include <time.h>
#include <Clientes.h>

using namespace std;
RandomClientes::RandomClientes()
{
    //ctor
}

RandomClientes::~RandomClientes()
{
    //dtor
}
ListaCliente *RandomClientes::AgregarClientesRandom(){

    int Random = 6 + rand() % (20 -10);
    int Interaciones = Random +rand() % (51-1);
    cout<<"Numero De Interaciones"<<Interaciones;
    ListaCliente * RandomClie = new ListaCliente();

    int x=0;
    while (x<Interaciones){
        int Edad = 3 + rand() % (99-1);
        int Tipo = 2 + rand() % (3-0);
        int Boleto = 0 +rand()% (2-1);////2 = con boleto y 1 = sin boleto
        int Genero = 0 +rand()%(1-0);//1= hombre y 0 = mujer
        int Discapacidad = 0 + rand() % (1-0); //1 discapacidad y 0 notiene
        int Embarazada = 0 +rand()%(1-0);//1 embarazada y 0 sin nada
        string Estado_Cliente;
        string Tipo_Cliente;
        string Genero_Cliente;
        string Nombre_Cliente;
        string Informacion;
        string Ubicacion;
        int id = RandomClie->Id_Actual;

        if (Edad > 18 || Edad==18){

            if(Edad>75){

                if (Discapacidad == 1){

                    Estado_Cliente="Discapacitado y de Tercera Edad";
                }
                else{
                    Estado_Cliente="Tercera Edad";

                }
            }

            else if (Discapacidad == 1){

                Estado_Cliente="Discapacitado y Mayor de Edad";
            }
            else{

                Estado_Cliente="Mayor de Edad";
            }
        }
            else
            if (Discapacidad==1){
                Estado_Cliente="Discapacitada y Menor de Edad";
            }
            else{
                Estado_Cliente="Menor de Edad";
            }

        if (Tipo == 1){
            Tipo_Cliente="Premium";

        }else if (Tipo==2){
            Tipo_Cliente="Regular";
        }
        else {
            Tipo_Cliente="Invitado";

        }
         //Nombre_Cliente="Cliente" + to_String(id);

        if(Genero ==1){

                Genero_Cliente="Mujer";
                if(Embarazada==1 && Discapacidad !=1){
                    Estado_Cliente="Mujer Embarazada";
                }


        }
        else {
            Genero_Cliente="Varon";
        }
        //string nombre, string RangoEdad, int Edad, string Ubicacion,string TipoCliente, string Informacion,string Genero
        RandomClie->AgregarDatos(Nombre_Cliente,Estado_Cliente,Edad,Ubicacion,Tipo_Cliente,Informacion,Genero_Cliente);
        RandomClie->Id_Actual++;
        }

    }

