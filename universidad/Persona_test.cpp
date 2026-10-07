/*
 * Persona_test.cpp
 *
 *  Created on: 7 oct 2026
 *      Author: Diego Gómez
 */

#include "gtest/gtest.h"
#include "Persona.h"

// Test constructor
TEST(Persona, constructor) {
	// Creo una persona y un objeto dummy
	Persona p1("123456789A", "MiNombre", "Mis Apellidos");
	Persona p2;
	// Solo tiene que haber 1 persona en la lista
	ASSERT_EQ(p2.nPersonas(),1);
	// Comprobar que su id es correcto
	ASSERT_TRUE(p2.isOnList("123456789A"));
	// Comprobar que no hay otro id
	ASSERT_FALSE(p2.isOnList("000000000B"));
}

// Test destructor
TEST(Persona, destructor) {
	// Creo una persona
	Persona p1("123456789A", "MiNombre", "Mis Apellidos");
	Persona p2;
	{
		Persona p3("000000000B", "MiNombre 2", "Mis Apellidos 2");
		// Solo tiene que haber 2 personas en la lista
		ASSERT_EQ(p2.nPersonas(),2);
		// Comprobar que su id es correcto
		ASSERT_TRUE(p2.isOnList("000000000B"));
	}
	// Solo tiene que haber 1 personas en la lista
	ASSERT_EQ(p2.nPersonas(),1);
	// Comprobar que su id es correcto
	ASSERT_FALSE(p2.isOnList("000000000B"));
}

// Test print
TEST(Persona, print) {
	// Creo 2 personas y un objeto dummy
	Persona p1("123456789A", "MiNombre", "Mis Apellidos");
	Persona p2;
	Persona p3("000000000B", "MiNombre 2", "Mis Apellidos 2");
	// Escribir la identificacion de cada persona
	std::cout << p1.printPersona() << std::endl;
	std::cout << p3.printPersona() << std::endl;
	// Escribir la lista de personas
	p2.print();
}
