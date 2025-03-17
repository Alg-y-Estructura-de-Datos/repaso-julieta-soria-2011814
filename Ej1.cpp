#include <iostream>
using namespace std;

// Ejercicio 1 de repaso
void intercambiarJugos(float &cantNaranja, float &cantManzana);

int main() {
    float cantNaranja = 0, cantManzana = 0;
    cout << "Ingresa la cantidad de jugo de naranja" << endl;
    cin >> cantNaranja;
    cout << "Ingresa la cantidad de jugo de manzana" << endl;
    cin >> cantManzana;

    cout << "Antes del intercambio" << endl;
    cout << "La cantidad de jugo de manzana es: " << cantManzana << endl;
    cout << "La cantidad de jugo de naranja es: " << cantNaranja << endl;

    intercambiarJugos(cantNaranja, cantManzana);

    cout << "\nDespues del intercambio" << endl;
    cout << "La cantidad de jugo de manzana es: " << cantManzana << endl;
    cout << "La cantidad de jugo de naranja es: " << cantNaranja << endl;



    return 0;
}

void intercambiarJugos(float &cantNaranja, float &cantManzana){
    float aux;
    aux = cantManzana;
    cantManzana = cantNaranja;
    cantNaranja = aux;
}