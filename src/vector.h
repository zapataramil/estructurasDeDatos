/*
 * vector.h
 *
 *  Created on: 17/5/2020
 *      Author: ramil
 */

#ifndef VECTOR_H_
#define VECTOR_H_


typedef int Datos;

class Vector{
private:
	Datos* dato;
	int longitud;

public:
	Vector();

	Vector(int largo);

	Vector(const Vector & vectorsito);

	void cargarDato(Datos dato, int posicion);

	Datos obtenerDato(int posicion);

	bool estaVacio();

	void mostrar();

	void redimensionar(int largo);

	void copiarDatos(Datos* viejo,Datos*, int ciclos);

	int obtenerTamanio();

	void inicializar(Datos* dato, int longit);

	void operator= (const Vector & vectorsito);

	~Vector();


};



#endif /* VECTOR_H_ */
