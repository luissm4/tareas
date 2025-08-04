#creando un bucle con for in
animales=["perro","gatos","buho"]
for animal in animales:
    print(f"los animales son: {animal}")


numeros=[21,56,78]
for numero in numeros:
    resultado=numero+10
    print(f"el resultado de los numeros es: {resultado}")

#itirando dos listas del mismo tamaño al mismo time con zip
for animal,numero in zip (animales,numeros):
    print(f"la lista1 es: {animal} ")
    print(f"la lista2 es: {numero}")

#rango no optima para recorrer una lista con su indice (no funciona en conjunto)
for num in range(len(numeros)):
    print(numeros[num])

#forma correcta de recorrer una lista con un indice
for num in enumerate(numeros):
    indice=num[0]
    valor=num[1]
    print(f"el indice es : {indice} y el valor es: {valor}")

#usando for y al final un else para terminar bucle
for numero in numeros:
    print(f"el numero es {numero} ")
else:
    print("termino bucle")
    

#todo lo anterior funciona iugual para tuplas y conjuntos
 