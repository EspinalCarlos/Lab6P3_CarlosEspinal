#include "Lanzador.h"
#include <string>
#include "Competidor.h"
using namespace std;

Lanzador::Lanzador(string name, string country, double strength) :Competidor(nombre, pais) {
	fuerza = strength;
	nombre = name;
	pais = country;
}

double Lanzador::getFuerza() {
	return fuerza;
}

int Lanzador::getTipo() const {
	return 3;
}
Lanzador::~Lanzador(){}
