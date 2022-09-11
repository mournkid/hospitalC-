
#include <iostream>
#include <string>
#include<vector>
#include "Ala.h"
//#include "Sala.h"

using namespace std;

class Hospital
{
private:
   vector<Ala> alas; 

public:
   float quant_salas();
   Hospital();
   //~Hospital();
   void adicionaAla(Ala& ala);
   void removeAla(Ala& ala);
   void relatorio_estatistico();
   float qtde_leitos_ocupados();
};

