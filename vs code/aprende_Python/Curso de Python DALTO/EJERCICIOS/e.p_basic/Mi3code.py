#Pide al usuario tres números y muestra cuál es el mayor.


Num1 = int(input("numero 1: "))
Num2 = int(input("numero 2: "))
Num3 = int(input("numero 3: "))

if Num1 >= Num2 and Num1 >= Num3:
    print(f"El número mayor es: {Num1}")
elif Num2 >= Num1 and Num2 >= Num3:
    print(f"El número mayor es: {Num2}")
else:
    print(f"El número mayor es: {Num3}")