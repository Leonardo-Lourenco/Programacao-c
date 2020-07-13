#include<iostream>  
#include<string.h>

// Passagem de parâmetro do tipo Matriz
using namespace std;

 
  // Programa elevar todos valor do Matriz ao Quadrado 
  
void exibirValores( int matriz[][3], int , int);
void calcularValores( int matriz[][3], int , int);
void exibirValoresQuadrado( int matriz[][3], int , int);  
 
  
  

int main(){
	
	const int  numeroLinhas = 2;
	const int numeroColunas = 3;
	
	int matriz[numeroLinhas][numeroColunas] = {{1,2,3},{4,5,6}};
	
	
	exibirValores(matriz, numeroLinhas, numeroColunas);
	calcularValores(matriz, numeroLinhas, numeroColunas);
	exibirValoresQuadrado(matriz, numeroLinhas, numeroColunas);
	
	
	
	
	
		
    return 0;
	
}

// Função para exibir valores
void exibirValores(int matriz[][3], int numeroLinhas, int numeroColunas){
	
	  cout<<"Exibindo Matriz: "<<endl;
	  
	  for(int i =0; i<numeroLinhas;i++){
		  
		    for(int j =0; j< numeroColunas; j++){
				
				  cout<<matriz[i][j]<<"    ";
				
				
				}
				
				cout<<endl;
		  
		  }

	}
	
	
//Função para elevar os valores ao guadrado
void calcularValores(int matriz[][3], int numeroLinhas, int numeroColunas){
	   cout<<endl;
	   cout<<"Operação elevar valores ao guadrado da  Matriz: "<<endl;
	  
	  for(int i =0; i<numeroLinhas;i++){
		  
		    for(int j =0; j< numeroColunas; j++){
				
				 matriz[i][j] = matriz[i][j] * matriz[i][j];
				 // OU matriz[i][j]*= matriz[i][j];
				
				
				}
				
				cout<<endl;
		  
		  }
	
	}	
	
// Exibindos os dados elevados ao quadrado
void exibirValoresQuadrado(int matriz[][3], int numeroLinhas, int numeroColunas){
	 cout<<endl;
	  cout<<"Exibindo Matriz com VALORES ELEVADOS AO GUADRADO: "<<endl;
	  
	  for(int i =0; i<numeroLinhas;i++){
		  
		    for(int j =0; j< numeroColunas; j++){
				
				  cout<<matriz[i][j]<<"    ";
				
				
				}
				
				cout<<endl;
		  
		  }

	}






