#include<iostream>  
#include<string.h>

// Passagem de parâmetro do tipo Estrutura

using namespace std;

struct Pessoa{
	
	  char nome[30];
	  int idade;
	
	}pessoa1;

void dados();
void exibirDados(Pessoa);

int main(){
	
	dados();
	exibirDados(pessoa1);
	
	
	return 0;
	
}

// Função para pedir dados
void dados(){
	 
	 cout<<"Informe o seu nome:  ";
	 cin.getline(pessoa1.nome,30);
	 
	 cout<<"Idade:  ";
	 cin>>pessoa1.idade;
	 
	
	}
	
// Exibir dados
void exibirDados(Pessoa p){
	
	  cout<< endl;
	  cout<<"EXIBINDO DADOS::"<<endl;
	  cout<<"Nome: "<<p.nome<<endl;
	  cout<<"Idade: "<<p.idade;
	
	}	
	
