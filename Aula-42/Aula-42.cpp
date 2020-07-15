#include <iostream>  
#include <string.h>
#include <stdlib.h> 

// Ponteiros com Estrutura Struct

using namespace std; 

struct Pessoa{
	
	  char nome[30];
	  int idade;
	
	} pessoa, * ponteiroPessoa = &pessoa;


void pedirDados();
void exibirDados(Pessoa *);


int main(){
	
	pedirDados();
	exibirDados(ponteiroPessoa);



    return 0;
		
	}	
	
	
void pedirDados(){
	  
	   cout<<"Informe o seu nome: ";
	   cin.getline(ponteiroPessoa->nome, 30);
	   
	   cout<<"Informe a sua idade: ";
	   cin>>ponteiroPessoa->idade;
	
	
	}	
	
	
void exibirDados(Pessoa *ponteiroPessoa){
	   
	   cout<<"Seu nome é:  "<<ponteiroPessoa->nome<<endl;
	   
	   cout<<"Sua idade é:  "<<ponteiroPessoa->idade<<endl;
	  
	}	
	
