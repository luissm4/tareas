diccionario={
    "nombre" : "luis",
    "apellido" : "muñoz",
    "edad" : 24 
}

#recorriendo diccionario con items() para obtener las clave 
for datos in diccionario:
    key=datos[0]
    print(f"la clave es {key}")

#recorriendo diccionario con items() para obtener las clave y los valores
for datos in diccionario.items():
    key=datos[0]
    value=datos[1]
    print(f"la clave es {key}")


