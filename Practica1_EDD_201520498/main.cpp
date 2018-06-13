#include <iostream>
#include <Clientes.h>
#include <Empleados.h>
#include <string>
#include <ListaCliente.h>
#include <PilaEmpleado.h>
#include <RandomClientes.h>
#include <Paqueteria.h>
#include <RandomPaquetes.h>
#include <ListaPaqueteria.h>
#include <Equipaje.h>
#include <ListaEquipaje.h>
#include <RandomEquipaje.h>


using namespace std;

int main()
{

        Clientes *Clientes_;
        ListaCliente *Lista_Clientes = new ListaCliente();
        RandomClientes *ho = new RandomClientes();
        Clientes_ = ho->AgregarClientesRandom(Lista_Clientes->Id_Actual);
        cout << " \n \n \n " << endl;
        Lista_Clientes->AgregarDatos2(Clientes_);
        Lista_Clientes->Id_Actual++;

        Clientes_ = ho->AgregarClientesRandom(Lista_Clientes->Id_Actual);
        Lista_Clientes->AgregarDatos2(Clientes_);
        Lista_Clientes->Id_Actual++;
        Lista_Clientes->MostrarDatos();


        cout << " \n \n \n /////////////////" << endl;


        Paqueteria *Pack_1;
        ListaPaqueteria *Lista_Paquetes = new ListaPaqueteria();
        RandomPaquetes *PACK_2 = new RandomPaquetes();


        Pack_1= PACK_2->AgregarPaquetesRandom(Lista_Paquetes->Id_Actual);
        Lista_Paquetes->AgregarPaquetes(Pack_1);
        Lista_Paquetes->Id_Actual++;

        Pack_1= PACK_2->AgregarPaquetesRandom(Lista_Paquetes->Id_Actual);
        Lista_Paquetes->AgregarPaquetes(Pack_1);
        Lista_Paquetes->Id_Actual++;

        Lista_Paquetes->MostrarDatos();


        cout << " \n \n \n /////////////////" << endl;

        Equipaje *Equipaje_1;
        ListaEquipaje *Lista_Equipaje = new ListaEquipaje();
        RandomEquipaje *Equipaje_2 = new RandomEquipaje();


        Equipaje_1= Equipaje_2->AgregarEquipajeRandom(Lista_Equipaje->Id_Actual);
        Lista_Equipaje->AgregarEquipaje(Equipaje_1);
        Lista_Equipaje->Id_Actual++;

        Equipaje_1= Equipaje_2->AgregarEquipajeRandom(Lista_Equipaje->Id_Actual);
        Lista_Equipaje->AgregarEquipaje(Equipaje_1);
        Lista_Equipaje->Id_Actual++;

        Lista_Equipaje->MostrarDatos();











  return 0;

}

