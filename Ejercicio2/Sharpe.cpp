/*
 * Sharpe.cpp
 *
 *  Created on: 14 oct 2026
 *      Author: Diego Gómez
 */

#include "Sharpe.h"
#include <iostream>

Sharpe::Sharpe() {
	std::cout << "Estoy en constructor Sharpe::Sharpe()" << std::endl;
}

Sharpe::~Sharpe() {
	std::cout << "Estoy en destructor Sharpe::~Sharpe()" << std::endl;
}

float Sharpe::area() const {
	return 0.0f;				//Area que devuelve 0 por defecto
}

float Sharpe::perimetro() const {
	return 0.0f;				//Perimetro que devuelve 0 por defecto
}
