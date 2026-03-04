class Vida {
    public Vida() {                               // Constructor: nace el objeto
        System.out.println("Objeto Creado");
    }
    // Java no tiene destructor explícito, usa Garbage Collector
}

public class contruirdestruir       {
    public static void main(String[] args) {
        new Vida();                               // Crea objeto (llama Constructor)
                                                  // Destruido automáticamente por GC
    }
}
