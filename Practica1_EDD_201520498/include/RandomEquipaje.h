#ifndef RANDOMEQUIPAJE_H
#define RANDOMEQUIPAJE_H
#include <Equipaje.h>

class RandomEquipaje
{
    public:
        RandomEquipaje();
        virtual ~RandomEquipaje();
        Equipaje* AgregarEquipajeRandom(int dato);
    protected:
    private:
};

#endif // RANDOMEQUIPAJE_H
