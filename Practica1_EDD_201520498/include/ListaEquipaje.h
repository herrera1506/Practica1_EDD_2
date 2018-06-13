#ifndef LISTAEQUIPAJE_H
#define LISTAEQUIPAJE_H
#include <Equipaje.h>


class ListaEquipaje
{
    public:
        ListaEquipaje();
        virtual ~ListaEquipaje();
        int Id_Actual=0;
        Equipaje *primero=NULL;
        Equipaje *ultimo=NULL;
        void AgregarEquipaje(Equipaje *Equipaje);
        void MostrarDatos();
    protected:
    private:
};

#endif // LISTAEQUIPAJE_H
