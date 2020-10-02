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


	Vector vec(4);
	vec[0]=8;
	vec[1]=4;
	vec[2]=2;
	vec[3]=1;
	vec.mostrar();
	quicksort(vec);
	vec.mostrar();
	return 0;
}
