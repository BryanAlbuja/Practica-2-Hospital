#include <iostream>
#include "paciente.h"
#include "hospital.h"
using namespace std;

// Inicializar la variable estatica
int Paciente::totalPacientes = 0;
int main()
{
    int op=0, pa=0;
    Hospital hcam("Hospital Guasmo sur");
    Paciente p;
    do{
        cout << "HOSPITAL GUASMO SUR\n";
        cout << "1.---Ingreso del paciente---\n";
        cout << "2.---Lista de pacientes---\n";
        cout << "3.---Lista de pacientes contagiados---\n";
        cout << "4.---Dar de alta paciente---\n";
        cout << "5.---Indicar a un paciente como contagiado---\n";
        cout << "6.---Total de pacientes---\n";
        cout << "7.---Salir---\n\n";
        cin >> op;
        switch (op) {
        case 1:
            cout << "\n INGRESO DEL PACIENTE ";
            hcam.ingresarPaciente();
            break;
        case 2:
            cout << "\n\n LISTA DE LOS PACIENTES \n\n";
            hcam.listarPacientes();
            break;
        case 3:
            cout << "\n\n LISTA DE LOS PACIENTES CONTAGIADOS \n\n";
            hcam.listarPacientes();
            break;
        case 4:
            cout << "\n\n* DAR DE ALTA A UN PACIENTE *\n\n";
            cout << "QUE PACIENTE QUIERE DAR DE ALTA? \n";
            cin >> pa;

            };
            break;

        break;
    }while(op!=7);
    cout << "\n\t * FIN DEL PROGRAMA *\n\n";
    return 0;
}
