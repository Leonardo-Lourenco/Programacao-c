#include <iostream>  
#include <string.h>
#include <stdlib.h> 


// Deletar dados na Pilha
// Elementos // quantos elementos na pilha

using namespace std;

struct Elementos{
	  
	  int dados;
	  Elementos *seguinte;
	
	};

void inserirPilha(Elementos *&,int);

void deletarPilha(Elementos *&,int);

int main(){
	
	
	Elementos *pilha = NULL; // está vazio
	
	int dados;
	
	 cout<<"Informe um valor: ";
	 cin>> dados;
	 
	 inserirPilha(pilha, dados);
	 
     cout<<"Informe outro valor: ";
	 cin>> dados;
     
     inserirPilha(pilha, dados);
     
     cout<<endl;
     
     cout<<"VALOR DELETADO: "<<endl;
     
     while(pilha != NULL){
		 
		 deletarPilha(pilha, dados);
		 
		 if(pilha != NULL){
			 
			   cout<<dados<<" - ";
			 
			 } else{
				 
				   
				  cout<<" . ";
				 
				 }
		 
		 }
     

    return 0;
		
	}


void inserirPilha(Elementos *&pilha, int n){
	
	  Elementos *novo_elemento = new Elementos();  // Reservar memória
	  novo_elemento -> dados = n; // Pegar o dados que a pessoa informar e = dados da pilha
	  novo_elemento-> seguinte = pilha; //	pegar ponteiro e = a pilha  
	  pilha = novo_elemento; // = pilha ao novo_elemento
	  
	  cout<<" Valor:  "<<n <<"  adicionado com sucesso"<<endl;
	
	}

void deletarPilha(Elementos *&pilha, int n){
      
       Elementos *aux = pilha;
       n = aux->dados;
       pilha = aux -> seguinte;
       delete aux;
       		
	}
