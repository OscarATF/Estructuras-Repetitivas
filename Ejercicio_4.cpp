#include <iostream>
using namespace std;
int main()
{
	double gasto,suma=0;
	string op;
	cout<<"Programa que solicitara los n primeros gastos y mostrara al final la suma de estos"<<endl;
	do {
		cout<<"Ingrese un gasto"<<endl;
		cin>>gasto;
		cout<<"Desea seguir ingresando gastos? (si/no)"<<endl;
		cin>>op;
		suma=suma+gasto;
	} while (op=="si");
	cout<<"El gasto total es de s/"<<suma<<endl;
	return 0;
}