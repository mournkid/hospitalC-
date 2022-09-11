
#include<string> 
#include<vector>
#include"Paciente.h" 

using namespace std; 

class Leito //Cama
{
private:
   bool ocupado;
   vector <Paciente> pa;
public:
   Leito();
   //~Leito();
   //string get_paciente();
   void set_ocupacao(Paciente& p);
   bool get_ocupacao();
   void remove_paciente();
   Paciente devolve_paciente();
   string ocupacao(bool x);
};

//#endif



















