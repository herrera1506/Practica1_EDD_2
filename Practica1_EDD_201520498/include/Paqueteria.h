#ifndef PAQUETERIA_H
#define PAQUETERIA_H
#include <iostream>
#include <Paqueteria.h>
using namespace std;

class Paqueteria
{
    public:
        Paqueteria();
        Paqueteria(int id, string Nombre, string TipoPaquete,string Asunto);
        virtual ~Paqueteria();
        Paqueteria *Siguiente=NULL;
        Paqueteria *Anterior=NULL;
        int id=0;
        string Nombre;
        string TipoPaquete;
        string Asunto;


    protected:
    private:
};

#endif // PAQUETERIA_H
