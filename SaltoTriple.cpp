#include "SaltoTriple.h"
#include <string>
#include <vector>
#include <iostream>
#include "Saltador.h"
using namespace std;

SaltoTriple::SaltoTriple() :Competencia() {
	nombre_competencia = "SaltoTriple";
	distancia = 0;
	record_mundial = 18.29;
}

SaltoTriple::~SaltoTriple() {}

void SaltoTriple::competir(Competidor* pers1, Competidor* pers2) {
	Saltador* salt1 = (Saltador*)pers1;
	Saltador* salt2 = (Saltador*)pers2;

	double resultado1 = 15 + ((salt1->getFuerza()) * 3);
	double resultado2 = 15 + ((salt2->getFuerza()) * 3);

	cout << "\n---- RESULTADOS DE COMPETENCIA ----\n";
	cout << "Distancia " << salt1->getNombre() << ": " << resultado1 << endl;
	cout << "Distancia " << salt2->getNombre() << ": " << resultado2 << endl;

	if (resultado1 > resultado2) {
		cout << "El ganador es " << salt1->getNombre() << " (" << salt1->getPais() << ") ";
		if (resultado1 > record_mundial) {
			record_mundial = resultado1;
			cout << "con un nuevo record mundial (" << record_mundial << ")! ";
		}
	}
	else {
		cout << "El ganador es " << salt2->getNombre() << " (" << salt2->getPais() << ") ";
		if (resultado2 > record_mundial) {
			record_mundial = resultado2;
			cout << "con un nuevo record mundial (" << record_mundial << ")! ";
		}
	}
	delete salt1;
	delete salt2;

}



