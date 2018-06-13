#ifndef LISTAPAQUETERIA_H
#define LISTAPAQUETERIA_H
#include <Paqueteria.h>

using namespace std;
class ListaPaqueteria
{
    public:
        ListaPaqueteria();
        virtual ~ListaPaqueteria();
         int Id_Actual=0;
            Paqueteria *primero=NULL;
            Paqueteria *ultimo=NULL;
        void AgregarPaquetes(Paqueteria *Paquete);
        void MostrarDatos();

    protected:
    private:
};

#endif // LISTAPAQUETERIA_H
