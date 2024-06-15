#include <iostream>
using namespace std;
int main()
{
	int num;long sum;
	cout<<"Programa que suma los n primeros numeros"<<endl;
	cout<<"Ingrese el valor de n"<<endl;
	cin>>num;
	for(int i=1;i<=num;i++){
		sum=sum+i;
	}
	cout<<"La suma es "<<sum<<endl;
	return 0;
}