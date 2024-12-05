#include <iostream>
#include <Windows.h>
#include <cstdlib>
#include <stdlib.h>
#include <string>
#include <time.h>
using namespace std;
int suma(int A,int B){
	int suma=A+B;
	return suma;
}
int resta(int A,int B){
	int resta=A-B;
	return resta;
}
int mult(int A,int B){
	int multiplicacion=A*B;
	return multiplicacion;
}
int division(int A,int B){
	int division=A/B;
	return division;
}
int main(){
	int A,B;
	string calculo;
	
	cout<<"Ingrese un numero:";
	cin>>A;
	system("cls");
	cout<<"Ingrese otro numero:";
	cin>>B;
	system("cls");
	cout<<"Ingrese una de las operaciones(+, -, *, /): ";
	cin>>calculo;
	system("cls");
	if(calculo=="+"){
		cout<<"El resultado de "<<A<<" "<<calculo<<" "<<B<<" es:"<<suma(A,B)<<endl;	
	}
	if(calculo=="-"){
		cout<<"El resultado de "<<A<<" "<<calculo<<" "<<B<<" es:"<<resta(A,B)<<endl;
	}
	if(calculo=="*"){
		cout<<"El resultado de "<<A<<" "<<calculo<<" "<<B<<" es:"<<mult(A,B)<<endl;
	}
	if(calculo=="/"){
		cout<<"El resultado de "<<A<<" "<<calculo<<" "<<B<<" es:"<<division(A,B)<<endl;
	}
}
