#include "mergeSort.h"
#include <iostream>
#include "vector.h"


Vector merge(Vector left, Vector right,Vector vec){
	int contadorLeft=0,contadorRight=0,contador=0;
	while ((contadorLeft<left.obtenerTamanio())&&(contadorRight<right.obtenerTamanio())){
		if(left[contadorLeft]>right[contadorRight]){
			vec[contador]=right[contadorRight];
			contadorRight++;
		}else{
			vec[contador]= left[contadorLeft];
			contadorLeft++;
		}
		contador++;
	}
	while(contadorRight<right.obtenerTamanio()){
		vec[contador]=right[contadorRight];
		contadorRight++;
		contador++;
	}
	while(contadorLeft<left.obtenerTamanio()){
		vec[contador]=left[contadorLeft];
		contadorLeft++;
		contador++;
	}
	return vec;
}



Vector mergesort(Vector vec){
	int tamanio = vec.obtenerTamanio();
	if(tamanio<=1)
		return vec;
	int middle = tamanio/2;
	Vector left(middle);
	Vector right(tamanio - middle);
	for(int i=0; i<middle; i++)
		left[i]=vec[i];
	for(int i=middle; i<tamanio; i++)
		right[i-middle]=vec[i];
	left=mergesort(left);
	right=mergesort(right);
	return merge(left,right,vec);
}
