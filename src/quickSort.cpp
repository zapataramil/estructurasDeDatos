#include "quickSort.h"

void intercambiar(int& a,int& b){
	int aux=a;
	a=b;
	b=aux;
}

Vector quicksort(Vector vec){
	int tamanio = vec.obtenerTamanio();
	if (tamanio <= 1)
		return vec;
	int min=0,max=tamanio-2,pivot=tamanio-1;
	while(min < max){
		if(vec[min]>vec[pivot]){
			if(vec[max]<vec[pivot]){
				intercambiar(vec[min],vec[max]);
			}else
				max--;
		}else
			min++;
	}
	intercambiar(vec[pivot],vec[min]);
	vec=quicksort(vec);
	return vec;
}
