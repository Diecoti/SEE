/*
 * Circulo_test.cpp
 *
 *  Created on: 14 oct 2026
 *      Author: Diego Gómez
 */

#include "gtest/gtest.h"
#include "Circulo.h"

// test1: area y perimetro con radio 5
TEST(Circulo, test1) {
	Circulo<double> c(5.0);
	ASSERT_DOUBLE_EQ(M_PI * 25, c.area());
	ASSERT_DOUBLE_EQ(2 * M_PI * 5, c.perimetro());
}
