class Contacto:
    #LUIS MUÑOZ
    def __init__(self, nombre, Celular, email):
        self.nombre = nombre
        self.Celular = Celular
        self.email = email

    def mostrar_informacion(self):
        return f"Nombre: {self.nombre}, Celular: {self.Celular}, Email: {self.email}"

    def actualizar_Celular(self, nuevo_Celular):
        self.Celular = nuevo_Celular
        return f"Celular actualizado a: {self.Celular}"

    def actualizar_email(self, nuevo_email):
        self.email = nuevo_email
        return f"Email actualizado a: {self.email}"

contacto1 = Contacto("Pablo rico", "302-456-7890", "rico@gmail.com")

print(contacto1.mostrar_informacion())
print(contacto1.actualizar_Celular("350-765-4321"))
print(contacto1.actualizar_email("pab2@hotmail.com"))
#información actualizada
print(contacto1.mostrar_informacion())
