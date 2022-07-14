#include "paciente.h"

string Paciente::tieneCovid()
{

    return this->positivo ? "Si" : "No";
}

string Paciente::estado()
{
    return this->alta ? "Si" : "No";
}

Paciente::Paciente()
{
    id=0;
    nombre=" ";
    edad=0;
    positivo=false;
    altura=0.0;
    masa=0.0;
    genero='n';
    alta=false;
}

Paciente::Paciente(string nombre, int edad)
{
    Paciente::totalPacientes++;
    id=Paciente::totalPacientes;
    this->nombre=nombre;
    this->edad=edad;
    positivo=false;
}


void Paciente::setPositivo(bool newValue)
{
    this->positivo=newValue;
}

void Paciente::setAltura(double altura)
{
    this->altura=altura;
}

void Paciente::setMasa(double masa)
{
    this->masa=masa;
}

void Paciente::setAlta(bool alta)
{
    this->alta=alta;
}

void Paciente::setGenero(char genero)
{
    this->genero=genero;
}

int Paciente::getCodigo()
{
    return this->id;
}
string Paciente::ficha()
{
    string str="ID= " + to_string(id) + "\n" +
                 "Nombre: " + nombre + "\n" +
                 "Edad: " + to_string(edad) + "\n" +
                 "Altura(cm): " + to_string(altura) + "\n" +
                 "Masa(kg): " + to_string(masa) + "\n" +
                 "Genero: " + to_string(genero) + "\n" +
                 "Tiene Covid-19: " + tieneCovid() + "\n"+
                 "Alta: " + estado() + "\n\n";

    return str;
}


