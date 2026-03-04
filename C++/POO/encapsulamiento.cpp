#include <iostream>                             // Librería para entrada/salida
using namespace std;                            // Usar espacio de nombres estándar

class Persona {                                 // Definición de la clase Persona
private:                                        // Sección privada (oculta al exterior)
    int edad;                                   // Atributo privado: solo la clase puede acceder
    
public:                                         // Sección pública (accesible al exterior)
    void setEdad(int e) {                       // Método público para establecer edad
        if (e > 0) {                            // Validación: edad debe ser positiva
            edad = e;                           // Asignar valor si es válido
        }
    }
    
    int getEdad() {                             // Método público para obtener edad
        return edad;                            // Retornar valor del atributo
    }
};

int main() {                                    // Función principal del programa
    Persona p;                                  // Crear objeto de tipo Persona
    p.setEdad(25);                              // Llamar método público para establecer edad
    cout << p.getEdad() << endl;                // Llamar método público para obtener edad
    // p.edad = 25;                             // ❌ ERROR: no se puede acceder directamente
    return 0;                                   // Fin del programa
}
