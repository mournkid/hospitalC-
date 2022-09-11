#include<string>
#include<vector>
#include<iostream>
#include "Hospital.h"

using namespace std;

class ArquivoPacientes
{
private:
   vector<Paciente> pacientes;
   int data_in_out[11];
public:
   ArquivoPacientes();
   //~ArquivoPacientes();
   //CRUD
   void Create(Paciente& P);
   Paciente Read(int i);
   void Update(Paciente& p, int i);
   void devolver_informacoes(string cpf_ );
   void Delete();
   int devolver_data(int i);
};

