#include<iostream>
#include<string.h>

// Função strlen();

using namespace std;

int main(){
   
   char nome[] = "Leo";
   int tamanho = 0;
   
   tamanho = strlen(nome);
   
   
   cout<<"O nome  "<<nome<<" tem:  "<<tamanho<<" letras";


	return 0;
	
}
