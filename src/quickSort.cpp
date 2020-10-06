#include "quickSort.h"
#include <iostream>

void intercambiar(int& a,int& b){
	int aux=a;
	a=b;
	b=aux;
}

int pivot(Vector& vec,int min,int max){
	int pivote=max;
	while(min < (max-1)){
		if(vec[min]>vec[pivote]){
			if(vec[max-1]<vec[pivote]){
				intercambiar(vec[min],vec[max-1]);
				min++;
				max--;
			}else{
				max--;
			}
		}else
			min++;
	}

	if(vec[min]>vec[pivote])
		intercambiar(vec[min],vec[pivote]);
	return min;
}


void quicksort1(Vector &vec,int min,int max){
	if (min==max)
		return;
	int pivote = pivot(vec,min,max);
	quicksort1(vec,min,pivote);
	quicksort1(vec,pivote+1,max);
}


void quicksort(Vector& vectorsito){
	quicksort1(vectorsito,0,vectorsito.obtenerTamanio()-1);
}


