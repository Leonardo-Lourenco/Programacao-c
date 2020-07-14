#include <iostream>  
#include <string.h>
#include <stdlib.h> // Responsavel pelo new e pelo delete

// Alocação dinâmica de  /  Vetor Dinâmicos

// new / delete

using namespace std; 

void pedirValores();

// Variável tipo global
int tamanhoVetor, *localMemoria;



int main(){
	
	
	pedirValores();
	
	 return 0;
	
}

void pedirValores(){
	
	cout<<"Informe o tamanho do Vetor:  "<<endl;
	cin>> tamanhoVetor;
	
	localMemoria = new int[tamanhoVetor];
	
	for(int i = 0; i < tamanhoVetor; i++){
          
          cout<<"Informe os valores:  ";
          cin>>localMemoria[i];
		
		
		}
	
	
	
	
	
	}
