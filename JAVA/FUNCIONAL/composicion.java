public class composicion {                      // Clase principal
    static int duplicar(int x) { return x * 2; }// Función 1: duplicar
    static int sumar1(int x) { return x + 1; } // Función 2: sumar 1
    
    public static void main(String[] args) {    // Método principal
        int x = 5;                              // Valor inicial
        System.out.println(sumar1(duplicar(x)));// Composición: sumar1(duplicar(5))
    }
}
