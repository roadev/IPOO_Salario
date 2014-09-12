/* Autor: Hecho por Juan David Roa Valencia
 * Fecha de creación: 11/09/14
 * Versión: 0.4
 * 
 * Nombre de la Clase: salario.h
 * Responsabilidad: 
 * Colaboración: 

 */

#include <iostream>
#include "salario.h"
#include <string>
using namespace std;

    string nombreEmpleado;
    double nuevoSalario;
    
    Salario salarioNuevo;

int main() {

    cout<<"Ingrese el nombre del empleado"<<endl;
    cin>>nombreEmpleado;
    salarioNuevo.ingresarNombreEmpleado(nombreEmpleado);
    cout<<"Ingrese la zona donde labora el empleado: "<<endl;
    cout<<"Ingrese 1 para zona Administrativa "<<endl;
    cout<<"Ingrese 2 para zona de Transporte "<<endl;
    cout<<"Ingrese 3 para zona de Investigación "<<endl;
    int zonaEmpleado;
    cin>>zonaEmpleado;
    salarioNuevo.ingresarZonaEmpleado(zonaEmpleado);
    cout<<"Ingrese el salario anterior del empleado: "<<endl;
    double anteriorSalario;
    cin>>anteriorSalario;
    salarioNuevo.ingresarSalarioAnterior(anteriorSalario);
    
    salarioNuevo.calcularNuevoSalario();
    cout<<"El nuevo salario para el empleado: "<<salarioNuevo.getNombreEmpleado()<<" de la zona: "
            <<salarioNuevo.getZonaEmpleado()<<"es: "<<salarioNuevo.getNuevoSalario()<<endl;    
}

