#include <stdio.h>                              // Librería para entrada/salida

void saludar() {                                // Función normal (la acción)
    printf("Hola\n");                           // Imprimir saludo
}

void ejecutar(void (*func)()) {                 // Función que recibe otra función
    func();                                     // Ejecutar la función recibida
}                                               // (*func) es un puntero a función

int main() {                                    // Función principal
    ejecutar(saludar);                          // Pasar 'saludar' como dato
    return 0;                                   // Fin del programa
}
