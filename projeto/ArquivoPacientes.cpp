
#include<string>
#include<vector>
#include<iostream>
#include<time.h>


#include "ArquivoPacientes.h"
//#include "Paciente.h"

using namespace std;

ArquivoPacientes::ArquivoPacientes()
{
  struct tm *data_tempo;
  time_t segundos;
  time(&segundos);
 
  data_tempo = localtime(&segundos);
  
	// inclusao de data e hora ao criar o arquivo
  data_in_out[0] = data_tempo->tm_mday;  
  data_in_out[1] = data_tempo->tm_mon+1;
  data_in_out[2] = data_tempo->tm_year+1900;
  data_in_out[3] = data_tempo->tm_hour;
  data_in_out[4] = data_tempo->tm_min;
  data_in_out[5] = data_tempo->tm_sec;
 
}
 
// ArquivoPacientes::~ArquivoPacientes()
// {
// }
 
void ArquivoPacientes::Create(Paciente& p){
   pacientes.push_back(p);
}
 
Paciente ArquivoPacientes::Read(int i){
   return pacientes[i];
}
 
void ArquivoPacientes:: Update(Paciente& p,int i){
   pacientes[i] = p;
}
 
void ArquivoPacientes :: Delete(){
   pacientes.pop_back();
}


void ArquivoPacientes::devolver_informacoes(string cpf_){
   for (int i = 0; i < pacientes.size(); i++ ){
      if(cpf_.compare(pacientes[i].get_cpf()) == 0){
         cout << "Informações gerais sobre o paciente:" << endl;
         cout << "CPF: " << cpf_ << endl;
         cout << "Nome: " << pacientes[i].get_nome_paciente() << endl;
         cout << "Telefone: " << pacientes[i].get_telefone() << endl;
         cout << "Endereço: " << pacientes[i].get_endereco() << endl;
         cout << "Idade: " << pacientes[i].get_idade() << endl;
         cout << "Situação: " << pacientes[i].get_situacao() << endl;
         cout << "Tipo sanguíneo: " << pacientes[i].get_tipo_s() << endl;
         cout << "Classe da triagem: " << pacientes[i].get_triagem() << endl;
         return;
      }
   }
   cout << "Usuário inexistente." << endl;
}

int ArquivoPacientes::devolver_data(int i){
  return data_in_out[i];
}