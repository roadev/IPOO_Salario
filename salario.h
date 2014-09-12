/* Autor: Hecho por Juan David Roa Valencia
 * Fecha de creación: 11/09/14
 * Versión: 0.2.5
 * 
 * Nombre de la Clase: salario.h
 * Responsabilidad: 
 * Colaboración: 

 */

#ifndef SALARIO_H
#define	SALARIO_H
#include <iostream>
#include <string>
using namespace std;

class Salario {
public:
    Salario();
    ~Salario();
    string ingresarNombreEmpleado(string nE);
    int ingresarZonaEmpleado(int zE);
    double ingresarSalarioAnterior(double sA);
    
    void calcularNuevoSalario();
    double getNuevoSalario();
    
private:
    double anteriorSalario;
    double nuevoSalario;
    double incremento;
    string nombreEmpleado;
    int zonaEmpleado;
    
};

#endif	/* SALARIO_H */