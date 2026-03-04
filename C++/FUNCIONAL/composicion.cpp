#include <iostream>                             // Librería para entrada/salida
using namespace std;                            // Usar espacio de nombres estándar

int duplicar(int x) { return x * 2; }           // Función 1: duplicar
int sumar1(int x) { return x + 1; }             // Función 2: sumar 1

int main() {                                    // Función principal
    int x = 5;                                  // Valor inicial
    cout << sumar1(duplicar(x)) << endl;        // Composición: sumar1(duplicar(5))
    return 0;                                   // Fin del programa
}
