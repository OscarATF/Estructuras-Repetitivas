#include <iostream>
#include <windows.h>

int n;
int resultado=0;
using namespace std;
void multiplos(){
		SetConsoleOutputCP(CP_UTF8);
		cout<<"Programa que imprimira los primeros n múltiplos de 7"<<endl;
	cout<<"Ingrese el valor de n"<<endl;
	while (n<0) {
				cout<<"*Invalido! Introduzca un numero positivo"<<endl;
				cin>>n;
			}
			
	cin>>n;
	cout<<"LOS MÚLTIPLOS SON: "<<endl;
	for(int i=1;i<=n;i++){
		resultado=i*7;
		cout<<resultado<<endl;
	
	}
}
int main(){
			multiplos();
	return 0;
	}


