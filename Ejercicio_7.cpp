#include <iostream>
using namespace std;
int main()
{
	double contP=0,contI=0,sumP=0,sumI=0;
	int total,num;
	cout<<"Programa para calcular el promedio de numeros pares e impares"<<endl;
	cout<<"Escriba la cantidad total de numeros a ingresar"<<endl;
	cin>>total;
	while (total<0) {
		cout<<"Porfavor ingrese una cantidad valida"<<endl;
		cin>>total;
	}
	for (int i=1;i<=total;i++) {
		cout<<"Ingrese un numero"<<endl;
		cin>>num;
		if (num%2==0) {
			contP++;
			sumP=sumP+num;
		} else {
			contI++;
			sumI=sumI+num;
		}
	}
	cout<<"El promedio de numeros pares es "<<sumP/contP<<endl;
	cout<<"El promedio de numeros impares es "<<sumI/contI<<endl;
	return 0;
}