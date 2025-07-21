class Mascota:
    #LUIS MUÑOZ
    def __init__(self, nombre, tipo, edad):
        self.nombre = nombre
        self.tipo = tipo
        self.edad = edad

    def mostrar_informacion(self):
        return f"Nombre de mascota: {self.nombre}, Tipo de Animal: {self.tipo}, Edad: {self.edad} años"

    def cambiar_nombre(self, nuevo_nombre):
        self.nombre = nuevo_nombre
        return f"Nombre cambiado: {self.nombre}"

    def aumentar_edad(self):
        self.edad += 2
        return f"La edad de {self.nombre} ha aumentado a {self.edad} años"

mascota1 = Mascota("yane", "Perro", 6)
print(mascota1.mostrar_informacion())
print(mascota1.cambiar_nombre("magali"))
print(mascota1.aumentar_edad())
print(mascota1.mostrar_informacion())
