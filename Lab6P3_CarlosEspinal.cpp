#include <iostream>
#include <vector>
#include <string>
#include "Competencia.h"
#include "Competidor.h"
#include "Lanzador.h"
#include "Saltador.h"
#include "Velocista.h"
#include "CienMPlanos.h"
#include "SaltoTriple.h"
#include "LanzamientoDisco.h"

using namespace std;

void menu() {
    cout << "---- MENU PRINCIPAL ---- \n" << "1. Agregar Competidores \n" << "2. Ver Competidores \n" << "3. Simular competencias \n"<< "4. Salir \n";
}

void menucomp() {
    cout << "---- Agregar Competidores ---- \n" << "1. Agregar Velocista \n" << "2. Agregar Saltador \n"<< "3. Agregar Lanzador \n" << "4. Salir \n";
}

void menusim() {
    cout << "---- Simular Competencia ---- \n" << "1. 100mPlanos \n"<< "2. Salto Triple \n" << "3. Lanzamiento de disco \n" << "4. Salir \n";
}



int main() {
    int opcion;
    vector<Competidor*> competidores;
    do {
        int opcioncomp, opcionsim, cont = 0,ind1,ind2;
        string nomcomp, nompais;
        double variablecomp;
        CienMPlanos sim;
        SaltoTriple sim2;
        LanzamientoDisco sim3;
      
        menu();
        cin >> opcion;
        cout << endl;
        switch (opcion) {
        case 1:
            cout << "Ingrese el nombre del competidor: ";
            cin.ignore();
            getline(cin, nomcomp);
            cout << endl << "Ingrese el pais del competidor: ";
            cin.ignore();
            getline(cin, nompais);
            cout << endl;
            menucomp();
            cin >> opcioncomp;
            cout << endl;
            switch (opcioncomp) {
            case 1:
                cout << "Ingrese la velocidad maxima del velocista: ";
                cin >> variablecomp;
                cout << endl;
                competidores.push_back(new Velocista(nomcomp, nompais, variablecomp));
                break;
            case 2:
                cout << "Ingrese la fuerza del saltador: ";
                cin >> variablecomp;
                cout << endl;
                competidores.push_back(new Saltador(nomcomp, nompais, variablecomp));
                break;
            case 3:
                cout << "Ingrese la fuerza del lanzador: ";
                cin >> variablecomp;
                cout << endl;
                competidores.push_back(new Lanzador(nomcomp, nompais, variablecomp));
                break;
            case 4:
                break;
            }
            break;
        case 2:
            if (competidores.size() == 0) {
                break;
            }
            cout << endl;
            for (Competidor* compet : competidores) {
                cout << cont << ". " << compet->getNombre() << " - " << compet->getPais() << endl;
                cont++;
            }
            cout << endl;
            break;
        case 3:
            cout << endl;
            menusim();
            cin >> opcionsim;
            switch (opcionsim) {
            case 1:
                cout << "---- Velocistas disponibles ---- \n";
                for (Competidor* compet : competidores) {
                    if (compet->getTipo() == 1)cout << cont << ". " << compet->getNombre() << " - " << compet->getPais()<< endl;
                    cont++;
                } 
                cout << endl;
                cout << "Ingrese el primer velocista: ";
                cin >> ind1;
                cout << endl;
                cout << "Ingrese el segundo velocista: ";
                cin >> ind2;
                cout << "\n\n";
                sim = CienMPlanos();
                sim.competir((competidores[ind1]), (competidores[ind2]));
                cout << "\n\n";
                break;
            case 2:
                cout << "---- Velocistas disponibles ---- \n";
                for (Competidor* compet : competidores) {
                    if (compet->getTipo() == 2)cout << cont << ". " << compet->getNombre() << " - " << compet->getPais() << endl;
                    cont++;
                }
                cout << endl;
                cout << "Ingrese el primer saltador: ";
                cin >> ind1;
                cout << endl;
                cout << "Ingrese el segundo saltador: ";
                cin >> ind2;
                cout << "\n\n";
                sim2 = SaltoTriple();
                sim2.competir((competidores[ind1]), (competidores[ind2]));
                cout << "\n\n";


                break;
            case 3:
                cout << "---- Velocistas disponibles ---- \n";
                for (Competidor* compet : competidores) {
                    if (compet->getTipo() == 3)cout << cont << ". " << compet->getNombre() << " - " << compet->getPais() << endl;
                    cont++;
                }
                cout << endl;
                cout << "Ingrese el primer Lanzador: ";
                cin >> ind1;
                cout << endl;
                cout << "Ingrese el segundo Lanzador: ";
                cin >> ind2;
                cout << "\n\n";
                sim3 = LanzamientoDisco();
                sim3.competir((competidores[ind1]), (competidores[ind2]));
                cout << "\n\n";

                break;
            case 4:
                break;

            }
        case 4:
            opcion = 4;
        }

    } while (opcion != 4);

}
