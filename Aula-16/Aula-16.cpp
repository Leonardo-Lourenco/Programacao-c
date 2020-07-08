#include<iostream>
#include<string.h>

// Função strcpy();

using namespace std;

int main(){

   
   char nome[] = "CoffeeTag";
   char nomeCopia[20];
   
   strcpy(nomeCopia, nome);
   
   cout<<nomeCopia;



   return 0;

}
