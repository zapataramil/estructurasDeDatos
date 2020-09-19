#include <iostream>

#include "vector.h"

using namespace std;

int main(){
	Vector vectorsito(4);
	vectorsito.mostrar();
	vectorsito.cargarDato(3,0);
	vectorsito.cargarDato(2,1);
	vectorsito.mostrar();
	vectorsito.redimensionar(6);
	vectorsito.mostrar();

	return 0;
}
