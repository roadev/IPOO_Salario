/* Autor: Hecho por Juan David Roa Valencia
 * Fecha de creación: 11/09/14
 * Versión: 0.2
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
}

Salario::~Salario() {
    
}

Salario::ingresarSalarioAnterior(double sA){
    anteriorSalario = sA;
}

Salario::calcularNuevoSalario(){
    nuevoSalario = anteriorSalario * incremento;
}

Salario::getNuevoSalario(){
    return nuevoSalario;
}