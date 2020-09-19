#include "vector.h"
#include <iostream>

Vector::Vector(){
	dato = 0;
	longitud = 0;
}

void Vector::inicializar(Datos* dato, int largo){
	for(int i=0 ; i<largo ; i++)
		dato[i] = 0;
}

Vector::Vector(int largo){
	longitud = largo;
	dato = new Datos[largo];
	inicializar(dato,largo);
}

Vector::Vector(const Vector & vec){
	longitud = vec.longitud;
	if (longitud > 0){
		Datos* aux = new Datos[longitud];
		copiarDatos(aux,vec.dato,longitud);
	}else
		dato = 0;
}

void Vector::operator= (const Vector & vec){
	if (longitud > 0)
		delete []dato;
	longitud = vec.longitud;
	if (longitud > 0){
		Datos* aux = new Datos[longitud];
		copiarDatos(aux,vec.dato,longitud);
	}else
		dato = 0;
}



void Vector::cargarDato(Datos valor, int pos){
	dato[pos]= valor;
}

Datos Vector::obtenerDato(int posicion){
	return dato[posicion];
}

bool Vector::estaVacio(){
	if (longitud == 0)
		return true;
	return false;
}

void Vector::mostrar(){
	for(int i=0; i<longitud ;i++)
		std::cout << dato[i]<<std::endl;
}

void Vector::copiarDatos(Datos* nuevo,Datos* viejo, int cantidad){
	for(int i=0 ; i<cantidad ; i++)
		nuevo[i] = dato[i];
}


//largo es el tamanio que desea el usuario +1, (porque considero la posicion 0)
void Vector::redimensionar(int largo){
	if (longitud != largo){
		Datos* aux = new Datos[largo];
		copiarDatos(aux,dato,largo);
		if (longitud > 0)
			delete []dato;
		longitud = largo;
		dato = aux;
	}
}

int Vector::obtenerTamanio(){
	return longitud;
}


Vector::~Vector(){
	delete []dato;
}
