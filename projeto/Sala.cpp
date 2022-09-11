#include<string>
#include<vector>
#include<iostream>
#include "Sala.h"

using namespace std;

Sala::Sala()
{
  numero_max_leitos = 3;
}
 
// Sala::~Sala()
// {
// }

void Sala::adiciona_leito(Leito& leito){
  if(get_numero_leitos_ocupados() == 3){
    cout << "Sala cheia! Adicionando a lista de espera" << endl;
    lista_de_espera.push_back(leito.devolve_paciente());
    return;
  }
  leitos.push_back(leito);
}
 
int Sala::get_numero_leitos(){
  return numero_max_leitos;
}
 
int Sala::get_numero_leitos_ocupados(){
  int n = 0;
   for(int i = 0; i < leitos.size(); i++){
     if(leitos[i].get_ocupacao() == 1){
       n++;
     }
   }
   return n;
}
 
int Sala::get_numero_leitos_desocupados(){
  return get_numero_leitos() - leitos.size();
}

Paciente Sala::paciente_listaDeEspera(int i){
  return lista_de_espera[i];
}

int Sala::get_tamanho_lista_de_espera(){
  return lista_de_espera.size();
}

void Sala::exibe_lista_de_espera(){
  int i;
  cout << "---- Lista de espera ----" << endl;
  for(i = 0; i < lista_de_espera.size(); i++){
    paciente_listaDeEspera(i).imprimir();
  }
} 