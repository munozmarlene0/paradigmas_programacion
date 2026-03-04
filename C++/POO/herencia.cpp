#include <iostream>                             // Librería para entrada/salida
using namespace std;                            // Usar espacio de nombres estándar

class Animal {                                  // Clase Padre
public:                                         // Sección pública
    void comer() {                              // Método de la clase Padre
        cout << "Está comiendo" << endl;        // Imprimir mensaje
    }
};

class Perro : public Animal {                   // Clase Hija hereda de Animal
public:                                         // Sección pública
    void ladrar() {                             // Método propio de Perro
        cout << "Está ladrando" << endl;        // Imprimir mensaje
    }
};

int main() {                                    // Función principal
    Perro p;                                    // Crear objeto Perro
    p.comer();                                  // Usa método heredado de Animal
    p.ladrar();                                 // Usa método propio de Perro
    return 0;                                   // Fin del programa
}
