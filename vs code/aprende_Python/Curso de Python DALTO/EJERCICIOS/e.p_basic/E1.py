#1. Escribe un programa que pida al usuario un número y diga si es positivo, negativo o cero.

 
num = int(input("número y diga si es positivo, negativo o cero digite numero: "))

if num > 0:
    print(f"{num} positivo")
elif num < 0:
    print(f"{num} negativo ")
else:
    print(f"{num} cero")