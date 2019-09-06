//
// Created by Maikol Guzman  on 2019-09-05.
//

#include "Cama.h"
Cama::Cama(){}

Cama::Cama(const std::string& codigo, bool estado):codigo(codigo),estado(estado){}

Cama::~Cama(){}

const std::string& Cama::getCodigo() {}

void Cama:: setCodigo(const std::string& codigo){}

bool Cama:: isEstado() const{}

void Cama:: setEstado(bool estado){}

std::string Cama::toString() {}

