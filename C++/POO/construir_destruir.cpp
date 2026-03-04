#include <iostream>
using namespace std;

class Vida {
public:
    Vida() { cout << "Objeto Creado" << endl; }    // Constructor: nace el objeto
    ~Vida() { cout << "Objeto Destruido" << endl; }// Destructor: muere el objeto
};

int main() {
    Vida v;                                       // Crea objeto (llama Constructor)
    return 0;                                     // Fin scope (llama Destructor)
}
