

// Switch

/*  switch(expreção)
 * 
 *   case isso:
 * 
 *      Instrução;
 * 
 *      break;
 * 
 *    case isso2:
 * 
 *      Instrução;
 * 
 *      break;
 * 
 *     case isso3:
 * 
 *      Instrução;
 * 
 *      break;
 *      
 *     defaut:
 *     
 *     Intrução
 *     break;
 * 
  }
 * 
 * case 1: cout<<"Opçaõ escolhida 1"; 
 * case 2: cout<<"Opçaõ escolhida 2"; break;
 * 
 * quando eu tiro o break da opção 1 ele le e ve se cumpre como não tem o break e pula para opçao 2
 *     */


#include<iostream>

using namespace std;

int main(){
	
	int num;
	
	cout<< "Digite um valor de 1 a 5:  ";
	cin>>num;
	
	
	switch(num){
		
		case 1: cout<<"Opção escolhida 1"; break;
		case 2: cout<<"Opção escolhida 2"; break;
		case 3: cout<<"Opção escolhida 3"; break;
		case 4: cout<<"Opção escolhida 4"; break;
		case 5: cout<<"Opção escolhida 5"; break;
		default: cout<<"A opção escolhida não existe";
				
		
		}
	
	
	return 0;
	
	}
