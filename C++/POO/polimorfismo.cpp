#include <iostream>
using namespace std;

class Animal {
public:
    virtual void hacerSonido() {              // Método virtual (polimórfico)
        cout << "Sonido genérico" << endl;
    }
};

class Perro : public Animal {
public:
    void hacerSonido() override {             // Sobrescribe método padre
        cout << "Guau Guau" << endl;
    }
};

class Gato : public Animal {
public:
    void hacerSonido() override {             // Sobrescribe método padre
        cout << "Miau Miau" << endl;
    }
};

int main() {
    Animal *a1 = new Perro();                 // Perro como Animal
    Animal *a2 = new Gato();                  // Gato como Animal
    a1->hacerSonido();                        // Salida: Guau Guau
    a2->hacerSonido();                        // Salida: Miau Miau
    return 0;
}