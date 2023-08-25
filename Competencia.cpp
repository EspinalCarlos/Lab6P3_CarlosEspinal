#include "Competencia.h"
#include <string>
#include <vector>
using namespace std;

Competencia::Competencia() {
}
string Competencia::getNombreCompetencia() { return nombre_competencia; }
double Competencia::getDistancia() { return distancia; }
double Competencia::getRecordMundial() { return record_mundial; }
Competencia::~Competencia(){}
void Competencia::competir(Competidor* pers1, Competidor* pers2){}


