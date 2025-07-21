class Rectangulo:
    # LUIS MUÑOZ
    def __init__(self, largo, ancho):
        self.__largo = largo
        self.__ancho = ancho
        
#con este metodo podemos cambiar ls dimensiones    
    def cambiar_dimensiones(self, nuevo_largo, nuevo_ancho):
        if nuevo_largo<=0 or nuevo_ancho<=0:
            raise ValueError("todo debe ser mayor qeu cero")
        self.__largo = nuevo_largo
        self.__ancho = nuevo_ancho

    def calcular_area(self):
        return self.__largo * self.__ancho
    def calcular_perimetro(self):
        return 2 * (self.__largo + self.__ancho)
    
    def consultar_dimensiones(self):
        return self.__largo, self.__ancho

r=Rectangulo(5,3)
print("area:", r.calcular_area()) 
print("perimetro:", r.calcular_perimetro())
print("dimensiones", r.consultar_dimensiones())

r.cambiar_dimensiones(7,4)
print("nueva area:", r.calcular_area())
print("nuevas dimenciones: ", r.consultar_dimensiones())