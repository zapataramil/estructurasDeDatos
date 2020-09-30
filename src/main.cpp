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
	vec[2]=1;
	vec[3]=9;
	vec.mostrar();
	Vector vec1 = quicksort(vec);
	vec1.mostrar();
	return 0;
}
