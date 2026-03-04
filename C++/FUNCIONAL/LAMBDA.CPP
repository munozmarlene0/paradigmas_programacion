#include <iostream>                             // Librería para entrada/salida
using namespace std;                            // Usar espacio de nombres estándar

int main() {                                    // Función principal
    auto por2 = [](int x) { return x * 2; };    // Lambda: [](parametros){cuerpo}
    cout << por2(5) << endl;                    // Usar lambda: 5 × 2 = 10
    return 0;                                   // Fin del programa
}
