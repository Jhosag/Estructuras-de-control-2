#include <iostream>
using namespace std;
main(){
	/*
	int contar=0;
	int iter=0;
	
	for (iter<=10;iter++){ //puede ser iter+=1 o i=i+1, mismo resultado
		cout<<iter<<endl;	
		contar++;
		iter ++;
	}
	cout<<"Ciclos: "<<contar<<endl;
	
	
	for (int iter=0;iter<10;iter++){
		if (i==5){
			break;
			cout<<"if"<<endl
			//continue;
		}
		cout<<"Fuera del for"<<endl;
	}*/
	
	/*
	int datos[5]={10,40,100,250,3000};
	//int tam=0;
	//cout<<sizeof(datos)<<endl;
	//tam = sizeof(datos)/sizeof(datos[0]);
	//for(int iter:datos){cout<<i<<endl;//actualizar a iso c++11
	for (int iter=0;iter<5;iter++){
		cout<<datos[iter]<<endl;
	}
	
	
	int tabla = 0, res = 0;
	cout<<"Ingrese tabla: ";
	cin>>tabla;
	for(int iter=1;iter<=10;iter++){
		res = tabla * iter;
		cout<<tabla<<" X "<<iter<<" = "<<res<<endl;
		
	}*/	
	
	int inicio = 0, fin = 0, res=0;
	cout<<"Ingrese tabla inicial: ";
	cin>>inicio;
	cout<<"Ingrese tabla final: ";
	cin>>fin;
	
	for(int rango=inicio;rango<=fin;rango++){
	cout<<"Tabla del "<<rango<<endl;	
		for(int iter=1;iter<=10;iter++){
		res = rango * iter;
		cout<<rango<<" X "<<iter<<" = "<<res<<endl;
		}
	}	
	
	
	system ("pause");
}
