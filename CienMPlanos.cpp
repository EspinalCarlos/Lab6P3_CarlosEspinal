#include "CienMPlanos.h"
#include "Velocista.h"
#include <string>
#include <iostream>
#include <vector>
using namespace std;

CienMPlanos::CienMPlanos() :Competencia() {
	nombre_competencia = "100mPlanos";
	distancia = 100;
	record_mundial = 9.58;
}
CienMPlanos::~CienMPlanos() {}
void CienMPlanos::competir(Competidor* pers1, Competidor* pers2) {
	Velocista* vel1 = (Velocista*)pers1;
	Velocista* vel2 = (Velocista*)pers2;

	double resultado1 = 400 / (vel1->getVelocidad_max());
	double resultado2 = 400 / (vel2->getVelocidad_max());
	
	cout << "\n---- RESULTADOS DE COMPETENCIA ----\n";
	cout << "Tiempo " << vel1->getNombre() << ": " << resultado1 << endl;
	cout << "Tiempo " << vel2->getNombre() << ": " << resultado2 << endl;

	if (resultado1 < resultado2){
		cout << "El ganador es " << vel1->getNombre() << " (" << vel1->getPais() << ") ";
		if (resultado1 < record_mundial){
			record_mundial = resultado1;
			cout << "con un nuevo record mundial (" << record_mundial << ")! "<< endl;
		}
	}
	else {
		cout << "El ganador es " << vel2->getNombre() << " (" << vel2->getPais() << ") ";
		if (resultado2 < record_mundial) {
			record_mundial = resultado2;
			cout << "con un nuevo record mundial (" << record_mundial << ")! "<< endl;
		}
	}

	delete vel1;
	delete vel2;
}
