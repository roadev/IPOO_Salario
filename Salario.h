/* Autores: Hecho por Juan David Roa Valencia y Jhonatan David Vanegas
 * Fecha de creación: 11/09/14
 * Versión: 1.1
 * 
 * Nombre del archivo: Salario.h
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
    void determinarZonaEmpleado(int zE);
    void ingresarSalarioAnterior(double sA);
    double getNuevoSalario();
    string getNombreEmpleado();
    char getZonaEmpleado();
    void calcularNuevoSalario();
       
private: //Atributos
    double anteriorSalario;
    double nuevoSalario;
    double incremento;
    string nombreEmpleado;
    int zonaEmpleado;
};

#endif	/* SALARIO_H */