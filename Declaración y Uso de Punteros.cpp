#include<iostream>
using namespace std;
int main(){
	int numero=34;
	int *puntero;
	
	puntero=&numero;
	
	cout<<"Valor de numero: "<<numero<<endl;
	cout<<"Direccion de memoria de puntero: "<<puntero;	
	return 0;
}
