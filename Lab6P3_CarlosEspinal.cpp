#include <iostream>
#include <vector>

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

int main(){
    int opcion;
    do {
        menu();
        cin >> opcion;
        switch (opcion) {
            case 1:

                break;
        }

    } while (opcion != 4);
    
}
