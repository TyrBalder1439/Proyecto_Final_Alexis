#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main (){
	srand(static_cast<unsigned int>(time(0)));

    int accion;
    char continuar = 's';
    int puntosRecolectables = 0;

    while (continuar == 's') {
        // Men� principal
        cout << "\n--- Men� Principal ---" << endl;
        cout << "1. Explorar un lugar misterioso" << endl;
        cout << "2. Enfrentarse a un desaf�o" << endl;
        cout << "3. Tomar una decisi�n importante" << endl;
        cout << "4. Recolectar tesoros" << endl;
        cout << "5. Salir del programa" << endl;

        cout << "Elige una acci�n: ";
        cin >> accion;
        
        switch (accion){
        	case 1:
        		//punto de la historia 1 
		}
        
        
        return 0;
}

