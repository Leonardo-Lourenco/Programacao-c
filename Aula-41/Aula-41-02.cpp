#include <iostream>  
#include <string.h>
#include <stdlib.h> // Responsavel pelo new e pelo delete 


using namespace std; 


int main(){

int ** ponteiroMatriz, numeroLinhas, numeroColunas; // ** Ponteito apontando para ponteiro

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
	
	
	cout<<"EXIBINDO DADOS DA MATRIZ"<<endl;
	 
	   for(int i =0; i<numeroLinhas; i++){
		   
		    for(int j =0; j<numeroColunas; j++){
				
				  cout<<*(*(ponteiroMatriz+i)+j);
				
				
				}
				
				cout<<endl;
		   
		   
		   }
	



	// Liberar
	
	for(int i =0; i< numeroLinhas; i++){
		  
		   delete[] ponteiroMatriz[i];
		
		}
	
	delete[] ponteiroMatriz;
	
	return 0;
		
}
