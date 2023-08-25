#include "LanzamientoDisco.h"
#include "Lanzador.h"
#include <string>
#include <vector>
#include <iostream>

LanzamientoDisco::LanzamientoDisco() :Competencia() {
	nombre_competencia = "LanzamientoDisco";
	distancia = 0;
	record_mundial = 74.08;
}
LanzamientoDisco::~LanzamientoDisco(){}
void LanzamientoDisco::competir(Competidor* pers1,Competidor* pers2) {
	Lanzador* lanz1 = (Lanzador*)pers1;
	Lanzador* lanz2 = (Lanzador*)pers2;

	double gravedad = 9.8;
	double velocidad1 = (lanz1->getFuerza()) * 20;
	double velocidad2 = (lanz2->getFuerza()) * 20;
	double angulo1, angulo2;
	if ((lanz1 -> getFuerza()) < 10){
		angulo1 = 30;
	}
	else if ((lanz1->getFuerza()) >= 10 && (lanz1->getFuerza()) < 15) {
		angulo1 = 40;
	}
	else if ((lanz1->getFuerza()) >= 15 && (lanz1->getFuerza()) <= 20) {
		angulo1 = 45;
	}

	if ((lanz2->getFuerza()) < 10) {
		angulo2 = 30;
	}
	else if ((lanz2->getFuerza()) >= 10 && (lanz2->getFuerza()) < 15) {
		angulo2 = 40;
	}
	else if ((lanz2->getFuerza()) >= 15 && (lanz2->getFuerza()) <= 20) {
		angulo2 = 45;
	}

	double resultado1 = ((velocidad1 * velocidad1) * (sin(2 * angulo1))) / gravedad;
	double resultado2 = ((velocidad2 * velocidad2) * (sin(2 * angulo2))) / gravedad;

	cout << "---- RESULTADOS DE COMPETENCIA ----";
	cout << "Distancia " << lanz1->getNombre() << ": " << resultado1 << endl;
	cout << "Distancia " << lanz2->getNombre() << ": " << resultado2 << endl;

	if (resultado1 > resultado2) {
		cout << "El ganador es " << lanz1->getNombre() << " (" << lanz1->getPais() << ") ";
		if (resultado1 > record_mundial) {
			record_mundial = resultado1;
			cout << "con un nuevo record mundial (" << record_mundial << ")! ";
		}
	}
	else {
		cout << "El ganador es " << lanz2->getNombre() << " (" << lanz2->getPais() << ") ";
		if (resultado2 > record_mundial) {
			record_mundial = resultado2;
			cout << "con un nuevo record mundial (" << record_mundial << ")! ";
		}
	}

}
