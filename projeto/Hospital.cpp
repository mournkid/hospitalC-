#include <iostream>
#include <string>
#include<vector>
#include "Hospital.h"




Hospital::Hospital()
{ 
  
}

// Hospital::~Hospital()
// { 
//  }

void Hospital::relatorio_estatistico(){
  cout << "------ " << "RELATORIO ESTATISTICO DO HOSPITAL --------" << endl;
  cout << "Numero de alas: " << alas.size() << endl;
  cout << "Numero de salas: " << quant_salas() << endl;
  cout << "Numero de total de leitos " << quant_salas()*3 << endl;
  cout << "Numero de leitos ocupados: " << qtde_leitos_ocupados()<< "------------- " << (qtde_leitos_ocupados()*1.0/(quant_salas()*3.0))*100 << "%" <<endl;
  cout << "Numero de leitos desocupados: "<< quant_salas()*3.00 - qtde_leitos_ocupados() << "---------- " << 100 -(qtde_leitos_ocupados()*1.0/(quant_salas()*3.0))*100 << "%" << endl;

}
void Hospital::adicionaAla(Ala& ala){
   alas.push_back(ala);
}

void Hospital::removeAla(Ala& ala){
   alas.pop_back();
  
}

float Hospital::quant_salas(){
  float quant = 0;
  for(int i = 0; i < alas.size(); i++){
    quant += alas[i].qtde_salas();
  }
  return quant;
}

float Hospital::qtde_leitos_ocupados(){
  int i;
  float qtde;
  for(i = 0; i<alas.size(); i++){
    qtde +=alas[i].qtde_leitos_ocupados();
  }
  return qtde;
}

