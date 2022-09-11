#include <iostream>
#include <iomanip>
#include <string>
#include<vector>
#include "Ala.h"

using namespace std;

// Ala::Ala(){
// }
 
// Ala::~Ala()     
// {
// } 

void Ala::adicionaSala(Sala& sala){
  salas.push_back(sala);
}


void Ala::TaxaOcupacaoLeito(){
  double qtde = 0;
  float capacidade; 
  for(int i = 0; i < salas.size(); i++){
    qtde = qtde + salas[i].get_numero_leitos_ocupados();
    }
  capacidade = ((((qtde/((salas.size())*3)))*100));
  cout << qtde;
  //cout << setprecision(2) << capacidade << "%" << endl;
}


void Ala::deleteAla(){
  salas.pop_back();
}

int Ala::qtde_salas(){
  return salas.size();
}

int Ala::qtde_leitos_ocupados(){
  int qtde = 0;
  for(int i = 0; i < qtde_salas(); i++){
    qtde += salas[i].get_numero_leitos_ocupados();
  }
  return qtde;
}


