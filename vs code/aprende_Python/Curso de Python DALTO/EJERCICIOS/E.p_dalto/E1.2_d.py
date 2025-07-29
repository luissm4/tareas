#le pedimo al user que escriba una frase 
frase=input("digite una frase y le calculamos en cuanto time puede decirlo: ")

#creamos una lista con todas las palabras de al frase(se separan cada que haya un espacio en blanco)
palabras_separadas=frase.split(" ")

#usamos len() para ver la cantidad de elementos que hay en la lista
cantidad_de_palabras =len(palabras_separadas)

#en caso de que dure mas de un minuto en decirlo, le dacimos que pare un poco
if cantidad_de_palabras > 120:
    print("ey para loco no te pedi una cancion")

#calculamos cuanto tardaria en decir las palabras y se lo decimos
print(f"dijiste {cantidad_de_palabras} palabras, y tardarias {cantidad_de_palabras/2} segundo en decirlo")
print(f"el viejo dalto tardaria{cantidad_de_palabras+100//2*1.3/100} segundos")

