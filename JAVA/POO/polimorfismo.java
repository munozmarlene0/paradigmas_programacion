class Animal {
    public void hacerSonido() {               // Método base
        System.out.println("Sonido genérico");
    }
}

class Perro extends Animal {
    public void hacerSonido() {               // Sobrescribe método padre
        System.out.println("Guau Guau");
    }
}

class Gato extends Animal {
    public void hacerSonido() {               // Sobrescribe método padre
        System.out.println("Miau Miau");
    }
}

public class polimorfismo {
    public static void main(String[] args) {
        Animal a1 = new Perro();              // Perro como Animal
        Animal a2 = new Gato();               // Gato como Animal
        a1.hacerSonido();                     // Salida: Guau Guau
        a2.hacerSonido();                     // Salida: Miau Miau
    }
}