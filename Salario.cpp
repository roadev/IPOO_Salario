/* Autores: Hecho por Juan David Roa Valencia y Jhonatan David Vanegas
 * Fecha de creación: 11/09/14
 * Versión: 1.1
 * 
 * Nombre de la Clase: Salario.cpp
 * Responsabilidad: 
 * Colaboración: 

 */

#include <iostream>
#include "Salario.h"
#include <string>
using namespace std;

Salario::Salario() {
    anteriorSalario = 0;
    nuevoSalario = 0;
    incremento = 1.25;
    nombreEmpleado = "";
    zonaEmpleado = 0;
}

Salario::~Salario() {  
}

void Salario::ingresarSalarioAnterior(double sA){
    anteriorSalario = sA;
}

void Salario::ingresarNombreEmpleado(string nE){
    nombreEmpleado = nE;
}

void Salario::determinarZonaEmpleado(int zE){

    zonaEmpleado = zE;
    switch (zE)
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

string Salario::getNombreEmpleado(){
    return nombreEmpleado;
}

char Salario::getZonaEmpleado(){
    return zonaEmpleado;
}

double Salario::getNuevoSalario(){
    return nuevoSalario;
}
