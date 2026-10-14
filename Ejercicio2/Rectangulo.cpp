/*
 * Rectangulo.cpp
 *
 *  Created on: 14 oct 2026
 *      Author: Diego Gómez
 */

#include "Rectangulo.h"
#include <iostream>

Rectangulo::Rectangulo(float lado, float alto) : lado(lado), alto(alto) {
	std::cout << "Estoy en constructor Rectangulo::Rectangulo(float lado, float alto)" << std::endl;
}

Rectangulo::~Rectangulo() {
	std::cout << "Estoy en destructor Rectangulo::~Rectangulo()" << std::endl;
}

float Rectangulo::area() const {
	return lado * alto;						//area=base*altura
}

float Rectangulo::perimetro() const {
	return 2 * (lado + alto);				//perimetro=2*(base+altura)
}
