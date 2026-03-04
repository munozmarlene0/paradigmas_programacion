public class lambda {                           // Clase principal
    public static void main(String[] args) {    // Método principal
        
        // Lambda: (parametros) -> expresión
        java.util.function.IntUnaryOperator por2 = x -> x * 2;  // Lambda Java 8+
        System.out.println(por2.applyAsInt(5)); // Usar lambda: 5 × 2 = 10
    }
}