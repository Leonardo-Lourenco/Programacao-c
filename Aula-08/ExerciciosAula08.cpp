#include<iostream>

using namespace std;

int main(){
	
	int num1, num2;
	
	cout<<"Informe um número:  ";
	cin>>num1;
	
	cout<<"Digite um segundo valor:  ";
	cin>>num2;
	
	
	
	if(num1 == num2){
		
		cout <<"Valores iguais";
	} else {
	
	
	if(num1 > num2){
		
		cout<<"Este valor:  "<<num1<<"   é maior que o número:  "<<num2; 
		
		
		}else{
			
			cout<<"Este valor:  "<<num2<<"   é maior que o:  "<<num1;
			
			}
	}
	
return 0;
	
	}
