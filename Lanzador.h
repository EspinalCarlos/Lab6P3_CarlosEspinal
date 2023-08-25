#pragma once
#include <string>
#include "Competidor.h"
using namespace std;
class Lanzador:public Competidor{
	double fuerza = 0.0;
public:
	Lanzador(string name, string country, double strength);
	double getFuerza();
	virtual int getTipo() const override;
	~Lanzador();
};

