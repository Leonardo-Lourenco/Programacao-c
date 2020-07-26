/*
 * 
 * Faça um programa com uma Classe Aluno com os seguintes atributos: Nota Primeira Prova , Nota Segunda Prova, Nota Terceira Prova com o seguinte Método Médias(). 

Exibir na Tela o nome do Aluno a média das notas e status:

Média abaixo de 40% : Status - > Reprovado
Média acima de 41%  e abaixo de 60%: Status -> Exame Final
Média acima de 61% : Status -> Aprovado
* 
 
 * */


#include <iostream>  
#include <string.h>
#include <stdlib.h>


using namespace std;

class Aluno{
	
	
	private:
	  
	   float nota1, nota2, nota3;   // Atributos da nossa classe Aluno
	   
	
	public:
	   Aluno(float, float, float); // Construtor da Classe
	   void media();   // Ação que as notas
	
	
	
	};
	
// Inicializar o nosso construtor	
Aluno::Aluno(float _nota1, float _nota2, float _nota3){
	
	 nota1 = _nota1;
	 nota2 = _nota2;
	 nota3 = _nota3;
	
	
	}

void Aluno::media(){  //Inicializando a classe eo os métodos
	
	  float status;
	  
	  
	  status = (nota1+nota2+nota3)/3; // valot da Média
	  
	  if(status<= 4){
		  
		  
		    cout<<"Você está REPROVADO"<<endl;
		  
		  
		  }else if(status >=5 && status <=6){
			  
			    cout<<"Você está de EXAME FINAL"<<endl;
			  
			  }else{
				  
				  cout<<"Você está APROVADO boas férias"<<endl;
				  
				  }
				  
				  
		cout<<" Sua média é :  "<<status<<endl;		  
	  
	
	}



int main(){
	
	
	float a,b,c;
	
	
	cout<<"Informe a Primeira Nota:  ", cin>>a;
	cout<<"Informe a Segunda Nota:  ", cin>>b;
	cout<<"Informe a Terceira Nota:  ", cin>>c;
	
	Aluno statusAluno = Aluno(a,b,c);
	statusAluno.media();
	
	
	
	return 0;
	}
