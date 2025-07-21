class calculadora:
    def __init__(self,num1,num2):
        self.num1=num1
        self.num2=num2

    def sumar(self):
        return self.num1+self.num2

operacion=calculadora(10,5)

resultado=operacion.sumar()
print(f"el resultado es: {resultado}")      