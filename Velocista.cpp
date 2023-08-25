#include "Velocista.h"
#include <string>

using namespace std;

Velocista::Velocista(string name, string country, double maxvel):Competidor(nombre,pais) {
	velocidad_max = maxvel;
	nombre = name;
	pais = country;
}

double Velocista::getVelocidad_max() { return velocidad_max; }

int Velocista::getTipo() const {
	return 1;
}

Velocista::~Velocista(){}
