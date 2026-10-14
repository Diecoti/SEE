/*
 * Rectangulo.h
 *
 *  Created on: 14 oct 2026
 *      Author: Diego Gómez
 */

#ifndef RECTANGULO_H_
#define RECTANGULO_H_

#include "Sharpe.h"

class Rectangulo: public Sharpe {
private:
	float lado;	// Base
	float alto;	// Altura
public:

	Rectangulo(float lado, float alto);		//Constructor rectangulo

	~Rectangulo() override;			 		//Destructor rectangulo

	float area() const override;			//area=base*altura

	float perimetro() const override;		//perimetro=2*(base+altura)
};

#endif /* RECTANGULO_H_ */
