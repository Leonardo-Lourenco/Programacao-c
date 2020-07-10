#include<iostream>  
#include<string.h>

// método de ordenação por seleção

using namespace std;

int main(){
	
	int num[] = {5,4,2,3,1};
	int i, j,aux, numeroMinimo;
	
	for(i=0;i<5;i++){
		  
		  numeroMinimo = i;
		  
		  for(j=i+1;j<5;j++){
			    
			    if(num[j] < num[numeroMinimo]){
					
					 numeroMinimo = j;
					
					}
			  
			  }
			  
			  aux = num[i];
			  num[i] = num[numeroMinimo];
			  num[numeroMinimo] = aux;
		
		}
	
	
	//Ordem crescete
	
	cout<<"Ordem crescente \n";
	for(i=0;i<5;i++){
		 
		 cout<<num[i]<<endl;
		
		}
		
		
	//Ordem decrescente	
	
	cout<<"Ordem descrescente: "<<endl;
	for(i=4;i>=0;i--){
		
		 cout<<num[i]<<endl;
		
		
		}
	
	return 0;
	
}
