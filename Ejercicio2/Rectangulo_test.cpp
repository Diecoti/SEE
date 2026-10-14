/*
 * Rectangulo_test.cpp
 *
 *  Created on: 14 oct 2026
 *      Author: Diego Gómez
 */

#include "gtest/gtest.h"
#include "Rectangulo.h"

// test1: area y perimetro
TEST(Rectangulo, test1) {
	Rectangulo rect(3, 4);
	ASSERT_FLOAT_EQ(12.0f, rect.area());
	ASSERT_FLOAT_EQ(14.0f, rect.perimetro());
}

// test2: area y perimetro con puntero a Sharpe
TEST(Rectangulo, test2) {
	Rectangulo rect(8, 2.5f);
	Sharpe *psharpe = &rect;
	ASSERT_FLOAT_EQ(20.0f, psharpe->area());
	ASSERT_FLOAT_EQ(21.0f, psharpe->perimetro());
}



