/* Fazer um programa que calcule a fatorial de um número 1*2*3*.....*n
   
   
   Fatorial é um número natural inteiro positivo, o qual é representado por n!

   O fatorial de um número é calculado pela multiplicação desse número por todos os seus antecessores até chegar ao número 1
   * 
   * Ex: Fatorial de 5! = 5*4*3*2*1
   * 
*    
* 
*/

#include<iostream>


using namespace std;

int main(){
	
	
	int num, fatorial = 1;
	
	cout<<"Informe um valor:  ";
	cin>>num;
	
	for(int i = 1; i<=num; i++){
		
		fatorial = fatorial * i;
		
		}
	cout<<fatorial<<endl;
	
	
	


	return 0;
	
}
