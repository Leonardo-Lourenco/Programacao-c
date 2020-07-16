#include <iostream>
#include <string.h>
#include <stdlib.h>

// Inserir valor fila


using namespace std;

struct Elementos{
	
	   int dados;
	   Elementos *seguinte;
	
	};
	
	
void inserirValor(Elementos *&, Elementos *&, int);	

bool fila_vazia(Elementos *);


int main(){

   Elementos *inicio = NULL;
   Elementos *fim = NULL;
   
   int valorInformado;
   
   cout<<"Informe um valor:  ";
   cin>>valorInformado;
   
   inserirValor(inicio, fim, valorInformado);
  
  cout<<"Informe mais um valor:  ";
  cin>>valorInformado;
   
   inserirValor(inicio, fim, valorInformado);
   
   cout<<"Outro valor por favor:  ";
   cin>>valorInformado;
   
   inserirValor(inicio, fim, valorInformado);


  return 0;
}


// FUNÇÃO PARA INSERIR VALOR NA FILA
void inserirValor(Elementos *&inicio, Elementos *&fim, int n){
	
	
	Elementos *novo_elemento = new Elementos(); // Reservou espaço na memoria
	
	novo_elemento -> dados = n; // 20 = n
	novo_elemento->seguinte = NULL;
	
	if(fila_vazia(inicio)){
		
		  inicio = novo_elemento;
		
		
		}else{
		
		
		   fim->seguinte = novo_elemento; 
		
		}
		
		fim = novo_elemento;
		
		cout<< "Valor " <<n <<" adicionado com sucesso"<<endl;
	
	
	
	
	}


// FUNÇÃO PARA VERIFICAR SE A FILA ESTÁ VAZIA
bool fila_vazia(Elementos *inicio){
	  
	  return (inicio == NULL)? true : false;
	  
	  /*
	  if(inicio == NULL){
		   
		   return true;
		  
		  
		  
		  }else{
		  
		     return false;
		  
		  
		  
		  }
	
	   */
	}




