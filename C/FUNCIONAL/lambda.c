#include <stdio.h>                              // Librería para entrada/salida
// C no tiene lambdas nativas (solo con extensiones GCC)
// Se usa función normal como equivalente

int por2(int x) { return x * 2; }               // Función normal (equivalente a lambda)

int main() {                                    // Función principal
    printf("%d\n", por2(5));                    // Usar función: 5 × 2 = 10
    return 0;                                   // Fin del programa
}
