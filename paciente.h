#ifndef PACIENTE_H
#define PACIENTE_H
#include <iostream>
#include <string>
using namespace std;

class Paciente
{
private:
    int id;                 /*Numero de identificacion*/
    string nombre;     /*Nombre del paciente*/
    int edad;               /*Edad del paciente*/
    bool positivo;          /*Si tuvo covid-19*/
    char genero;
    double altura;
    double masa;
    bool alta;
    string tieneCovid();
    string estado();
public:
    static int totalPacientes;
    Paciente();
    Paciente(string nombre, int edad);
    string ficha();
    void setPositivo(bool newValue);
    void setAltura(double altura);
    void setMasa(double masa);
    void setAlta(bool alta);
    void setGenero(char genero);
    int getCodigo();
    //void dardeAlta();
};

#endif // PACIENTE_H
