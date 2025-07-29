'''Crea un programa que compare dos números y diga cuál es mayor o si son iguales.
Instrucciones:
Pide al usuario dos números.
Usa condicionales para determinar cuál número es mayor.
Muestra un mensaje con el resultado.'''

num1=int(input("Digite num 1: "))
num2=int(input("Digite num 2: "))

if num1 > num2 :
    print(f"Numero {num1} es mayor que {num2}")
elif num1 == num2:
    print(f"numero {num2} es igual a {num1}")
else:
    print(f"numero {num1} es menor que {num2}")
