#ifndef PILAEMPLEADO_H
#define PILAEMPLEADO_H
#include <Empleados.h>

using namespace std;
class PilaEmpleado
{
    public:
        PilaEmpleado();
        virtual ~PilaEmpleado();
        int Id_Actual;
            Empleados *primero;
            Empleados *ultimo;
        void AgregarDatosEmpleado(string TipoEmpleado, string Informacion, string Empleado_Ubicacion);
        void MostrarDatosEmpleado();

    protected:
    private:
};

#endif // PILAEMPLEADO_H
