#include <iostream>  
#include <string.h>
#include <stdlib.h> 

using namespace std;

// Inserir dados

struct Elementos{
	  
	  int dados;
	  Elementos *seguinte;
	
	};

void inserirPilha(Elementos *&, int);

void deletarPilha(Elementos *&, int);


int main(){
	
	Elementos *pilha = NULL; // está vazio
	
	int dados;
	
	cout<<"Informe um valor: ";
	cin>>dados;
	
	inserirPilha(pilha, dados);
	
	cout<<"Informe mais um valor:  ";
	cin>>dados;
	
	inserirPilha(pilha, dados);
	
	cout<<endl;
	
	cout<<" VALOR DELETADO: "<<endl;
	
	while(pilha != NULL){
		  
		   deletarPilha(pilha, dados);
		   
		   if(pilha != NULL){
			   
			     cout<<dados<<"  -  ";
			   
			   }else{
				     
				     cout<<" . ";
				   
				   
				   }
		
		}
	
	return 0;
		
	}
	

void inserirPilha(Elementos *&pilha, int n){
	  
	  Elementos *novo_elemento  = new Elementos(); // reservou espaço na memória
	  
	  novo_elemento->dados = n ;
	  novo_elemento->seguinte = pilha;
	  pilha = novo_elemento;
	  
	  cout<< "Valor:  "<< n <<"  adcionado com sucesso"<<endl;
	  
	
	}	
	
	
// DELETAR VALOR DA PILHA
void deletarPilha(Elementos *&pilha, int n){
	
	  Elementos *aux = pilha;
	  n  = aux->dados;
	  pilha = aux ->seguinte;
	  delete aux;
	
	}
	


	
