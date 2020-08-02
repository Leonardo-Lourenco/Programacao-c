#include <iostream>  
#include <string.h>
#include <stdlib.h>

// POO Polimorfismo

using namespace std;

class Pessoa{
	
	// Atributos
	private:
		string nome;
		int idade;
	
	// Metodos	
	public: 
		Pessoa(string, int); // Construtor da Classe Pessoa
		virtual void monstrarDados(); // Tag virtual significa Polimorfismo 
	
	
	};
	
	
class Aluno : public Pessoa{
	
	 // Atributos da Classe Aluno
	 private:
		
		float notaProvas;
		
	public:  // Métodos
		Aluno(string, int, float);  // Construtor da Classe Aluno
		void monstrarDados();  // Aqui temos o Polimorfismo mesma ação em classe diferentes 
	
	};

class Professor : public Pessoa{
	
	 // Atributos da Classe Professor
	 private:
		
		string materia;
		
	public:  // Métodos
		Professor(string, int, string);  // Construtor da Classe Aluno
		void monstrarDados();  // Aqui temos o Polimorfismo mesma ação em classe diferentes 
	
	};


	

// Construtor da Classe Pessoa Pai
Pessoa::Pessoa(string _nome, int _idade){
		nome = _nome;
		idade = _idade;
		
	}


// Método para exibir dados
void Pessoa::monstrarDados(){
		cout<<"Nome:  "<<nome<<endl;
		cout<<"Idade:  "<<idade<<endl;
	
	
	}


// Construtor da Classe Aluno que herda dados da Primeira pESSOA
Aluno::Aluno(string _nome, int _idade, float _notaProvas) : Pessoa(_nome, _idade){ // colquei esta linha  : Pessoa(_nome, _idade) pq já pedimos estes dados nom método da Classe Pessoa
	
		
	
	 notaProvas = _notaProvas;
		
	}	

// Método para exibir dados classe Aluno
void Aluno::monstrarDados(){
	   
	    Pessoa::monstrarDados(); // Dizemos que na classe Pessoa já existe o método de exibir
		
		cout<<"Nota da Prova:  "<<notaProvas<<endl;
	
	
	}


// Construtor da Classe Profesosr que herda dados da Primeira pESSOA
Professor::Professor(string _nome, int _idade, string _materia) : Pessoa(_nome, _idade){ // colquei esta linha  : Pessoa(_nome, _idade) pq já pedimos estes dados nom método da Classe Pessoa
	
		
	
	 materia = _materia;
		
	}


// Método para exibir dados classe Professor
void Professor::monstrarDados(){
	   
	    Pessoa::monstrarDados(); // Dizemos que na classe Pessoa já existe o método de exibir
	    
		
		cout<<"Materia:  "<<materia<<endl;
	
	
	}



int main(){
	
	
	Pessoa *vet[2];
	
	vet[0] = new Aluno("Leo", 27, 19.9);
	vet[1] = new Aluno("Bruna", 27, 20.0);
	
	
	vet[0]->monstrarDados();
	cout<<endl;
	vet[1]->monstrarDados();
	
	
	return 0;
}
