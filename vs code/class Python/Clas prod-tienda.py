class Producto:
    #LUIS MUÑOZ
    def __init__(self, nombre, precio, cant_st):
        self.nombre = nombre
        self.precio = precio
        self.cant_st = cant_st

    def mostrar_informacion(self):
        return f"Producto: {self.nombre}, Precio: ${self.precio:2}, Cantidad en stock: {self.cant_st}"

    def aumentar_stock(self, cantidad):
        self.cant_st += cantidad
        return f"Se han añadido {cantidad} unidades. Stock actual: {self.cant_st}"

    def reducir_stock(self, cantidad):
        if cantidad > self.cant_st:
            return "No hay suficiente stock "
        else:
            self.cant_st -= cantidad
            return f"Se han vendido {cantidad} unidades. Stock actual: {self.cant_st}"

producto1 = Producto("Camiseta", 99, 50)

print(producto1.mostrar_informacion())
print(producto1.aumentar_stock(30))
print(producto1.reducir_stock(7))
#actualizada
print(producto1.mostrar_informacion())
