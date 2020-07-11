#include<iostream>  
#include<string.h>


using namespace std;

int somar(int a, int b);


int main(){
	
	int num1, num2, res;
	
	cout<<"Informe um valor:  ", cin>>num1;
	cout<<"Informe um segundo valor:  ",cin>>num2;
	
	res = somar(num1,num2);
	
	cout<<" A soma dos valores é:  "<<res;
	
	
	
	return 0;
	
}

int somar(int a, int b){
	 
	  return a + b;
	
	
	}
