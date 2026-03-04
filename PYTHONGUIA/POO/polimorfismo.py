class Animal:
    def hacerSonido(self):                    # Método base
        print("Sonido genérico")

class Perro(Animal):
    def hacerSonido(self):                    # Sobrescribe método padre
        print("Guau Guau")

class Gato(Animal):
    def hacerSonido(self):                    # Sobrescribe método padre
        print("Miau Miau")

a1 = Perro()                                  # Perro como Animal
a2 = Gato()                                   # Gato como Animal
a1.hacerSonido()                              # Salida: Guau Guau
a2.hacerSonido()                              # Salida: Miau Miau