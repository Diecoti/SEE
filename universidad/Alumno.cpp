/*
 * Alumno.cpp
 *
 *  Created on: 7 oct 2026
 *      Author: Diego Gómez
 */

#include "Alumno.h"

template <int curso>
Alumno<curso>::~Alumno() {
	// TODO Auto-generated destructor stub
}

template <int curso>
Alumno<curso>::Alumno(std::string ID,
		std::string Nombre,
		std::string Apellidos) : Persona::Persona(ID, Nombre, Apellidos)
{
}

// Matricula en la asignatura si no está en la lista
template <int curso>
bool Alumno<curso>::matricula(std::string asignatura) {
	for(unsigned int i=0; i < courseList.size(); i++) {
		if(courseList[i]==asignatura) {
			return false;	// Ya matriculado
		}
	}
	courseList.push_back(asignatura);	// inserta asignatura en la lista
	return true;
}

// Escribe la lista de asignaturas del alumno
template <int curso>
void Alumno<curso>::print() {
	std::cout << "Listado de asignaturas en curso " << curso << "-" << curso+1 << std::endl;
	std::cout << " Alumno: " << printPersona() << std::endl;
	for(unsigned int i=0; i < courseList.size(); i++) {
		std::cout << "  Asignatura: " << courseList[i] << std::endl;
	}
}

// Curso 24-25
template class Alumno<24>;
