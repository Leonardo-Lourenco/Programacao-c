#include <iostream>  
#include <string.h>
#include <stdlib.h> // Responsavel pelo new e pelo delete 


// Ponteiros Matrizes dinâmicas
// Programa vamos ler uma Matriz e exibir seus valores


/*
 * 
 *  **ponteiroMatriz -> *ponteiroLinha -> [int][int][int]
 *                   -> *ponteiroLinha -> [int][int][int]
 *                   -> *ponteiroLinha -> [int][int][int]
 * 
 * 1 2 3    
 * 4 5 6      
 * 7 8 9     
 * 
 * 
 * */

void pedirDados();
void exibirMatriz(int **, int, int);

int ** ponteiroMatriz, numeroLinhas, numeroColunas; // ** Ponteito apontando para ponteiro

using namespace std; 


int main(){
	
	
	pedirDados();
	exibirMatriz( ponteiroMatriz, numeroLinhas,numeroColunas);
	
	
	// Liberar
	
	for(int i =0; i< numeroLinhas; i++){
		  
		   delete[] ponteiroMatriz[i];
		
		}
	
	delete[] ponteiroMatriz;
	
	return 0;
		
}


void pedirDados(){
	
	cout<<"Informe quantas linhas:  ";
	cin>>numeroLinhas;
	
	cout<<"Informe o numero de colunas: ";
	cin>>numeroColunas;
	
	// Reservar espaço na memoria de acordo com o que a pessoa informar
	ponteiroMatriz = new int*[numeroLinhas]; // reserva memoria para linhas
	
	for(int i = 0; i< numeroLinhas; i++){
		 
		  ponteiroMatriz[i] = new int[numeroColunas]; // reservando espaço para as colunas matriz[20][10];
		
		
		
		}
		
		cout<<"INFORMANDO OS VALORES ::"<<endl;
		
		for(int i =0; i<numeroLinhas; i++){
			
			for(int j =0; j < numeroColunas; j++){
				
				  cout<<"Informe os valores[  "<<i<<" ] [ "<<j<<" ] ";
				  cin>>*(*(ponteiroMatriz +i) +j); // ponteito = matriz[i][j]
				
				}
						
			}	
	
	}
	
	
void exibirMatriz(int ** ponteiroMatriz, int numeroLinhas, int numeroColunas){
	
	 cout<<"EXIBINDO DADOS DA MATRIZ"<<endl;
	 
	   for(int i =0; i<numeroLinhas; i++){
		   
		    for(int j =0; j<numeroColunas; j++){
				
				  cout<<*(*(ponteiroMatriz+i)+j);
				
				
				}
				
				cout<<endl;
		   
		   
		   }
	
	
	}	
	




