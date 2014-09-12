/* Autor: Hecho por Juan David Roa Valencia
 * Fecha de creación: 11/09/14
 * Versión: 0.4
 * 
 * Nombre de la Clase: salario.cpp
 * Responsabilidad: 
 * Colaboración: 

 */

#include <iostream>
#include "salario.h"
#include <string>
using namespace std;

Salario::Salario() {
    anteriorSalario = 0;
    nuevoSalario = 0;
    incremento = 1.25;
    nombreEmpleado = "";
}

Salario::~Salario() {  
}

void Salario::ingresarSalarioAnterior(double sA){
    anteriorSalario = sA;
}

void Salario::ingresarNombreEmpleado(string nE){
    nombreEmpleado = nE;
}

void Salario::ingresarZonaEmpleado(int zE){
    
    zE = zonaEmpleado;
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

double Salario::getZonaEmpleado(){
    return zonaEmpleado;
}

double Salario::getNuevoSalario(){
    return nuevoSalario;
}