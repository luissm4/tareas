"""Haz un programa que determine si una persona puede entrar a una discoteca.
Instrucciones:
Pide al usuario su edad.
Si tiene menos de 18, muestra un mensaje diciendo que no puede entrar.
Si tiene entre 18 y 60, muestra "Bienvenido".
Si tiene más de 60, muestra "¿Está seguro que desea entrar?"."""
#--------------------------------------------------

edad = int(input("digite edad: "))
entrada = edad

if edad >= 18:
    if edad <= 59:
        print("Bienvenido, disfrute")
    elif entrada >=60:
        entrada= str(input("seguro va entrar? si o no: "))
        if entrada == "si":
            print("Disfrute")
        else:
            print("Sera en otro momento, bye")
else:
    print("eres menor de edad, sorry")
    
