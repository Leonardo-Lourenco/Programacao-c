#include<iostream>  
#include<string.h>

// Passagem de parâmetros por referência

using namespace std;

void novoValor(int&, int& ); 

int main(){
	
	
	int num1, num2;
	
	cout<<"Informe um valor:  ", cin>>num1;
	cout<<"Informe um segundo valor:  ",cin>>num2;
	
 
	novoValor(num1,num2);
	
	cout<<"Novo valor do primeiro número: "<<num1<<endl;
	cout<<"Novo valor do segundo número: "<<num2<<endl;
	
		
	return 0;
	
}


void novoValor(int& numX, int& numY){
	
	cout<<"Valor do primeiro número: "<<numX<<endl;
	cout<<"Valor do segundo número: "<<numY<<endl;
	
	numX = 32;
	numY = 25;
	
	
}
