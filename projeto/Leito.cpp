#include<iostream>
#include "Leito.h"
#include<vector>


using namespace std;
Leito::Leito()
{ 
   ocupado = false;
}
 
// Leito::~Leito()
// {
// }
 
void Leito::set_ocupacao(Paciente& p){
  if(ocupado != true){
    pa.push_back(p);
  }
  ocupado = true;
}

bool Leito::get_ocupacao(){
  return ocupado;
}

void Leito::remove_paciente(){
  if(get_ocupacao() == true){
    pa.pop_back();
  }
  ocupado = false;
}

Paciente Leito:: devolve_paciente(){
  return pa[0];
}

string Leito::ocupacao(bool x){
  if(x == 1){
    return "ocupado";
  }else{
    return "desocupado";
  }
}
//}



























