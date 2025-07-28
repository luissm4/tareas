#Calculadora simple:
#Pide al usuario dos números y una operación (+, -, *, /). Realiza la operación y muestra el resultado. Si la operación no es válida, muestra un mensaje de error.

print("Hola en lo siguiente escribe dos numeros y la operacion que desees (+, -, *, /) ")
num1=float(input("Digite un numero: "))
num2=float(input("Digite un numero: "))
Op=(input("digite operacion (+, -, *, /): "))


suma=num1+num2
resta=num1-num2
multi=num1*num2
divi=num1/num2

if Op=="+":
    print(f"la suma es: {suma}")
elif Op=="-":
    print(f"la resta es: {resta}")
elif Op=="*":
    print(f"la multi es: {multi}")
elif Op=="/":
    print(f"la division es: {divi}")
else:
    print("No es valido intenta nuevvamente")
