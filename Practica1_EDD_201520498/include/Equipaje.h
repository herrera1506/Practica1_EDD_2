#ifndef EQUIPAJE_H
#define EQUIPAJE_H
#include <Equipaje.h>
#include <iostream>

using namespace std;

class Equipaje
{
    public:
        Equipaje();
        Equipaje(int Id, string Informacion, string TipodeEquipaje, string AsuntodeEquipaje);
        virtual ~Equipaje();

        int Id=0;
        string Informacion;
        string TipodeEquipaje;
        string AsuntodeEquipaje;

        Equipaje *Siguiente=NULL;
        Equipaje *Anterior=NULL;

    protected:
    private:
};

#endif // EQUIPAJE_H
