#include <iostream>  
#include <string.h>
#include <stdlib.h>


// Percorrer em in-ordem - ABB

/*
 * 
1 - Percorrer a sua subárvore esquerda em in-ordem.
2 - Vistar a raiz.
3 - Percorrer a sua subárvore direita em in-ordem.
 * 
 * 
 * 
 * 
 * 
 * */
 
 

using namespace std;



struct Arvore{
	  
	  int valor;
	  Arvore *direita;
	  Arvore *esquerda;
	
	};


void menu();
Arvore *criarArvore(int);


void inserirValorArvore(Arvore *&, int);
void mostrarArvore(Arvore *, int);

bool buscarValorArvore(Arvore *, int);

void preOrdem(Arvore *);
void emOrdem(Arvore *);

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
		cout<<"4. Percorrer em Pré Ordem"<<endl;
		cout<<"5. Percorrer em In Ordem"<<endl;
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
			     cout<<"EXIBINDO VALORES DA ÁRVORE BINÁRIA:  ";
			     
			     mostrarArvore(arvore, contador);
			     
			     cout<<endl;
			     
			     
			 case 3: 
			      cout<<endl;
			      cout<<"Informe o  valor que deseja encontar:  ";
			      cin>>valorInformado;
			      
			      if(buscarValorArvore(arvore, valorInformado) == true){
					  
					    cout<<"Valor:  "<<valorInformado <<"  encontrado com sucesso"<<endl;
					  
					  }else{
						  
						    
						cout<<"Valor:  "<<valorInformado <<"  não foi encontrado"<<endl;
						  
						  
						  
						  }
			          cout<<endl;
			          break;
			          
			 case 4:
			       
			       cout<<"Exibindo valores em Pré Ordem";
			       preOrdem(arvore);
			       
			       cout<<endl<<endl;
			       
			       
			       break;
			       
			 
			  case 5: 
			  
			       cout<<"Exibindo valores em In Ordem";
			       emOrdem(arvore);
			       
			       cout<<endl<<endl;
			       
			       break;               
			
			
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
	

// Buscar valor na Árvore Binária
bool buscarValorArvore(Arvore *arvore, int n){
	
	   if(arvore == NULL){
		   
		   return false;
		   
		   
		   }else if(arvore->valor == n){
			   
			    return true;
			   
			   }else if(n < arvore->valor){
				   
				     return buscarValorArvore(arvore->esquerda, n);
				   
				   }else{
					   
					     return buscarValorArvore(arvore->direita, n);
					   
					   
					   }
	
	}


// Percorrendo a Árvore Binária em Pré Ordem
void preOrdem(Arvore *arvore){
	 
	 if(arvore == NULL){
		 
		  return;
		 	 
		 
		 }else{
		    
		    cout<<arvore->valor<< "  ->   "; // primeiro imprimimos a Raiz da Árvore
		    preOrdem(arvore->esquerda);
		    preOrdem(arvore->direita);
		 
		 }
	 
	 
	
}


//Percorrer In Ordem
void emOrdem(Arvore *arvore){
	  
	  if(arvore == NULL){
		  
		   return;
		  
		  }else{
		  
		  
		    emOrdem(arvore->esquerda);
		    cout<<arvore->valor<< "  -   ";
		    emOrdem(arvore->direita);
		  
		  
		  }
	  
	  
	
	}







