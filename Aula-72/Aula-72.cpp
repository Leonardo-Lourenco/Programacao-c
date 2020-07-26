#include <iostream>  
#include <string.h>
#include <stdlib.h>


using namespace std;

// Sobrecargas de Construtores 


class Data{
	
	
	private: // Atributos
	   
	   int dia, mes, ano;
	
	public: // Métodos
	   Data(int, int, int);
	   Data(long);
	   
	   // 25/07/2020 -> 20200725 2020/07/27
	   
	   void exibirData();
	
	};
	
Data::Data(int _dia, int _mes, int _ano){
	
	 dia = _dia;
	 mes = _mes;
	 ano = _ano;
	
	}
	
Data::Data(long data){
	
	// 250720250
	
	ano = int(data/10000); // Estraindo o ano de 20200725
	mes = int ((data-ano*10000)/100);// Extrai o mês
	dia = int(data-ano*10000-mes*100); // Extraindo o dia de 20200725
	
	}	
	
	

void Data::exibirData(){
	 
	 
	 cout<<" A data de hoje é:  "<<dia<<"/"<<mes<<"/"<<ano<<endl;
	
	
	}



int main(){
	
	Data hojeData(25,07,2020);
	hojeData.exibirData();
	
	Data sobrecargaData(20200725);
	sobrecargaData.exibirData();
	
	
	return 0;
}
