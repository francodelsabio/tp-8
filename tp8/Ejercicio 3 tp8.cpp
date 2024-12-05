#include <iostream>
#include <Windows.h>
#include <cstdlib>
#include <stdlib.h>
#include <string>
#include <time.h>
using namespace std;
float kilobyte(float A,float K){
	K=A*1024;
	return K;
}
float megabyte(float A,float M){
	M=A/1024/1024;
	return M;
}
float petabyte(float A,float P){
	P=A*1024*1024;
	return P;
}
int main(){
	int opcion;
	float A,M,K,P;
	
	cout<<"Ingrese el numero que desea convertir:";
	cin>>A;
	cout<<" "<<endl;
	cout<<"1. Byte a Kilobyte"<<endl;
	cout<<"2. Megabyte a Terabyte"<<endl;
	cout<<"3. Gigabyte a Petabyte"<<endl;
	cout<<" "<<endl;
	cout<<"Ingrese una opcion:";
	cin>>opcion;
	system("cls");
	
	switch(opcion){
		case 1:{
			cout<<"La conversion de "<<A<<" bytes es:"<<kilobyte(A,K)<<endl;
			break;
		}
		case 2:{
			cout<<"La conversion de "<<A<<" Megabytes es:"<<megabyte(A,M)<<endl;	
			break;
		}
		case 3:{
			cout<<"La conversion de "<<A<<" Gigabytes es:"<<petabyte(A,P)<<endl;	
			break;
		}
	}
}
