#pragma once
#include "Competencia.h"
#include <string>
#include <vector>
using namespace std;
class CienMPlanos:public Competencia{
public:
	CienMPlanos();
	~CienMPlanos();
	virtual void competir(Competidor* pers1, Competidor* pers2);
};

