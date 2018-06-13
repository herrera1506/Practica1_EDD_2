#ifndef RANDOMPAQUETES_H
#define RANDOMPAQUETES_H
#include <Paqueteria.h>


class RandomPaquetes
{
    public:
        RandomPaquetes();
        virtual ~RandomPaquetes();
        Paqueteria* AgregarPaquetesRandom(int dato);
    protected:
    private:
};

#endif // RANDOMPAQUETES_H
