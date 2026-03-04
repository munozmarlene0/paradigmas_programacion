#include <stdio.h>                              // Librería para entrada/salida

int sumar(int a, int b) {                       // Función PURA: solo depende de sus parámetros
    return a + b;                               // Retorna suma sin modificar estado externo
}

int main() {                                    // Función principal del programa
    printf("%d\n", sumar(5, 3));                // Siempre retorna 8 (mismo input = mismo output)
    printf("%d\n", sumar(5, 3));                // Segunda llamada: mismo resultado
    return 0;                                   // Fin del programa
}
