class Contacto:
    #LUIS MUÑOZ
    def __init__(self, nombre, telefono, email):
        self.nombre = nombre
        self.telefono = telefono
        self.email = email

    def mostrar(self):
        print(f"Nombre: {self.nombre}, Teléfono: {self.telefono}, Email: {self.email}")

    def actualizar_telefono(self, telefono):
        self.telefono = telefono

    def actualizar_email(self, email):
        self.email = email

contacto =Contacto("rica manta",  "3021118822", "11rima@gmail.com")

while True:
    opcion = input("\n1. Mostrar contacto\n2. Actualizar teléfono\n3. Actualizar email\n4. Salir\nElige: ")

    if opcion == "1":
        contacto.mostrar()
    elif opcion == "2":
        contacto.actualizar_telefono(input("Nuevo teléfono: "))
    elif opcion == "3":
        contacto.actualizar_email(input("Nuevo email: "))
    elif opcion == "4":
        break
    else:
        print("Opción no válida.")
