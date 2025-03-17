#include <iostream>
using namespace std;

//codigo del profe
unsigned long long factorialRecursiva (int n){
    if (n == 0){
        return 1;
    } else {
        return n * factorialRecursiva(n - 1);
    }
}
// Fin codigo del profe

int main() {
    int numero;
    unsigned long long resultado = 1;
    // El unsigned es para que no esté signada y el long long vaya en su totalidad a los positivos.
    cout << "Ingrese un numero entero para calcular su factorial: " << endl;
    cin >> numero;

    if (numero < 0){
        cout<<"El factorial no esta definido para numeros negativos" << endl;
    } else {
        for (int i = numero; i > 1 ; i--) {
            resultado *= i;
        }
        cout << "El resultado es: " << resultado << endl;
    }

    return 0;
}
