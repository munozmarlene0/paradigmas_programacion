class Animal {                                  // Clase Padre
    public void comer() {                       // Método de la clase Padre
        System.out.println("Está comiendo");    // Imprimir mensaje
    }
}

class Perro extends Animal {                    // Clase Hija hereda de Animal
    public void ladrar() {                      // Método propio de Perro
        System.out.println("Está ladrando");    // Imprimir mensaje
    }
    
    public static void main(String[] args) {    // Método principal
        Perro p = new Perro();                  // Crear objeto Perro
        p.comer();                              // Usa método heredado de Animal
        p.ladrar();                             // Usa método propio de Perro
    }
}
