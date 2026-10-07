/*
 * Alumno_test.cpp
 *
 *  Created on: 7 oct 2026
 *      Author: Diego Gómez
 */

#include "gtest/gtest.h"
#include "Alumno.h"

// Test matricula
TEST(Alumno, matricula) {
	// Creo 3 alumnos del curso 24 y un objeto dummy
	Alumno<24> a1("123456789A","Nombre 1", "Apellidos 1");
	Alumno<24> a2("000000000B","Nombre 2", "Apellidos 2");
	Alumno<24> a3("111111111C","Nombre 3", "Apellidos 3");
	Persona personList;
	// Tiene que haber 3 personas en la lista
	ASSERT_EQ(personList.nPersonas(),3);
	// Comprobar que uno de los alumnos esta en la lista
	ASSERT_TRUE(personList.isOnList("000000000B"));
	// Matricular a1 en 4 asignaturas
	a1.matricula("ASE");
	a1.matricula("Embebidos");
	a1.matricula("SEM");
	a1.matricula("ASE");
	// No son 4: ASE no se matricula 2 veces
	ASSERT_EQ(a1.courseList.size(),3);
	// Escribir la lista de asignaturas
	a1.print();

	std::cout << " Cuestion a justificar en la memoria" << std::endl;
	Persona *dat;
	dat= &a1;
	dat->print();
}
