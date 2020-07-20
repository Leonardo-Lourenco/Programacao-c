#include <iostream>  
#include <string.h>
#include <stdlib.h>


using namespace std;

// Deletar valores 

struct Arvore{
	  
	  int valor;
	  Arvore *direita;
	  Arvore *esquerda;
	  
	  Arvore *pai; 
	
	};

void menu();	
Arvore *criarArvore(int, Arvore *); 
Arvore *arvore = NULL; 


void inserirValorArvore(Arvore *&, int, Arvore *);  
void mostrarArvore(Arvore *, int);

bool buscarValorArvore(Arvore *, int);

void preOrdem(Arvore *);
void emOrdem(Arvore *);
void posOrdem(Arvore *);


void deletando(Arvore *, int);  // Função procurar o valor para deletar


// Função para achar menor valor a Esquerda
Arvore *minimo (Arvore *);

void deletarValorArvore(Arvore *); // Função de eliminar

void substituirValor(Arvore *, Arvore *);  // Função para deletar quanto um valor só tem um filho


void deletarValorUmFilho(Arvore *); // Função para deletar valor quando se tem um filho só ou seja um VALOR



int main(){
	
	menu(); 
		
	}



	
// Menu
void menu(){
	
	int opcao, valorInformado, contador = 0 ;
 	
	do{
		cout<<"Menu -  Selecione a opção desejada abaixo:  "<<endl;
		cout<<"1. Inserir um valor na Árvore Binária: "<<endl;
		cout<<"2. Mostrar valores na Árvore Binária: "<<endl;
		cout<<"3. Buscar um valor na Árvore Binária: "<<endl;
		cout<<"4. Percorrer em Pré-Ordem  "<<endl;
		cout<<"5. Percorrer em In-Ordem  "<<endl;
		cout<<"6. Percorrer em IPós-Ordem  "<<endl;
		cout<<"7. Deletar valor Árvore Binária:  "<<endl;
		cout<<"8. Sair: "<<endl;
		
		cout<<"Informe a opção desejada:  ";
		cin>>opcao;
		
		switch(opcao){
			
			case 1: 
			     cout<<endl;
			     cout<< "Informe um valor:  ";
			     cin>> valorInformado;
			     
			     inserirValorArvore(arvore , valorInformado, NULL);  // ACRESCENTAR CÓDIGO
			     
			     cout<<endl;
			    						      				
				break;
				
			case 2: 
			     cout<<endl;
			     cout<< "Exibindo Árvore Binária:  ";
			     
			     
			     mostrarArvore(arvore , contador);
			     
			     cout<<endl;
			    						      				
				break;	
				
				
			case 3: 
			     cout<<endl;
			     cout<< "Informe o valor que deseja encontrar:  ";
			     cin>>valorInformado;
			     
			     
			     if(buscarValorArvore(arvore, valorInformado) == true){ 
					 
					 cout<< "Valor:  "<<valorInformado<<"   encontrado com sucesso"<<endl;
					 
					 
					 }else{
					 
					    cout<< "Valor:  "<<valorInformado<<"   não encontrado"<<endl;
					 
					 }
			     
			     cout<<endl;
			    						      				
				break;
				
					
			case 4:   cout<<endl;
			          cout<<"Percorendo arvore em Pré Ordem:   ";
			          preOrdem(arvore);
			          cout<<endl<<endl;
			          
			          
			          break;
			          
			case 5:   cout<<endl;
			          cout<<"Percorendo arvore em In Ordem:   ";
			          emOrdem(arvore);
			          cout<<endl<<endl; 
			          
			          break;
			          
			
			case 6:   cout<<endl;
			          cout<<"Percorendo arvore em Pós Ordem:   ";
			          posOrdem(arvore);
			          cout<<endl<<endl; 
			          
			          break; 
			          
			          
			          
			case 7:  cout<<endl; 
			         cout<<"Informe o valor que você deseja deletar?   ";
			         cin>>valorInformado;
			         
			         deletando(arvore, valorInformado);
			         
			         cout<<endl;
			          
			         break;                    
			          
			                   
										
			}
			
	
			
		}while(opcao != 8);
	
	
	
	
	}	
	





// Função criar arvore Binária
Arvore *criarArvore(int n, Arvore *pai){ 
	
	 Arvore *nova_arvore = new Arvore(); // reservar espaço na memória
	 
	 
	nova_arvore -> valor = n;
	nova_arvore->direita = NULL;
	nova_arvore->esquerda = NULL;
	
	
	nova_arvore->pai = pai;  
	 
	 
	 return nova_arvore;
	 	
	}




// Inserir valor na arvore binária	
void inserirValorArvore(Arvore *&arvore, int n, Arvore *pai){ 
	
	  if(arvore == NULL){ // arvore vazia - vamos armazenar o valor na Raiz da arvore
		  
		     Arvore *nova_arvore = criarArvore(n, pai); 
		     arvore = nova_arvore;
		     cout<<endl;
		     cout<< " Valor adcionado na Raiz  "<<endl;
		  
		  }else {  // Caso a arvore tenha 1 ou mais valores 
			  
			  // Vamos primero verificar se o valor é maior ou menor que o valor da raiz para podemos inserir a esquerda ou a direita
			  int valorInicialArvore = arvore -> valor;
			  
			  
			  if(n < valorInicialArvore){ // se o valor informado é menor que o valor raiz // inserri a esquerda
				    
				    cout<<endl; 
				    inserirValorArvore(arvore->esquerda, n, arvore); 
				    
				    cout<< "Valor " <<  n <<"   Adicionado a com sucesso  "<<endl;
				     
				  } else{
					     
					    cout<<endl; 
					     
					    inserirValorArvore(arvore->direita, n, arvore); 
					    
					    cout<< "Valor " <<  n <<" Adicionado a com sucesso  "<<endl;
					  
					  }
			  		  
			  }	
	
	}
	
	
	
	
	
	
