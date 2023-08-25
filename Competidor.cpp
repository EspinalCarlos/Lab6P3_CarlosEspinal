#include "Competidor.h"
#include <string>;
#include <vector>

Competidor::Competidor(string name, string country) {
	nombre = name;
	pais = country;
}

string Competidor::getNombre() {
	return nombre;
}
string Competidor::getPais() {
	return pais;
}
Competidor::~Competidor(){}
