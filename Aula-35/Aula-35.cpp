#include<iostream>  
#include<string.h>
#include <stdlib.h>
#include <fstream>

// Manipulado arquivos de textos, criando um arquivo de texto

using namespace std; 

void escrever();

int main(){
	
	escrever();
	
	
		
	return 0;
	
}

void escrever(){
	
	 ofstream arquivo;
	 string nomeArquivo, frase;
	 
	 cout<<"Informe o nome do arquivo:  ";
	 getline(cin, nomeArquivo);
	 
	 //arquivo.open("MeuArquivo.txt",ios::out);
	 arquivo.open(nomeArquivo.c_str(), ios::out);
	 
	 if(arquivo.fail()){
		 
		  cout<<"Error ao abrir o arquivo";
		  exit(1);
		 
				 
		 }
		 
		 //arquivo<<"Tutorial Coffee Tag";
		 //arquivo.close();
		 cout<<"Informe o texto que você quer no seu arquivo:   ";
		 getline(cin,frase);
		 
		 arquivo<<frase;
		 arquivo.close();
	
	
	}
