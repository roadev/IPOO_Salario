/* Autor: Hecho por Juan David Roa Valencia
 * Fecha de creación: 11/09/14
 * Versión: 0.2.5
 * 
 * Nombre de la Clase: salario.cpp
 * Responsabilidad: 
 * Colaboración: 

 */

#include <iostream>
#include "salario.h"
using namespace std;

Salario::Salario() {
    anteriorSalario = 0;
    nuevoSalario = 0;
    incremento = 1.25;
    nombreEmpleado = "";
}

Salario::~Salario() {
    
}

double Salario::ingresarSalarioAnterior(double sA){
    anteriorSalario = sA;
}

string Salario::ingresarNombreEmpleado(string nE){
    nombreEmpleado = nE;
}

int Salario::ingresarZonaEmpleado(int zE){
    zE = zonaEmpleado;
    switch (zonaEmpleado)
    {
    case 1: 
        cout<<"El empleado pertenece a la zona Administrativa"<<endl;
        break;
    case 2: 
        cout<<"El empleado pertenece a la zona de Transporte"<<endl;
        break;
    case 3: 
        cout<<"El empleado pertenece a la zona de Investigación"<<endl;
        break;
    } 
}

void Salario::calcularNuevoSalario(){
    nuevoSalario = anteriorSalario * incremento;
}

double Salario::getNuevoSalario(){
    return nuevoSalario;
}