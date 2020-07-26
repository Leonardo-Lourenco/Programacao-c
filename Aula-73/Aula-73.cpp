#include <iostream>  
#include <string.h>
#include <stdlib.h>


using namespace std;

// Destrututores de Objetos

class Dog{
	
	private:
	   
	   string nome, raca;
	   
	public:
	
	  Dog(string, string); 
	  ~Dog();	
	  void monstrarDados();
	  void play();   
	
	
	
	};
	
	
Dog::Dog(string _nome, string _raca){
	
	nome = _nome;
	raca = _raca;
	
	}	
	
// CRIANDO UM DESTRUTOR EM C ++
Dog::~Dog(){
	
	
	};


void Dog::monstrarDados(){
	
	cout<<"Nome do dog:  "<<nome<<"  Raça do Dog  "<<raca<<endl;
	
	}

void Dog::play(){
	
	cout<<" O dog  "<< nome<<" está comendo Ração"<<endl;
	
	
	}




int main(){
	
	Dog fazAlgo("Leo", "Pastor ALEMÃO");
	fazAlgo.monstrarDados();
	fazAlgo.play();
	
	
	fazAlgo.~Dog();
	
	
	cout<<endl;
	
	
	
	return 0;
}
