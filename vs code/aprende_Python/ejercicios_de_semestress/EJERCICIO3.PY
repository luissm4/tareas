class Estudiante:
    def __init__(self, nomb,edad):
        self.__nombre = nomb
        self.__edad = edad
        self.__notas = []

    def agregar_notas(self, nueva_nota):
        if nueva_nota < 0 or nueva_nota > 50:
            raise ValueError("error")
        self.__notas.append(nueva_nota)
    
    def calcular_promedio(self):
        if len(self.__notas) == 0:
            return 0
        return sum(self.__notas) / len(self.__notas)
    def obtener_nomb(self):
        return self.__nombre
    def obtener_edad(self):
        return self.__edad
    
estudiante=Estudiante("brayan", 20)
estudiante.agregar_notas(45)
estudiante.agregar_notas(30)
print(f"Nombre: {estudiante.obtener_nomb()}")
print(f"Nombre: {estudiante.obtener_edad()}")
print(f"notas: {estudiante.calcular_promedio()}")