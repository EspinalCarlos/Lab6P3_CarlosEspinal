#pragma once
#include "Competencia.h"
#include <string>
#include <vector>
using namespace std;
class SaltoTriple:public Competencia{
public:
	SaltoTriple();
	~SaltoTriple();
	virtual void competir(Competidor* pers1, Competidor* pers2);
};

