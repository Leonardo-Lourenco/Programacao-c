#include<iostream>


using namespace std;

int main(){
	
	int num[100], n;
	
	cout<<"Informe o tamanho do vetor:  ", cin>>n;
	
	for(int i =0; i<n;i++){
		
		cout<<"Informe os valores:  ", cin>>num[i];
		
		}
		
		for(int i =0;i<n;i++){
			
			cout<<i<<" -------->>>>"<<num[i]<<endl;
			
			
			}
	
	
	return 0;
	
}
