#include<iostream>
#include<string.h>

// método de ordenação Bolha ou (Bubble sort)

using namespace std;

int main(){
	
	
    int num[] = {5,4,2,3,1};
    int i, j, aux;
    
    //Algoritmo de ordenação
    
    for(i = 0; i <5;i++){
		
		for(j=0;j<5;j++){
			
			if(num[j] > num[j+1]){
				
				aux = num[j]; //receber o valor atual
				num[j] = num[j+1]; //numer0 atual vai ser o próximo valor
				num[j+1] = aux; //número seguinte vai ser igual ao meu auxiliar
				
				
				}
			
			
			}
		
		
		
		}
    
     // Ordem crescente
     cout<<"Ordem crescente \n";
     for(i=0;i<5;i++){
		 
		 cout<<num[i]<<endl;
		 
		 
		 }
    
    //Ordem descrescente 
    
    cout<<"Ordem descrescente \n";
    for(i = 4;i>=0; i--){
		
		cout<<num[i]<<endl;
		
		}
    
     
     
     
     
     



	return 0;
	
}
