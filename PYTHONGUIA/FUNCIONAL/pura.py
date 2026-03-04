def sumar(a, b):                                # Función PURA: solo depende de sus parámetros
    return a + b                                # Retorna suma sin modificar estado externo

print(sumar(5, 3))                              # Siempre retorna 8 (mismo input = mismo output)
print(sumar(5, 3))                              # Segunda llamada: mismo resultado
