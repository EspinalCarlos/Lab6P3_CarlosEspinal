#include <string>
#pragma once
using namespace std;

class Competidor{
protected:
	string nombre;
	string pais;
public:
	Competidor(string name, string country);
	string getNombre();
	string getPais();
	virtual int getTipo() const = 0;
	~Competidor();
};

