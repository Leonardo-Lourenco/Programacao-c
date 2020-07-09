#include<iostream>
#include<string.h>

// Função strcat();
// Concatenar cadeias

using namespace std;

int main(){

	
	char nome[] = "cadeia de caracteres";
	char nome2[] = "exemplo coffee tag";
	char nome3[30];
	
	
	//copiar conteúdo
	strcpy(nome3, nome);
	strcat(nome3, nome2);
	
	cout<<nome3;





	return 0;
	
}
