#include <iostream>
#include <Clientes.h>
#include <Empleados.h>
#include <string>
#include <ListaCliente.h>
#include <PilaEmpleado.h>
#include <RandomClientes.h>


using namespace std;

struct Nodo {


};

int main()
{

  ListaCliente *PunteroClientes;
  //PilaEmpleado *PilaEmp = new PilaEmpleado();
  RandomClientes *Mo = new RandomClientes();

  PunteroClientes = Mo->AgregarClientesRandom();
  cout<<"\n";
  PunteroClientes->MostrarDatos();

}

