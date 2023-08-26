#include "Velocista.h"
#include <string>

using namespace std;

Velocista::Velocista(string name, string country, double maxvel):Competidor(name,country) {
	velocidad_max = maxvel;
	
}

double Velocista::getVelocidad_max() { return velocidad_max; }

int Velocista::getTipo() const {
	return 1;
}

Velocista::~Velocista(){}
