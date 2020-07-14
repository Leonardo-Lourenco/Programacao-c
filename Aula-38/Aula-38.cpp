#include <iostream>  
#include <string.h>


using namespace std; 

int main(){
	
	int num;
	int *direcao_memoria;
	
	num =  50;
	
	direcao_memoria = &num;
	
	cout<<"Valor:  "<<*direcao_memoria<<endl;
	
	cout<<"Direção da memória:  "<<direcao_memoria<<endl;
	
	
	return 0;
	
}
