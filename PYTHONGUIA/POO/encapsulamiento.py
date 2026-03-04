class Persona:                                  # Definición de la clase Persona
    def __init__(self):                         # Constructor: inicializa el objeto
        self.__edad = 0                         # Atributo privado (doble guión bajo)
    
    def set_edad(self, e):                      # Método público para establecer edad
        if e > 0:                               # Validación: edad debe ser positiva
            self.__edad = e                     # Asignar valor si es válido
    
    def get_edad(self):                         # Método público para obtener edad
        return self.__edad                      # Retornar valor del atributo

p = Persona()                                   # Crear objeto de tipo Persona
p.set_edad(25)                                  # Llamar método público para establecer edad
print(p.get_edad())                             # Llamar método público para obtener edad
