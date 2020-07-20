/*
 * 
 * Exercício treinar conteúdo -> Faça um programa com uma Classe Calculadora com os seguintes atributos: Valor A, Valor B com os 
 * seguinte Métodos soma(), multiplicacao(), divisão(), subtração().
 
 * */


#include <iostream>  
#include <string.h>
#include <stdlib.h>

using namespace std;

class Calculadora{
	
	private:
	   int num1, num2;
	
	public:
	   Calculadora(int, int);
	   void somar();
	   void mult();
	   void div();
	   void sub();
	
	};
	
Calculadora::Calculadora(int _num1, int _num2){
	
	  num1 = _num1;
	  num2 = _num2;
	
	}	
	

void Calculadora::somar(){
	int _somar;
	_somar = num1 + num2;
	cout<<"A soma é:  "<<_somar<<endl;
	
	}

void Calculadora::mult(){
	
	int _mult;
	_mult = num1 * num2;
	cout<<" A multiplicação é:  "<<_mult<<endl;
	
	
	
	}

void Calculadora::div(){
	
	int _div;
	_div = num1 / num2;
	cout<<"A divisão é :  "<<_div<<endl;
	
	}	
	
	
void Calculadora::sub(){
	
	int _sub;
	_sub = num1 - num2;
	cout<<"A subtração é : "<<_sub<<endl;
	
	
	
	}



int main(){
	
	
	int a, b;
	
	cout<<"Informe um valor:  ", cin>>a;
	cout<<"Informe outro valor:  ", cin>>b;
	
	
	Calculadora CalcularSoma = Calculadora(a,b);
	CalcularSoma.somar();
	
	CalcularSoma.div();
	
	CalcularSoma.sub();
	
	CalcularSoma.mult();
	
	
	
	
	return 0;
	
		
	}
