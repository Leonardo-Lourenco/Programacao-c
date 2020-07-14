#include <iostream>  
#include <string.h>

// Ponteiros e Vetor ou Arrays

using namespace std; 

int main(){

   int num[] = {1,2,3,4,5}; 
   
   int *direcao_numero;
   
   //direcao_numero = &num[0];
   
   direcao_numero = num;
   
   for(int i =0; i< 5; i++){
	   
	   //cout<<"Elementos do Vetor: [ "<<i<< " ] "<<*direcao_numero ++<<endl;
	   cout<<"Posição de memoria [  "<<num[i]<<" ] "<<direcao_numero ++<<endl;
	   
   }
   


 return 0;
	
}
