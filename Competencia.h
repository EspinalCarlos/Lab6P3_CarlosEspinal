#pragma once
#include <string>
#include <vector>
#include "Competidor.h"
using namespace std;

class Competencia{
protected:
	string nombre_competencia;
	double distancia;
	double record_mundial;
public:
	Competencia();
	~Competencia();
	string getNombreCompetencia();
	double getDistancia();
	double getRecordMundial();
	virtual void competir(Competidor* pers1, Competidor* pers2);

};

