#pragma once
#include "Competencia.h"
#include <string>
#include <vector>
class LanzamientoDisco:public Competencia{
public:
	LanzamientoDisco();
	~LanzamientoDisco();
	virtual void competir(Competidor* pers1, Competidor* pers2);


};

