#include<iostream>
#include<string.h>

// Função strcat();
// Concatenar cadeias

// Exercício // Criar uma cadeia que imprima Olá tudo bem e depois uma outra que pergunte o nome do usuário e depois imprimir

using namespace std;

int main(){
	
	char nome[] = "Olá tudo bem  ";
	char nomePessoa[20];
	char nomeConcatenar[30];
	
	cout<<"Informe o seu nome:  ", cin>>nomePessoa;
	
	strcpy(nomeConcatenar, nome);
	strcat(nomeConcatenar, nomePessoa);
	cout<<nomeConcatenar;
	
	
	
	return 0;
	
}
