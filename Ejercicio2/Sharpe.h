/*
 * Sharpe.h
 *
 *  Created on: 14 oct 2026
 *      Author: Diego Gómez
 */

#ifndef SHARPE_H_
#define SHARPE_H_

class Sharpe {
public:										//En publico ya que van a acceder las clases derivadas
	Sharpe();								//Constructor
	virtual ~Sharpe();                      //Destructor
	virtual float area() const;				//virtual porque el valor sera modificado en las clases derivadas
	virtual float perimetro() const;
};

#endif /* SHARPE_H_ */
