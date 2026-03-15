#include <iostream>
using namespace std;
main(){
	/*
	int iter=0;
	
	while(iter<5){
		//iter++;//imprime 1,2,3,4,5
		cout<<iter<<endl;//ciclo infinito
		iter++;//imprime 0,1,2,3,4
	}
	
	int iter=5;
	while (iter>0){
		iter--;
		cout<<iter<<endl;
	}
	
	
	int iter=0;
	do{
		
		iter++;
		cout<<iter<<endl;
		
	}while(iter<5);
	*/
	
	char respuesta;
	do{
		cout<<"Desea ingresar otro valor (s/n) ";
		cin>>respuesta;
		
	}while(respuesta=='s'|| respuesta=='S');
	
	/*
	char respuesta='s';
	while(respuesta=='s'|| respuesta=='S'){
		cout<<"Desea ingresar otro valor (s/n) ";
		cin>>respuesta;
	}
	*/
	system("pause");
}
