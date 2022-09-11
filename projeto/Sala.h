#include<string>
#include<vector>
#include<iostream>
#include "Leito.h"
using namespace std;

class Sala {
private:
   vector<Leito> leitos;
   vector<Paciente> lista_de_espera;
   int numero_max_leitos;
   int ocupados;
public:
   Sala();
   //~Sala();
   void adiciona_leito(Leito& leitos);
   int get_numero_leitos();
   int get_numero_leitos_ocupados();
   int get_numero_leitos_desocupados();
   Paciente paciente_listaDeEspera(int i);
   int get_tamanho_lista_de_espera();
   void exibe_lista_de_espera();
   };
