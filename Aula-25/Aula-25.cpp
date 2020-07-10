#include<iostream>
#include<string.h>


using namespace std;

struct Locadora{
	
	char titulo[30];
	int anoLancamento;
	
	}
	
	alugar1 = {"Velozes e Furiosos", 2020},
	alugar2 = {"Senhos dos Aneis", 2018};


int main(){
	
	cout<<"DADOS DA ESTRUTURA ALUGAR 1"<<endl;
	cout<<"O primeiro filme se chama:  "<<alugar1.titulo<<"\n";
	cout<<"O ano do filme é:  "<< alugar1.anoLancamento<<"\n";
	
	cout<<"DADOS DA ESTRUTURA ALUGAR 2"<<"\n";
	
	cout<<"O segundo filme se chama:  "<<alugar2.titulo<<"\n";
	cout<<"O ano do segundo filme é:  "<<alugar2.anoLancamento<<"\n";
	
	
	
	
	
	/*
	cout<<"Informe o titulo do filme: ";
	cin.getline(alugar1.titulo,30);
	
	cout<<"Informe o ano do filme: ";
	cin>>alugar1.anoLancamento;
	
	cout<<endl;
	cout<<"Exibindo dados";
	cout<<endl;
	
	cout<<"O filme se chama:  "<<alugar1.titulo<<"\n";
	cout<<"O ano de lançamento é:  "<< alugar1.anoLancamento<<endl;
	
	*/
	return 0;
	
	}
