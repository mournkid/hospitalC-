#include<string>
#include<vector>

using namespace std;

class Paciente {
  
private:
   string cpf; //chave
   string nome;
   string endereco;
   string telefone_contato;
   int idade;
   string tipo_s;
   string classe_triagem;
   string situacao; //internado/alta
   vector<string> historico;
 
public:
   Paciente(string , string , string , string , int , string , string , string , vector<string>  );
   //~Paciente();
   friend class Leito;
   //void leitura_registro();
   void set_registro( string , string , string , string , string , int);
   void set_cpf (string);
   void set_nome(string);
   void set_modificar_nome(string );
   void set_modificar_endereco(string);
   void set_modificar_situacao(string);
   void set_modificar_telefone(string);
   //void leitura_situacao();
   void set_situacao( string );
   string get_nome_paciente();
   string get_situacao();
   string get_tipo_s();
   string get_cpf();
   void imprimir();
   string get_endereco();
   string get_telefone();
   int get_idade();
   string get_triagem();
};
