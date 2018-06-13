#include "RandomEquipaje.h"

RandomEquipaje::RandomEquipaje()
{
    //ctor
}

RandomEquipaje::~RandomEquipaje()
{
    //dtor
}

Equipaje* RandomEquipaje::AgregarEquipajeRandom(int dato){

    int id=dato;
    int Tipo = 2 + rand() % (4-0);
    int Asutos = 0 +rand()% (2-1);//2 por llegada y 1 por entrar

        string Nombre_Equipaje ="Equipaje:";
        string TipoPaquete_Equipaje="";
        string Asunto_Equipaje="";

          if(Tipo == 4){
            TipoPaquete_Equipaje="Equipaje Personal";
        }
        else if (Tipo ==3){
            TipoPaquete_Equipaje="Equipaje Familiar";

        }
        else if (Tipo ==2){
            TipoPaquete_Equipaje="Equipaje Turistico";

        }
        else {
            TipoPaquete_Equipaje="Equipaje Comercial";

        }
        //
        if(Asutos ==2){

            Asunto_Equipaje="El Equipaje esta por llegada";
        }
        else{

             Asunto_Equipaje="El Equipaje esta por Salir";
        }

         Equipaje *Random_Equipajess = new Equipaje(id,Nombre_Equipaje,TipoPaquete_Equipaje,Asunto_Equipaje);

        return Random_Equipajess;

}
