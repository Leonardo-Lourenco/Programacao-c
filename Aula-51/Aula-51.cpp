#include <iostream>  
#include <string.h>
#include <stdlib.h>

// Inserindo valores da lista 


struct Elementos{
	 
	  int dado;
	  Elementos *seguinte;
	
	};
	
	

Elementos *lista = NULL;


using namespace std;

void menu();
void inserirValorLista(Elementos *&, int);



int main(){
	
	menu();
	 
	return 0;
		
	}


void menu(){
	
	
	  int opcao, num;
	  
	  do{
		  
		  cout<<"Menu - Selecione a opção desejada abaixo:  "<<endl;
		  cout<<"1. Inserir valor: "<<endl;
		  cout<<"2. Exibir Valores: "<<endl;
		  cout<<"3. Buscar valor: "<<endl;
		  cout<<"4. Deletar um valor: "<<endl;
		  cout<<"5. Deletar toda a lista: "<<endl;
		  cout<<"6. Sair"<<endl;
		  
		  cout<<"Informe a opção desejada:  ";
		  cin>>opcao;
		  
		  switch(opcao){
			  
			  case 1:
			        cout<<endl;
					cout<<"Informe um valor:  ";
					cin>>num;
					
					inserirValorLista(lista, num);
					
					cout<<endl;
					system("pause");
			  
			  
			  break;
			  
			  case 2:
			  
			  
			  break;
			  
			  }
			  
			  system("cls");
		  	  
		  }while(opcao !=6 );
	
	
	}
	
	
// Inserir valor na lista
void inserirValorLista(Elementos *&lista, int n){
	
	  Elementos *novo_elemento = new Elementos();
	  
	  novo_elemento -> dado = n;
	  
	  Elementos *aux1 = lista;
	  Elementos *aux2; 
	  
	  while((aux1 != NULL) && (aux1-> dado < n)){
		  
		    aux2 = aux1;
		    aux1 = aux1->seguinte; 
		   		  	  
		  }
	    
	    // inserir no inicio da lista
	    if(lista == aux1){ 
			
			  lista = novo_elemento;
			
			}else{
				// valor uqe a gente for inserir for maios que o proximo valor
				aux2->seguinte = novo_elemento;
				
				
				}
				
			novo_elemento->seguinte = aux1;
			cout<<endl;
			cout<<" valor : " << n << "  adiciconado com secesso"<<endl;	
	
	
	}

