#include "Saltador.h"
#include "Competidor.h"
#include <string>
using namespace std;

Saltador::Saltador(string name, string country, double strength) :Competidor(nombre, pais) {

}

double Saltador::getFuerza() {
	return fuerza;
}

int Saltador::getTipo() const{
	return 2;
}
Saltador::~Saltador() {}
