class Vida:
    def __init__(self):                           # Constructor: nace el objeto
        print("Objeto Creado")
    def __del__(self):                            # Destructor: muere el objeto
        print("Objeto Destruido")

v = Vida()                                        # Crea objeto (llama Constructor)
del v                                             # Fuerza destrucción (llama Destructor)
