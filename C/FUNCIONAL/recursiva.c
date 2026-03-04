#include <stdio.h>                              // Librería para entrada/salida

int factorial(int n) {                          // Función recursiva
    if (n == 0) return 1;                       // Caso base: si es 0, retorna 1
    return n * factorial(n - 1);                // Caso recursivo: n × factorial(n-1)
}

int main() {                                    // Función principal
    printf("%d\n", factorial(5));               // Calcular factorial de 5
    return 0;                                   // Fin del programa
}
