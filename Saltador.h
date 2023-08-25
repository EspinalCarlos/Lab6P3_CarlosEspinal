#pragma once
#include "Competidor.h"
#include <string>
using namespace std;
class Saltador: public Competidor{
	double fuerza = 0.0;
public:
	Saltador(string name, string country, double strength);
	
	double getFuerza();
	virtual int getTipo() const override;
	~Saltador();
};

