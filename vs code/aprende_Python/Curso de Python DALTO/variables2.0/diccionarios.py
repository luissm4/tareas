#creando diccioinario con dict()
diccionario=dict(nombre="luis", apellido="munoz")

#las listas no pueden ser claves y usamos fronzenset para meter conjuntos
diccionario={frozenset(["luis","munoz"]):"jajaja"}

#creando diccionario con fromkeys() valor por defecto: none
diccionario=dict.fromkeys(["nombre", "apellido"])

#creando diccionario con fromkeys() cambiando el valor por defecto a: gaviria
diccionario=dict.fromkeys(["nombre", "apellido"],"gaviria")


print(diccionario)
