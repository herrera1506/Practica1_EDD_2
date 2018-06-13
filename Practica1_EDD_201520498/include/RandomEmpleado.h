#ifndef RANDOMEMPLEADO_H
#define RANDOMEMPLEADO_H
#include <PilaEmpleado.h>


class RandomEmpleado
{
    public:
        RandomEmpleado();
        virtual ~RandomEmpleado();
        PilaEmpleado* AgregarEmpleadoRandom(int dato);


    protected:
    private:
};

#endif // RANDOMEMPLEADO_H
