#include <iostream>
#include <string>
#include<vector>
#include "Sala.h"
using namespace std;

class Ala{
private:
   vector<Sala> salas;
public:
   //Ala();
   //~Ala();
   void adicionaSala(Sala& sala);
   void deleteAla();
   void TaxaOcupacaoLeito(); 
   int qtde_salas();
   int qtde_leitos_ocupados();
};
