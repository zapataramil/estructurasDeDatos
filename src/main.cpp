#include <iostream>
#include "pruebas.h"
#include "vector.h"
#include "mergeSort.h"
#include "quickSort.h"

using namespace std;

int main(){

	//PRUEBAS CON LA ESTRUCTURA VECTOR
	//pruebasVector();

	//PRUEBAS CON LA ESTRUCTURA LISTA SIMPLEMENTE ENLAZADA
	//pruebasListaSimplementeEnlazada();


	Vector vec(5);
	vec[0]=1;
	vec[1]=8;
	vec[2]=1;
	vec[3]=5;
	vec[4]=0;
	vec.mostrar();
	quicksort(vec);
	vec.mostrar();
	return 0;
}
