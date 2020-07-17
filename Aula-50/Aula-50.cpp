#include <iostream>  
#include <string.h>
#include <stdlib.h>


using namespace std;

void menu();



int main(){
	
	menu();
	 
	return 0;
		
	}


void menu(){
	
	
	  int opcao;
	  
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
			  
			  
			  break;
			  
			  case 2:
			  
			  
			  break;
			  
			  }
			  
			  system("cls");
		  	  
		  }while(opcao !=6 );
	
	
	}
