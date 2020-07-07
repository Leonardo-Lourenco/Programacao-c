

/* Sequência de Fibonacci -> 1 1 2 3 5 8 13 n 
 * 
 * soma dos dois valores que atencendem  */
 

#include<iostream>


using namespace std;

int main(){

    int num, x = 0, y = 1, z = 1;
    
    cout<<"Informe um valor:  ";
    cin>>num;
    
    for(int i = 1; i<= num; i++){
		
		z = x + y; // 0 + 1 = 1 2 3
		
		cout <<z<<"   "; // 1 - 2 - 3
		x = y; // 1  2
		y = z; // 1 2
			
		
		}
    
    
    
    
     return 0;
	
}
