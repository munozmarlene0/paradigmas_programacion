public class funcionpura {                      // Clase principal (requerida en Java)
    
    public static int sumar(int a, int b) {     // Función PURA: solo depende de sus parámetros
        return a + b;                           // Retorna suma sin modificar estado externo
    }
    
    public static void main(String[] args) {    // Método principal (punto de entrada)
        System.out.println(sumar(5, 3));        // Siempre retorna 8 (mismo input = mismo output)
        System.out.println(sumar(5, 3));        // Segunda llamada: mismo resultado
    }
}
