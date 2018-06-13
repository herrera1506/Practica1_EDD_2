#include "RandomPaquetes.h"
#include <Paqueteria.h>

RandomPaquetes::RandomPaquetes()
{
    //ctor
}

RandomPaquetes::~RandomPaquetes()
{
    //dtor
}

Paqueteria* RandomPaquetes::AgregarPaquetesRandom(int dato){

    int id=dato;
    int Tipo = 2 + rand() % (4-0);
    int Asutos = 0 +rand()% (2-1);//2 por llegada y 1 por entrar

        string Nombre_Paquete ="Paquete:";
        string TipoPaquete_PaqueteT="";
        string Asunto_Paquete="";

        if(Tipo == 4){
            TipoPaquete_PaqueteT="Paquete Personal";
        }
        else if (Tipo ==3){
            TipoPaquete_PaqueteT="Paquete Familiar";

        }
        else if (Tipo ==2){
            TipoPaquete_PaqueteT="Paquete Turistico";

        }
        else {
            TipoPaquete_PaqueteT="Paquete Comercial";

        }
        //
        if(Asutos ==2){

            Asunto_Paquete="El paquete esta por llegada";
        }
        else{

             Asunto_Paquete="El paquete esta por Salir";
        }

         Paqueteria *Random_Paquetess = new Paqueteria(id,Nombre_Paquete,TipoPaquete_PaqueteT,Asunto_Paquete);

        return Random_Paquetess;
}




