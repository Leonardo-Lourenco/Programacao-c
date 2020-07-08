#include<iostream>
#include<string.h>

// Função strcmp();

using namespace std;

int main(){
	
	char nome[] = "Leonar";
	char nome2[] = "Coffee";
	
	
	if(strcmp(nome, nome2) == 0){
		
		 cout<<"Palavavras iguais";
		
		}else{
			 
			 cout<<nome<<" é diferente "<<nome2;
			
			}
	
	
	return 0;
	
}
