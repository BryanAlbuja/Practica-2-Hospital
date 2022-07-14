#include "hospital.h"

Hospital::Hospital()
{
    this->nombre=" ";
}

Hospital::Hospital(string nombre)
{
    this->nombre=nombre;
}

void Hospital::ingresarPaciente()
{
    string nombre;
    int edad;
    bool estaContagiado;
    char genero;
    float altura;
    float masa;
    bool alta;

    cout << "\nIngrese el nombre del paciente: ";
    cin>> nombre;
    cout << "\nIngrese la edad del paciente: ";
    cin >> edad;

    Paciente paciente1(nombre, edad);

    cout << "\nGenero (m/f): ";
    cin >> genero;
    paciente1.setGenero(genero);

    cout << "\nAltura (centimetros): ";
    cin >> altura;
    paciente1.setAltura(altura);

    cout << "\nMasa (kilogramos): ";
    cin >> masa;
    paciente1.setMasa(masa);

    cout << "¿El paciente esta contagiado?\n";
    cout << "1:si  \0:No\n";
    cout << "\nIngrese el valor de la prueba: ";
    cin >> estaContagiado;
    paciente1.setPositivo(estaContagiado); 

    cout << "¿El paciente esta fue dado de alta?\n";
    cout << "1:si  \0:No\n";
    cout << "\nIngrese la opcion: ";
    cin >> alta;
    paciente1.setAlta(alta);

    this->pacientes.push_back(paciente1);

    //Limpiar el buffer de entrada
    cin.ignore();

}

void Hospital::listarPacientes()
{
    cout<<"\n= = "+this->nombre+" = =\n";
    for (Paciente paciente1 : this->pacientes){
        cout << paciente1.ficha();
    }
}

void Hospital::darAlta(int id)
{
    for (Paciente paciente1 : this->pacientes){

        if(paciente1.getCodigo()==id){

        }
    }
}

