//
// Created by Maikol Guzman  on 2019-09-05.
//

#include "Pabellon.h"

Pabellon::Pabellon(){}

Pabellon::Pabellon(int tamano):tamano(tamano){ Cama** camas = new Cama * [tamano]; }

Pabellon::Pabellon(char id, char genero, int tamano) : id(id), genero(genero), tamano(tamano),cantidad(0){ 
	
	Cama** camas = new Cama * [tamano];
	for (int contador = 0; contador < tamano; ++contador) {
		camas[contador] = NULL ;
	}
}

Pabellon::~Pabellon() { delete[]camas; }

Cama* Pabellon::obtenerCama(int numCama) const { camas[numCama]->toString(); }

void Pabellon::agregarCama(Cama* camaN){
	for (int contador = 0; contador <= cantidad; contador) {
		if (camas[contador]==NULL) {
			camas[contador] = camaN;
			cantidad++;
			break;
		}
		
		
	}
}

void Pabellon::eliminarCama(Cama* cama) {
	cama->~Cama();
	delete cama;
}
void Pabellon::eliminarTodasLasCamas() { 
	for (cantidad; cantidad >= 0; cantidad--) 
	{ camas[cantidad]->~Cama(); }
	delete[]camas;
}

char Pabellon::getId() const { return id; }

void Pabellon::setId(char id) { this-> id =id; }

char Pabellon::getGenero() const { return genero; }

void Pabellon::setGenero(char genero) { this-> genero = genero; }

int Pabellon::getTamano() const { return tamano; }

void Pabellon::setTamano(int tamano) { this->tamano; }

int Pabellon::getCantidad() const { return cantidad; }

void Pabellon::setCantidad(int cantidad) { this->cantidad = cantidad; }

std::string Pabellon::toString() {
	std::string toString;
	for (int contador = 0; contador <= cantidad; contador++) {
		toString += "cama [" + std::to_string(contador) + "]:\n" + camas[contador]->toString() + "\n\n";	
	}
	return toString;
}
