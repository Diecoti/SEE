/*
 * Circulo.h
 *
 *  Created on: 14 oct 2026
 *      Author: Diego Gómez
 */

#ifndef CIRCULO_H_
#define CIRCULO_H_

#include <cmath>
#include <iostream>

template <typename T>
class Circulo {
protected:
	T radio;     //radio de tipo T y protegido
public:

	Circulo(T radio) : radio(radio) {			//Inicializado por el constructor
		std::cout << "En constructor Circulo::Circulo(T radio)" << std::endl;
	}

	virtual ~Circulo() {						//Destructor
		std::cout << "En destructor Circulo::~Circulo()" << std::endl;
	}

	T area() const {
		return M_PI * radio * radio;			//area=pi*r^2
	}

	T perimetro() const {
		return 2 * M_PI * radio;				//perimetro=2*pi*r
	}
};

#endif /* CIRCULO_H_ */
