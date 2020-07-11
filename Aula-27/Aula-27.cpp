#include<iostream>  
#include<string.h>

//Média de alunos..

using namespace std;

struct NotaAluno{
	
	 float nota1;
	 float nota2;
	 float nota3;
	 	
	};
	
	struct Aluno{
		
		char nome[30];
		char sexo[20];
		int idade;
		struct NotaAluno notas;
						
		}primeiroAluno;


int main(){
	
	float media;
	
	cout<<"Informe o seu nome:  ";
	cin.getline(primeiroAluno.nome,30);
	
	cout<<"Informe o seu sexo:  ";
	cin.getline(primeiroAluno.sexo,20);
	
	cout<<"Informe a sua idade:  ";
	cin>>primeiroAluno.idade;
	
	cout<<endl;
	
	cout<<"Informe a sua primeira nota:  ";
	cin>>primeiroAluno.notas.nota1;
	
	cout<<"Informe a sua primeira nota:  ";
	cin>>primeiroAluno.notas.nota2;
	
	cout<<"Informe a sua primeira nota:  ";
	cin>>primeiroAluno.notas.nota3;
	
	// Operação para calcular a média do aluno
	
	media = (primeiroAluno.notas.nota1+primeiroAluno.notas.nota2+primeiroAluno.notas.nota3)/3;
	
	cout<<endl;
	
	cout<<"STATUS DO ALUNO";
	
	cout<<endl;
	
	cout<<"Nome do Aluno:  "<<primeiroAluno.nome<<endl;
	cout<<"Sexo:  "<<primeiroAluno.sexo<<endl;
	cout<<"Idade" << primeiroAluno.idade<<endl;
	
	if(media >= 7){
          
          cout<<"Nota:  "<<media<<endl;
          cout<<"Parabéns você está APROVADO";		
		
		} else if(media >=4 && media < 6){
			
			 cout<<"Nota:  "<<media<<endl;
			 cout<<"Exame final";
					
			}else{
				
				  cout<<"Nota: "<<media<<endl;
				  cout<<"Reprovado";
				
				}
	
	
	
	return 0;
	
}	
