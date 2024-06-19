#include <iostream>
using namespace std;
int main()
{
	double num,var;
	int total;
	cout<<"Programa para saber el mayor numero de una lista"<<endl;
	cout<<"Ingrese el total de numeros"<<endl;
	cin>>total;
	while (total<0)
	{
		cout<<"Porfavor ingrese una cantidad total valida"<<endl;
		cin>>total;
	}
	system("cls");
	for (int i=1;i<=total;i++) {
		cout<<"Ingrese un numero"<<endl;
		cin>>num;
		if (i==1) {
			var=num;
		} else if (num>var) {
			var=num;
		}
}
	cout<<var<<" Es el mayor"<<endl;
	return 0;
}
	