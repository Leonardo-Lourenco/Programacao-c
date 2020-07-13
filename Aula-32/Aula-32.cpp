#include<iostream>  
#include<string.h>

// Passagem de parâmetro do tipo vetor

using namespace std;

/*
  parametros da função:
  * void nomeFuncao(tipo nomeVetor[], int tamanhoVetro)
  * 
   chamada da função
   * nome Função(nomeVetro, tamanhoVetor)
   * 
   * Guardamos os elementos de um vetor
  *     
 * */
 
 
 // ELevando todos os valores ao quadrado
 
 // Função para elevar todos os valores ao quadrado
 void calculoQuadrado(int vet[], int);
 void exibirDados(int vet[], int);
 
int main(){
	
	const int tamanho = 5;
	int vet[tamanho] = {1,2,3,4,5};
	
	calculoQuadrado(vet, tamanho);
	exibirDados(vet, tamanho);
	
	
			
	return 0;
	
}

// FUNÇÃO PARA ELEVAR OS VALORES QO GUADRADO
void calculoQuadrado(int vet[], int tam){
	
	   for(int i =0; i<tam;i++){
		   
		     vet[i] = vet[i] * vet[i];
		      //OU vet[i] *= vet[i];
		   
		   
		   }
	
	}

// EXIBIR DADOS	
void exibirDados(int vet[], int tam){
	  
	  for(int i =0; i < tam; i++){
		  
		  cout<<vet[i]<<endl;
		  
	  }
	   
	
	}	
	




