#ifndef RANDOMCLIENTES_H
#define RANDOMCLIENTES_H
#include <stdlib.h>
#include <time.h>
#include <Clientes.h>
#include <ListaCliente.h>


class RandomClientes
{
    public:
        RandomClientes();
        virtual ~RandomClientes();

        Clientes* AgregarClientesRandom(int dato);

    protected:
    private:
};

#endif // RANDOMCLIENTES_H
