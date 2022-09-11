 //  Controle e gerenciamento de pacientes.
#include<iostream>
#include<vector>
#include<string>
#include<time.h>
#include <stdlib.h>
#include "ArquivoPacientes.h"


using namespace std;

int main(){
  
  //PACIENTES
  Paciente paciente_01 = Paciente("099.456.344-21","Carlos José dos Santos","Rua Albedo","999236578",26,"A+","Urgente, não importante","Internado",{"20/10/2020 -- Covid","11/12/2021 -- Hepatite A"});
  Paciente paciente_02 = Paciente("566.823.777-36","Cecília Rodrigues","Rua José Magalhães","998456783",22,"AB-","Não urgente, importante","Consulta",{"11/12/2021 -- Mamografia"});
  Paciente paciente_03 = Paciente("899.356.199-67","Ramon Oliveira","Rua Frei Inocêncio","981796941",37,"O-","Urgente,importante","Cirurgia",{"21/04/2021 -- Exame de rotina -- Tumor no cérebro","23/05/2021 -- Acompanhamento","20/06/2021 -- Acompanhamento","19/09/2021 -- Acompanhamento","04/11/2021 -- Acompanhamento","11/12/2021 -- Cirurgia de remoção"});
  Paciente paciente_04 = Paciente("999.479.397-09","Nicolas Takadashi","Rua Boa Esperança","998784567",19,"B+","Não urgente, não importante","Exame",{"23/05/2021 -- Exame de Rotina","11/12/2021 -- Exame de Rotina"});
  Paciente paciente_05 = Paciente("365.879.775-95","Max Antônio Almeida","Rua José Filho","997346579",27,"A-","Urgente, importante","Internado",{"11/12/2021 -- Desidratação"});
  Paciente paciente_06 = Paciente("678.997.665-08","Natali Oliveira","Rua Zeferino","999334520",32,"O-","Urgente, importante","Alta",{"23/10/2020 -- Pré-Natal -- 2º mês de gravidez","19/12/2020 -- Pré-Natal -- 4º mês de gravidez","18/02/2021 -- Pré-Natal -- 6º mês de gravidez","17/03/2021 -- Pré-Natal -- 7º mês de gravidez","22/03/2021 -- Pré-Natal -- 8º mês de gravidez","13/04/2021 -- Parto"}); 
  Paciente paciente_07 = Paciente("067.123.564-06", "Rafael da Silva", "Rua Pernambuco", "998453216", 23, "B+", "Urgente, importante", "Internado", {"11/12/2021 -- intoxicacao alimentar"});
  Paciente paciente_08 = Paciente("231.889.437-56","Rafaela Borges","Rua Marcio Passos","981234571",20,"O+","Não urgente, importante","Em observação",{"11/12/2021 -- Taxa de glicose alta -- Paciente com diabetes"});
  Paciente paciente_09 = Paciente("123.333.342-45","Camila da Silva Lima", "Rua Vereador Antônio","987672872",19,"A-","Não urgente, não importante", "Alta", {"02/09/2018 -- Fratura no braco","10/06/2019 -- Sindrome gripal"} );
  Paciente paciente_10 = Paciente("096.123.756-02", "Vinicius Ferreira da Conceicao", "Rua Luiz Freire","998562312",10, "AB+","Não urgente, não importante", "Exame", {"11/12/2020 -- Fratura no polegar"});
  Paciente paciente_11 = Paciente("046.143.756-04", "Luana Silva da Conceicao", "Rua Garcia ","988599310", 8, "A+","Não urgente, importante", "Consulta", {"09/12/2021 -- Virose"});
  Paciente paciente_12 = Paciente("077.183.756-04", " Jonas Cauan de Oliveira", "Rua Bento Filho ","937590310", 23, "A+","Não urgente, importante", "Consulta", {"11/12/2021 -- Avaliação cardíaca"});

 //ALAS
  Ala ala_cardiaca;
  Ala ala_cirurgica;
  Ala ala_geral;
  
  //SALAS
  Sala sala_01;
  Sala sala_02;  
  Sala sala_03;
  Sala sala_04;
  Sala sala_05;
  Sala sala_06;

  // SALAS POR ALAS 
  ala_cardiaca.adicionaSala(sala_01);
  ala_cardiaca.adicionaSala(sala_02);
   
  ala_cirurgica.adicionaSala(sala_03);
  ala_cirurgica.adicionaSala(sala_04);

  ala_geral.adicionaSala(sala_05);
  ala_geral.adicionaSala(sala_06);
  
  // LEITOS 
  Leito leito_01, leito_02, leito_03, leito_04, leito_05, leito_06,leito_07, leito_08, leito_09, leito_10, leito_11, leito_12, leito_13, leito_14, leito_15, leito_16, leito_17, leito_18, leito_19, leito_20, leito_21, leito_22, leito_23, leito_24, leito_25, leito_26, leito_27, leito_28, leito_29, leito_30;

  // PACIENTE POR LEITO 
   
   // ala geral 
   leito_13.set_ocupacao(paciente_01);
   leito_14.set_ocupacao(paciente_02);
   leito_15.set_ocupacao(paciente_04);
   leito_16.set_ocupacao(paciente_05);
   leito_17.set_ocupacao(paciente_07);
   leito_18.set_ocupacao(paciente_08);
   // ala cirurgica 
   leito_07.set_ocupacao(paciente_03);
   // ala cardiaca 
   leito_01.set_ocupacao(paciente_12);
   // lista de espera para a ala geral 
   leito_19.set_ocupacao(paciente_10);

  // LEITOS POR SALA
  // sala 1 e 2 - ala cardiaca
  // sala 3 e 4 - ala cirurgica
  // sala 5 e 6 - ala geral 
  sala_01.adiciona_leito(leito_01);    
  sala_01.adiciona_leito(leito_02);
  sala_01.adiciona_leito(leito_03);  
  sala_02.adiciona_leito(leito_04); 
  sala_02.adiciona_leito(leito_05); 
  sala_02.adiciona_leito(leito_06); 
  sala_03.adiciona_leito(leito_07); 
  sala_03.adiciona_leito(leito_08); 
  sala_03.adiciona_leito(leito_09); 
  sala_04.adiciona_leito(leito_10); 
  sala_04.adiciona_leito(leito_11); 
  sala_04.adiciona_leito(leito_12); 
  sala_05.adiciona_leito(leito_13); 
  sala_05.adiciona_leito(leito_14); 
  sala_05.adiciona_leito(leito_15); 
  sala_06.adiciona_leito(leito_16); 
  sala_06.adiciona_leito(leito_17); 
  sala_06.adiciona_leito(leito_18); 

  // HOSPITAL
  Hospital ACJ;

  // ALAS NO HOSPITAL 
   ACJ.adicionaAla(ala_cardiaca);
   ACJ.adicionaAla(ala_cirurgica);
   ACJ.adicionaAla(ala_geral);

   // ARQUIVOS DOS PACIENTES 

   ArquivoPacientes documentos;

   //main 
   cout << "----------------------------------------------" << endl;
   cout << "Cadastro de um paciente: " << endl;
   cout << "Nome: " << paciente_02.get_nome_paciente() << endl;
   cout << "CPF: " << paciente_02.get_cpf() << endl;
   cout << "Endereço: " << paciente_02.get_endereco() << endl;
   cout << "Situação: " << paciente_02.get_situacao() << endl;
   cout << "Telefone: " << paciente_02.get_telefone() << endl;
   cout << "----------------------------------------------" << endl;
   cout << "Atualização de registro do paciente " << paciente_07.get_nome_paciente() << ":" << endl;
   cout << "Registro atual:" << endl;
   paciente_07.imprimir();
   cout << "Registro atualizado:" << endl;
   paciente_07.set_modificar_endereco("Rua Francisco Rodrigues");
   paciente_07.imprimir();
   cout << "----------------------------------------------" << endl;
   cout << "Desocupação do leito 17(" << leito_17.ocupacao(leito_17.get_ocupacao()) << "):" << endl;
   cout << "Paciente " << (leito_17.devolve_paciente()).get_nome_paciente() << " está recebendo alta." << endl; 
   leito_17.remove_paciente();
   cout << "Leito 17 " << leito_17.ocupacao(leito_17.get_ocupacao()) << "." << endl;  
   cout << "----------------------------------------------" << endl;
   cout << "Alocação de pacientes na sala 6(Ala geral):" << endl;
   cout << "Número máximo de leitos: " << sala_06.get_numero_leitos() << endl;
   cout << "Número de leitos desocupados: " << sala_06.get_numero_leitos_desocupados() << endl;
   sala_06.adiciona_leito(leito_19);
   sala_06.exibe_lista_de_espera();
   cout << "----------------------------------------------" << endl;
   //cout << "Taxa de ocupação das Alas do Hospital:" << endl;
   //cout << "Ala cirúrgica: ";
   // leito_07.get_ocupacao();
   //ala_cirurgica.TaxaOcupacaoLeito(); 
   //ACJ.relatorio_estatistico();
   cout << ala_geral.qtde_leitos_ocupados() << endl;
   cout << "----------------------------------------------" << endl;

   
   }





