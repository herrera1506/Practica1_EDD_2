#ifndef EMPLEADOS_H
#define EMPLEADOS_H
#include <string>
using namespace std;
class Empleados
{
    public:
        Empleados();

        virtual ~Empleados();
        Empleados(string TipoEmpleado, string Informacion, string Empleado_Ubicacion);
        Empleados *Siguiente;
        Empleados *Anterior;
        int id;
        string TipoEmpleado;
        string Informacion;
        string Empleado_Ubicacion;

    protected:
    private:
        bool Turno= false;
};

#endif // EMPLEADOS_H
