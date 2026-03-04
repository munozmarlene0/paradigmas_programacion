class Animal:                                   # Clase Padre
    def comer(self):                            # Método de la clase Padre
        print("Está comiendo")                  # Imprimir mensaje

class Perro(Animal):                            # Clase Hija hereda de Animal
    def ladrar(self):                           # Método propio de Perro
        print("Está ladrando")                  # Imprimir mensaje

p = Perro()                                     # Crear objeto Perro
p.comer()                                       # Usa método heredado de Animal
p.ladrar()                                      # Usa método propio de Perro
