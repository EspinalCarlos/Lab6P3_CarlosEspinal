#pragma once
#include "Competencia.h"
#include <string>
#include <vector>
using namespace std;
class CienMPlanos:public Competencia{
public:
	CienMPlanos() :Competencia(nombre_competencia, distancia, record_mundial){}
	~CienMPlanos();


};

