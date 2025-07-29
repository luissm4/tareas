#Lista de números pares:
#Pide al usuario un número entero positivo y crea una lista con todos los números pares desde 0 hasta ese número (incluido). Imprime la lista.

num=int(input("Digite numero entero(ej: 2): "))

pares=list(range(0,num+1,2))
print(f"la lista es {pares}")



