
#include <iostream>  
#include <string.h>
#include <stdlib.h>
#include <fstream>

//Editar arquivo de texto

using namespace std; 

void adicionar();

int main(){
	
	
	adicionar();
	
	
	
	return 0;
	
}

void adicionar(){
	
	 ofstream arquivo;
	 string texto;
	 
	 arquivo.open("teste.txt", ios::app); // Abre o arquivo em modo de edição
	 
	 
	 if(arquivo.fail()){  // em caso de erro
		 
		     cout<<"Erro ao abrir o arquivo";
		     exit(1);
		 
		 
		 }
		 
		 cout<<"Informe o texto que você quer adicionar:   "<<endl;
		 getline(cin, texto );
		 
		 arquivo<<texto<<endl;
		 
		 //arquivo<<"HAHAHAAHHHHHHHA aula Coffee Tag";
		 //arquivo.close();
	 	
	
	}
