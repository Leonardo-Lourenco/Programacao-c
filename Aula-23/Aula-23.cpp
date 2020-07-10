#include<iostream>  
#include<string.h>

// Busca seguêncial Vetor
// a[5] = { 5,3,2,4,1}

using namespace std;

int main(){
	
	
	char valor[] = {'L','e','o'},procurarValor;
	//int valor[] = { 5,3,2,4,1};
	int i;
	
	char existe = 'F';
	
	
	
	i = 0;
	procurarValor = 'f';
	
	
	
	while((existe == 'F') && (i<5)){
		
		if(valor[i] == procurarValor ){  
			
			
			existe = 'V';
			//break;
		   }	
		   
		   i ++;
		
		}
		
		if(existe == 'F' ){
			  
			  cout<<"Valor não encontrado";
			
			} else if (existe == 'V' ){
				
				   cout<<"Valor encontrado na : "<<i-1<<"   Posição"<<endl;
				}
	
   return 0;
	
}
