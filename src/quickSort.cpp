#include "quickSort.h"
#include <iostream>
void intercambiar(int& a,int& b){
	int aux=a;
	a=b;
	b=aux;
}




void quicksort(Vector &vec){

	int tamanio = vec.obtenerTamanio();

	if (tamanio < 1)
		return;

	int min=0,max=tamanio-2,pivot=tamanio-1;

	if(tamanio==1){
		if(vec[min]>vec[pivot])
			intercambiar(vec[min],vec[pivot]);
		return;
	}

	while(min < max){
		if(vec[min]>vec[pivot]){
			if(vec[max]<vec[pivot]){
				intercambiar(vec[min],vec[max]);
				min++;
				max--;
			}else{
				max--;
			}
		}else
			min++;
	}

	if(vec[min]>vec[pivot]){
		intercambiar(vec[min],vec[pivot]);
		min++;
	}

	Vector left(min+1);
	Vector right(tamanio-(min+1));
	for(int i=0; i<=min;i++)
		left[i]=vec[i];
	for(int i=0; i<=tamanio-min;i++)
		right[i]=vec[min+1+i];

	/*quicksort(left);


	left.mostrar();
	std::cout<<std::endl;

	quicksort(right);

	right.mostrar();
	std::cout<<std::endl;

	vec.mostrar();

	*/

}
