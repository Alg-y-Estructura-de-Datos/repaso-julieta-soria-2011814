#include <iostream>
using namespace std;
void marcarAsiento(bool *asiento);

int main() {
    const int numAsientos = 10; //para que se pueda usar esta cantidad en otras partes del codigo
    bool asientos[numAsientos] = {false}; //syntax para poder inicializar el array
    int asientoElegido;

    cout << "Estado inicial de los asientos" <<endl;
    for (int i = 0; i < numAsientos; i++) {
        cout << "Asiento " << i + 1 <<
    }


    return 0;
}

void marcarAsiento(bool *asiento){
    if(*asiento == true){
        cout << "El asiento ya esta ocupado" << endl;
    } else {
        *asiento = true;
    }
}