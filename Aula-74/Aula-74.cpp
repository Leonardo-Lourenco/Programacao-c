#include <iostream>  
#include <string.h>
#include <stdlib.h>

// Método Construtores e Modificadores (Getters e Setters) 


using namespace std;

class Numero{
	
	//Atributos
	private:
		int num1, num2;
		
	//Metodo
	public:
		Numero();
		
		void setNumero(int, int); // set  = estabele valares
		
		
		int getNumeroN1(); // Get
		int getNumeroN2(); // Get
	
	
	};

Numero::Numero(){
	
	// Metodo construtor
	
	}

void Numero::setNumero(int _num1, int _num2){
	
	 num1 = _num1;
	 num2 = _num2;
	
	
	}

int Numero::getNumeroN1(){
	 
	 return num1;
	
	}
	
int Numero::getNumeroN2(){
		 
		 return num2;
	
	}




int main(){
	
	Numero numero1;
	
	numero1.setNumero(15,10);
	
	cout<< numero1.getNumeroN1()<<endl;
	cout<<numero1.getNumeroN2();
	
	
	return 0;
}