// Função Exibir Árvore Binaria
void mostrarArvore(Arvore *arvore, int contador){
	
	  if(arvore == NULL){
		  
		  return;
		  
		  
		  
		  } else{
		    cout<<endl;
		    // Mostrando pela Direita
		    mostrarArvore(arvore->direita, contador +1);
		    for(int i =0; i< contador; i++){
				
				  cout<< "    ";
				
				}
		    
		    cout<<arvore->valor<<endl;
		    mostrarArvore(arvore->esquerda, contador +1);
		  
		  }
	 
	
	}	
	
	
// Buscar valor na Árvore Binária
bool buscarValorArvore(Arvore *arvore, int n){
	
	  if(arvore == NULL ){
	  
	      return false;
	  
	  }else if(arvore->valor == n){
	  
	     return true;
	  
	  }else if(n < arvore->valor){
	  
	      return buscarValorArvore(arvore->esquerda, n);
	   
	  
	  }else{
		  
		   
		   return buscarValorArvore(arvore->direita, n);
		  
		  
		  }
	   
	
	
	
	}


// Percorrer em pré ordem
void preOrdem(Arvore *arvore){
	
	  if(arvore == NULL){
		    
		    return;
		  
		  
		  
		  }else{
			  
			  cout<<arvore->valor<< " -> ";  // Imprimir primeiro valor Nó raiz
			  preOrdem(arvore->esquerda);
			  preOrdem(arvore->direita);
			 			  
			  
			  }
	
	}


// Percorrer In Ordem
void emOrdem(Arvore *arvore){
	
	if(arvore == NULL){
		    
		    return;
		  
		  
		  
		  }else{
			  
			  
			  emOrdem(arvore->esquerda);
			  cout<<arvore->valor<< " -> ";  // Imprimir primeiro valor Nó raiz
			  emOrdem(arvore->direita);
			 			  
			  
			  }
	
	
	}


// Percorrer em Pos Ordem
void posOrdem(Arvore *arvore){
	
	if(arvore == NULL){
		    
		    return;
		  
		  
		  
		  }else{
			  
			  
			  posOrdem(arvore->esquerda);
			  posOrdem(arvore->direita);
			  cout<<arvore->valor<< " -> ";  
			  
			 			  
			  
			  }
	
	
	}











// Função eliminar valor na Árvore
void deletando(Arvore *arvore, int n){
	
	
	   if(arvore == NULL){
		    
		    return;
		  
		  
		  
		  }else if(n < arvore->valor){ // sabemos que este valor vai estar a ESQUERDA da árvore - primeiro a busca será pela esquerda 
			  
			   deletando(arvore->esquerda, n);
			 						 					  
			  } else if(n > arvore->valor){
				  
				   deletando(arvore->direita, n); // sabemos que este valor vai estar a DIREITA da árvore - primeiro a busca será pela edireita
				  
				  
				  } else { // Agora que emcontrou o valor
					  
					     deletarValorArvore(arvore);
					      
					  
					  
					  }
			 
	
	
	}



// Função para verificar menor valor a esquerda possível
Arvore *minimo (Arvore *arvore){
	
	if(arvore == NULL){
		  
		  return NULL;
		
		}
		
	if(arvore->esquerda){
		
		return minimo(arvore->esquerda);
		
		}	else{
			
			return arvore;
			
			}
	
	
	
	
	}
	
	
// função para substitir valor
void substituirValor(Arvore *arvore, Arvore *novoValor){
	  
	   // valor tem pai , vamos pegar o próximo valor e colocar como filho
	   if(arvore->pai){
		   
		   
		   // se tem dois valores iguais ou seja pai 5 filho 5 pegamos o próximo valor o mais a esquerda possível para substituir
		   if(arvore->valor == arvore->pai->esquerda->valor){
			   
			    arvore->pai->esquerda = novoValor;
			   
			   
			   
			   }
			   
			   else if(arvore->valor == arvore->pai->direita->valor){
				   
				    arvore->pai->direita = novoValor;
				   
				   
				   }
		   
		   
		   }
		   
		   if(novoValor){
			   
			     // Procedimento para pai apontar apra o filho
			     novoValor->pai = arvore->pai;
			   
			   }
	
	
	}
	
// Função para deletar valor quando só tm um Filho
void deletarValorUmFilho(Arvore *arvore){
	
	
	  arvore->esquerda = NULL;
	  arvore->direita = NULL;
	  
	  delete arvore;
	
	
	
	}	
	

// Função para deletar em caso de uma valor ter dois filhos
void  deletarValorArvore(Arvore *valorDeletar){
	
	// Valor que vamos eliminar tem valor a esquerda e a sua Direita
	if(valorDeletar->esquerda && valorDeletar->direita){
		
		  Arvore *menor = minimo(valorDeletar->direita);
		  valorDeletar->valor = menor->valor;
		  deletarValorArvore(menor);
		
		}
		
		
		
		// Condição para deletar quando um valor só tem um filho a esquerda 
		else if(valorDeletar->esquerda){
			
			substituirValor(valorDeletar, valorDeletar->esquerda);  
			
			
			deletarValorUmFilho(valorDeletar);
			
			} 
			
			
			// Condição para deletar quando um valor só tem um filho a direita
			else if(valorDeletar->direita){
			
			substituirValor(valorDeletar, valorDeletar->direita);  
			deletarValorUmFilho(valorDeletar);
			
			}
	        
	       
	        //para deletar um valor sem filho
	        else {
				
				 substituirValor(valorDeletar, NULL);
				 deletarValorUmFilho(valorDeletar);
				
				}	     	        
	        
	}












