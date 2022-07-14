#ifndef HOSPITAL_H
#define HOSPITAL_H

#include <vector>
#include "paciente.h"


class Hospital
{
private:
    string nombre;
    vector<Paciente> pacientes;
public:
    Hospital();
    Hospital(string nombre);
    void ingresarPaciente();
    void listarPacientes();
    void darAlta(int id);
};

#endif // HOSPITAL_H
