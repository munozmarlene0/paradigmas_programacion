def duplicar(x):                                # Función 1: duplicar
    return x * 2

def sumar1(x):                                  # Función 2: sumar 1
    return x + 1

x = 5                                           # Valor inicial
print(sumar1(duplicar(x)))                      # Composición: sumar1(duplicar(5))
