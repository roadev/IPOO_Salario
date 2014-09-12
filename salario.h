/* Autor: Hecho por Juan David Roa Valencia
 * Fecha de creación: 11/09/14
 * Versión: 0.4
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
public: //Métodos
    Salario();
    ~Salario();
    void ingresarNombreEmpleado(string nE);
    void ingresarZonaEmpleado(int zE);
    void ingresarSalarioAnterior(double sA);
    double getNuevoSalario();
    string getNombreEmpleado();
    double getZonaEmpleado();
    void calcularNuevoSalario();
    
private: //Atributos
    double anteriorSalario;
    double nuevoSalario;
    double incremento;
    string nombreEmpleado;
    int zonaEmpleado;
};

#endif	/* SALARIO_H */