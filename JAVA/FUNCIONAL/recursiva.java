public class recursiva {                        // Clase principal
    static int factorial(int n) {               // Función recursiva
        if (n == 0) return 1;                   // Caso base: si es 0, retorna 1
        return n * factorial(n - 1);            // Caso recursivo: n × factorial(n-1)
    }
    
    public static void main(String[] args) {    // Método principal
        System.out.println(factorial(5));       // Calcular factorial de 5
    }
}
