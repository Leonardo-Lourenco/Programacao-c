#include <iostream>  
#include <string.h>
#include <stdlib.h>
#include <fstream>


// Manipulado arquivos de textos , copiar arquivos de trextos

void escrever();


using namespace std; 


int main(){
	
	
	escrever();
	
	return 0;
	
}

void escrever(){
	   
	 ifstream arquivo;
	 string texto;
	 
	 arquivo.open("teste.txt",ios::in);
	 
	 if(arquivo.fail()){
		 
		   cout<<"Erro ao abrir o arquivo";
		   exit(1);
		 
		 
		 
		 }
		 
		 while(!arquivo.eof()){
			 
			  getline(arquivo,texto);
			  cout<<texto<<endl;
			 
			 
			 }
			 
			 arquivo.close();
	 
	 
	
	}
