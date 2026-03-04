def saludar():                                  # Función normal (la acción)
    print("Hola")                               # Imprimir saludo

def ejecutar(func):                             # Función que recibe otra función
    func()                                      # Ejecutar la función recibida

ejecutar(saludar)                               # Pasar 'saludar' como dato
