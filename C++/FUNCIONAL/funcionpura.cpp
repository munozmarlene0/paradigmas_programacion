#include <iostream>                             // Librería para entrada/salida
using namespace std;                            // Usar espacio de nombres estándar

int sumar(int a, int b) {                       // Función PURA: solo depende de sus parámetros
    return a + b;                               // Retorna suma sin modificar estado externo
}

int main() {                                    // Función principal del programa
    cout << sumar(5, 3) << endl;                // Siempre retorna 8 (mismo input = mismo output)
    cout << sumar(5, 3) << endl;                // Segunda llamada: mismo resultado
    return 0;                                   // Fin del programa
}
