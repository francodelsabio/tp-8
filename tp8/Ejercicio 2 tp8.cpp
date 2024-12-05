#include <iostream>
#include <Windows.h>
#include <cstdlib>
#include <stdlib.h>
#include <string>
#include <time.h>
using namespace std;
int contarPalabras(string cadena){
	int i;
	int longitud;
	int espacio=0;
	longitud=cadena.length();
	for(i=0; i<longitud; i++){
		if(cadena.at(i)==' '){
			espacio++;
		}
	}
	return espacio+1;
}
int main(){
	string cadena;
	
	cout<<"Ingrese la oracion que desee:";
	getline(cin, cadena);
	
	cout<<"La cantidad de palabras utilizadas son:"<<contarPalabras(cadena)<<endl;
	return 0;
}
