public class Persona {                          // Definición de la clase Persona
    private int edad;                           // Atributo privado: solo la clase puede acceder
    
    public void setEdad(int e) {                // Método público para establecer edad
        if (e > 0) {                            // Validación: edad debe ser positiva
            edad = e;                           // Asignar valor si es válido
        }
    }
    
    public int getEdad() {                      // Método público para obtener edad
        return edad;                            // Retornar valor del atributo
    }
    
    public static void main(String[] args) {    // Método principal (punto de entrada)
        Persona p = new Persona();              // Crear objeto de tipo Persona
        p.setEdad(25);                          // Llamar método público para establecer edad
        System.out.println(p.getEdad());        // Llamar método público para obtener edad
        // p.edad = 25;                         // ❌ ERROR: no se puede acceder directamente
    }
}