// int main(int argc, char const *argv[])
// {
//    vector<string> a = {"20/10/2021 - Infecção alimentar","25/04/2020 - Covid"};
//    Paciente b = Paciente ("077823","camille","rua frei","983294",19,"O-","urgente","alta",a) ;  
//    b.imprimir();
//    Leito x;
//    x.set_ocupacao(b);
//    cout << x.get_ocupacao()<< endl;
//    Sala z;
//    z.adiciona_leito(x);
//    cout << "Número de leitos desocupados: " << z.get_numero_leitos_desocupados() << endl;
//    Ala pediatrica;
//    pediatrica.adicionaSala(z);
//    using namespace std::this_thread;
//    using namespace std::chrono;
   
//    sleep_until(system_clock::now() + seconds(3));
//    system("clear");
//    cout << "Taxa de ocupação: ";
//    pediatrica.TaxaOcupacaoLeito();
//    Hospital huse;
//    huse.adicionaAla(pediatrica);
//    huse.relatorio_estatistico();
//    vector<string> relatorio = {"20/10/2020","02/11/2021"};
//    Paciente j = Paciente("953789","Carlos","Rua Albedo", "99872834",30,"AB+","estável","internado",relatorio);
//    ArquivoPacientes folha;
//    folha.Create(b);
//    folha.Create(j);
//    sleep_until(system_clock::now() + seconds(3));
   
//    folha.devolver_informacoes("953789");
//    x.set_ocupacao(b);

//    sleep_until(system_clock::now() + seconds(3));

//    cout << "Paciente: " << (x.devolve_paciente()).get_nome_paciente() << endl;
//    cout << folha.devolver_data(3) << endl;
   
   



//    //cout << Leito_x.ocupante_leito("999993","Carlos","rua frei","983294",19,"O-","urgente","alta",a) << endl;
//    return 0;

// }
