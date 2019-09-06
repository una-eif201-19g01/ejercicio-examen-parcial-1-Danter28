//
// Created by Maikol Guzman  on 2019-09-05.
//

#include "Cama.h"

Cama::Cama(){}

Cama::Cama(const std::string& codigo, bool estado):codigo(codigo),estado(estado){}

Cama::~Cama(){}

const std::string& Cama::getCodigo() { return codigo; }

void Cama::setCodigo(const std::string& codigo) { this->codigo = codigo; }

bool Cama::isEstado() const { return estado; }

void Cama::setEstado(bool estado) { this->estado = estado; }

std::string Cama::toString() {
	std::string est=(isEstado()==1) ? "ocupado" : "vacio";
	std::string texto;
	texto = "codigo: " + getCodigo() + "\nEstado: " + est + "\n";
	return texto;
}
