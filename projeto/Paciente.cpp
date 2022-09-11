#include<string>
#include<vector>
#include<iostream>
#include "Paciente.h"
using namespace std;

 // situação do paciente internado, ou que já passou pelo hospital 
Paciente::Paciente(string cpf_, string nome_, string endereco_, string telefone_, int idade_ , string sangue_, string triagem_, string situacao_, vector<string> historico_ )
{
  cpf = cpf_;
  nome = nome_;
  endereco = endereco_;
  telefone_contato = telefone_;
  idade = idade_;
  tipo_s = sangue_;
  classe_triagem = triagem_;
  situacao = situacao_;
  historico = historico_;
}
 
// Paciente::~Paciente()
// { 
// }

//string , string , string , string , int , string , string , string , vector<string> 
//cadastro do paciente 
void Paciente::set_registro( string temp_cpf, string temp_nome, string temp_endereco, string temp_telefone_contato, string temp_tipo_s, int temp_idade ){
    cpf = temp_cpf;
    nome = temp_nome;
    endereco = temp_endereco;
    telefone_contato = temp_telefone_contato;
    tipo_s = temp_tipo_s;
    idade = temp_idade;
}

void Paciente:: set_cpf(string cpf__){
  cpf = cpf__;
}

void Paciente:: set_nome(string nome__){
  nome = nome__;
}

void Paciente::set_modificar_nome(string nome_novo){
  nome = nome_novo;
}

void Paciente::set_modificar_endereco(string endereco_novo){
  endereco = endereco_novo;
}

void Paciente::set_modificar_situacao(string situacao_novo){
  nome = situacao_novo;
}

void Paciente::set_modificar_telefone(string telefone_novo){
  telefone_contato = telefone_novo;
}

void Paciente::set_situacao(string temp_situacao){
    situacao = temp_situacao; 
}

string Paciente::get_cpf (){
  return cpf;
}

string Paciente::get_nome_paciente(){
	return nome;
}
string Paciente::get_situacao(){
	return situacao;
}
string Paciente::get_tipo_s(){
	return tipo_s;
}
void Paciente::imprimir(){
    cout << "---- FICHA DO PACIENTE ----\n\n";
    cout << "NOME: " << nome << endl;
    cout << "CPF: " << cpf << endl;
    cout << "IDADE: " << idade << endl;
    cout << "ENDERECO: " << endereco << endl;
    cout << "TELEFONE: "  << telefone_contato << endl;
    cout << "TIPO SANGUINEO: " << tipo_s << endl;
    cout << "SITUACAO: "  << situacao << endl;
 
}

string  Paciente::get_endereco(){
  return endereco;
}

string Paciente::get_telefone(){
  return telefone_contato;
}

int Paciente::get_idade(){
  return idade;
}

string Paciente::get_triagem(){
  return classe_triagem;
}