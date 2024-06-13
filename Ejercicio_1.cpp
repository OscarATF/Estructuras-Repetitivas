#include <iostream>
using namespace std;
int main()
{
	int n,i,m;
	cout<<"Programa que imprimira los primeros n multiplos de 7"<<endl;
	cout<<"Ingrese el valor de n"<<endl;
	cin>>n;
	while (n<0) {
				cout<<"*Invalido! Introduzca un numero positivo"<<endl;
				cin>>n;
			}
	for(i=1;i<=n;i++) {
		m=i*7;
		cout<<m<<endl;
	}
	return 0;
}
