#include<iostream>
#include<string.h>
// método de ordenação Inserção
using namespace std;

int main(){

    
   int num[] = {5,4,2,3,1};
   int i, posicao,aux;
   
   
   //Ordenação por inserção
   for(i=0;i<5;i++){
       
       posicao = i;
       aux = num[i];
       
       while((posicao>0) && (num[posicao-1]>aux)){
		   
		   num[posicao] = num[posicao-1];
		   posicao --;
		  	   
		   
		   }
		   
		   num[posicao] = aux;  	   
	   
	   
	   }
	   
	   
	   //Ordem crescente
	   
	   cout<<"Ordem crescente: "<<endl;
	   for(i=0;i<5;i++){
		   cout<<num[i]<<endl;
			   
		   }
    
        //Ordem descrecente 
        
        cout<<"Ordem descrescente: "<<endl;
        
        for(i=4;i>=0;i--){
						
			cout<<num[i]<<endl;
			
			}
    
    
    
    
    
    
	return 0;
	
}
