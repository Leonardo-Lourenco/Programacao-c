/* Criar um programa onde a pessoa informe quantas linhas e quantas colunas
 * ela quer, depois ela irá informar os valores para preecher está Matriz*/

#include<iostream>

using namespace std;

int main(){

    int num[100][100], linhas, colunas;  //Primeiro Linhas depois Colunas
    
    cout<<"Digite o número de linhas:  ", cin>>linhas;
    cout<<"Informe o número de colunas:  ", cin>>colunas;
    
    //Armazenar os dados
    for(int i =0;i<linhas;i++){
		
		for(int j=0; j<colunas; j++){
			
			 cout<<"Digite os valores:  ["<<i<<"]["<<j<<"]:  ";
			 cin>>num[i][j];
			
			}
		
		}
    
    //Exibir dados na Tela
    for(int i =0; i<linhas; i++){
		
		for(int j =0; j<colunas; j++){
			
			  cout<<num[i][j];
			
			}
			
			cout<<endl;	
		
		}
    

	return 0;
	
}
