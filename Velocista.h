#pragma once
#include "Competidor.h";
#include <string>
using namespace std;

class Velocista:public Competidor {
	double velocidad_max = 0;
public:
	Velocista(string name, string country, double maxvel);
	double getVelocidad_max();
	virtual int getTipo() const override;
	~Velocista();
};

