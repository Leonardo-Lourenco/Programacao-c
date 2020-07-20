#include <iostream>  
#include <string.h>
#include <stdlib.h>


using namespace std;

class Pessoa{
	
	
	//Atributos e Métodos
	private:
	   
	   string nome;
	   int idade;
	   
	   
	   public:
	      Pessoa(string, int);
	      void ler();
	      void correr();
	
	
	
	
	};

Pessoa::Pessoa(string _nome, int _idade){
	
	  nome = _nome;
	  idade = _idade;
	
	}

void Pessoa::ler(){
	
	cout<<"Olá sou  "<<nome<< "  estou aprendendo POO"<<endl;
	
	}
	
void Pessoa::correr(){
	
	cout<<"Olá sou   "<< nome<<"estou correndo agora   e tenho "<<idade<<"  de idade"<<endl;
}	
	

int main(){
	
	
	
	Pessoa primeiraPessoa = Pessoa("Leo", 20);
	primeiraPessoa.ler();
	
	Pessoa primeiraPessoa2 = Pessoa("Camarom", 30);
	primeiraPessoa2.correr();
	

	
	
	
	
	
	return 0;
		
	}
