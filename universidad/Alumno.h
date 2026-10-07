/*
 * Alumno.h
 *
 *  Created on: 7 oct 2026
 *      Author: Diego Gómez
 */

#ifndef ALUMNO_H_
#define ALUMNO_H_

#include "Persona.h"

template <int curso>
class Alumno: public Persona {
public:
	std::vector<std::string> courseList;  // lista asignaturas
	Alumno(std::string ID, // Constructor
			std::string Nombre,
			std::string Apellidos);
	bool matricula(std::string asignatura); //Matricula en asignatura
	void print();		//Escribe lista asignaturas
	virtual ~Alumno();
};

#endif
