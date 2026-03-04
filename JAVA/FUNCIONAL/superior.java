public class superior {                    // Clase principal
    
    static void ejecutar(Runnable accion) {     // Función que recibe otra acción
        accion.run();                           // Ejecutar la acción recibida
    }                                           // Runnable es tipo para funciones
    
    public static void main(String[] args) {    // Método principal
        ejecutar(() -> System.out.println("Hola")); // Pasar función directa (lambda)
    }
}
