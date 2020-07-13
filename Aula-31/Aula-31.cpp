#include<iostream>  
#include<string.h>

// Função devolvendo multiplos valores
//Calculadora utilizando FUNÇÕES soma, multiplicação,divisão,subtração

using namespace std;

void calculadora(int, int, int&, int&, int&, int&);


int main(){
	
	int num1 , num2, soma=0,mul = 0,div = 0,sub=0;
	
	cout<<"Informe um valor:  ", cin>>num1;
	cout<<"Informe um segundo valor:  ",cin>>num2;
	
	calculadora(num1, num2, soma, mul, div, sub);
	
	cout<<"A soma de:  "<<num1<<" + "<<num2<<" =  "<<soma<<endl; // 4
	cout<<"Subtração: "<<sub<<endl; //0
	cout<<"Multiplicação: "<< mul<<endl; // 4
	cout<<"Divisão:  "<<div<<endl; //1
	
	
	
		
	return 0;
	
}

void calculadora(int num1, int num2, int& soma, int& mul, int& div, int& sub){
	
	   soma = num1 + num2;
	   mul = num1 * num2;
	   div = num1 / num2;
	   sub = num1 - num2;
	
	}
