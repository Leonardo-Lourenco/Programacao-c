#include <iostream>  
#include <string.h>
#include <stdlib.h>


using namespace std;

//Exibir dados Aŕvore Binária de Busca - ABB

struct Arvore{
	  
	  int valor;
	  Arvore *direita;
	  Arvore *esquerda;
	
	};


void menu();
Arvore *criarArvore(int);


void inserirValorArvore(Arvore *&, int);
void mostrarArvore(Arvore *, int);


Arvore *arvore = NULL; // Inicializando está árvore vazia

int main(){
	
	menu();
	 
	return 0;
		
	}


// Criando Menu
void menu(){
	
	
	 int opcao, valorInformado, contador = 0;
	
	do{
		
		cout<<"   MENU - Selecione a opção desejada abaixo: "<<endl;
		cout<<endl;
		cout<<"1. Inserir um valor na Árvore Binária:  "<<endl;
		cout<<"2. Mostrar valores da Árvore Binária: "<<endl;
		cout<<"3. Buscar um valor na Árvore Binária"<<endl;
		cout<<"4. ......"<<endl;
		cout<<"5. ......"<<endl;
		cout<<"6. Sair"<<endl;
		cout<<endl;
		cout<<"Informe a opçao desejado:  ";
		cin>>opcao;
		
		switch(opcao){
			
			case 1: 
			
			     cout<< "Informr um valor:   ";
			     cin>> valorInformado;
			     
			     inserirValorArvore(arvore, valorInformado);
			     
			     cout<<endl;
			
			
			break;
			
			case 2:
			     
			     cout<<endl;
			     cout<<"EXIBINDO VALORES DA ÁRVORE BINÁRIA";
			     
			     mostrarArvore(arvore, contador);
			     
			     cout<<endl;
			
			
			system("cls");
			}
		
		
		
		
		
		}while(opcao != 6);
	
	
	
	}

// Função criar nossa árvore binária
Arvore *criarArvore(int n){
	
	  Arvore *nova_arvore = new Arvore(); // Reservar espaços na memória
	  
	  nova_arvore->valor = n;
	  nova_arvore->direita = NULL;
	  nova_arvore->esquerda = NULL;
	  
	  return nova_arvore;
	  
	  	  
	
	}



// Função é para INSERIR VALOR NA ÁRVORE BINÁRIA
void inserirValorArvore(Arvore *&arvore, int n){
	
	  if(arvore == NULL){ // Arvore vazia / vamos inserir o valor na RAIZ DA ÁRVORE
		  
		  
		  Arvore *nova_arvore  = criarArvore(n);
		  arvore = nova_arvore;
		  cout<<endl;
		  cout<<" Valor adicionado na Raiz da Árvore"<<endl;
		  
		  
		  } else { // caso tenha 1 ou mais valore na nossa arvore
			  
			  int valorInicialArvore = arvore -> valor;
			  
			  if(n < valorInicialArvore){
				  
				  cout<<endl;
				  inserirValorArvore(arvore->esquerda, n);
				  
				  cout<<"Valor  "<< n << "  Adiconado com sucesso a ESQUERDA"<<endl;
				  
				  
				  
				  }else{
				  
				     cout<<endl;
				     
				     inserirValorArvore(arvore->direita, n);
				     
				     cout<<"Valor  "<< n << "  Adicionado com sucesso a DIREITA"<<endl;
				  
				  }
			  
			    
			  
			  
			  
			  }
	
	
	}
	
	
	
// Exibir valores da Árvore Binária
void mostrarArvore(Arvore *arvore, int contador){
	
	if(arvore == NULL){
		
		 return;
		
		}else{
			
			cout<<endl;
			
			// Monstrando valores da direita
			mostrarArvore(arvore->direita, contador +1);
			for(int i =0; i < contador; i++){
				  
				  cout<< "    ";
				
				}
				
				cout<<arvore->valor<<endl;
				mostrarArvore(arvore->esquerda, contador +1);
			
			}
	
	
	}
	

