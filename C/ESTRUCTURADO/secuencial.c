#include <stdio.h>                              // Librería para entrada/salida

int main() {
    float base = 5.0;                           // Paso 1: Declarar variables base
    float altura = 3.0;                         
    float area;                                 
    area = base * altura;                       // Paso 2: Calcular área (base por altura)
    printf("Área: %.2f\n", area);               // Paso 3: Mostrar resultado
    return 0;                                   // Fin del programa
}