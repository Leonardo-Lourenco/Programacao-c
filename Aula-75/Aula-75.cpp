#include <iostream>  
#include <string.h>
#include <stdlib.h>

// POO Herança

using namespace std;

class Pessoa{  // Classe Pai
	
	//Atributos
	private:
		string nome;
		int idade;
		
		
	// Métodos 
	public:
		Pessoa(string, int); // Construtor da Classe Pessoa
		void monstrarDados();
	
	
	
	};


//Classe filho Herda os dados da classe Pesso
class Aluno : public Pessoa{
	
	private: // Atributos
		string codMatricula;
		float notaProvas;
		
	public: // Métodos
		Aluno(string, int, string, float); // Construtor da classe aluno
		void exibirAluno();
		
			
	};



// Construtor da classe Pessoa
Pessoa::Pessoa(string _nome, int _idade){
		nome = _nome;
		idade = _idade;
		
	}
	
	
// Contrutor da Classe Aluno
Aluno::Aluno(string _nome, int _idade, string _codMatricula, float _notaProvas)	: Pessoa(_nome, _idade){
	
	codMatricula = _codMatricula;
	notaProvas = _notaProvas;
	
	
	}
	
	

// Método para exibir Classe Pessoa
void Pessoa::monstrarDados(){
	
	cout<<"Nome:  "<<nome<<endl;
	cout<<"Idade:  "<<idade<<endl;
	
	
	}


// Método para exibir dados  classe Aluno
void Aluno::exibirAluno(){
	
	monstrarDados();
	cout<<"Código da Matricula:  "<< codMatricula<<endl;
	cout<<"Nota da Prova:  "<< notaProvas<<endl;
	
	
	
	
	}






int main(){
	
	Aluno aluno1("Leo", 27, "123", 19.9);
	aluno1.exibirAluno();
	
	
	
	
	return 0;
}
