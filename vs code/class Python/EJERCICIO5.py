class CuentaBancaria:
    #LUIS MUÑOZ
    def __init__(self, sal_in=0):
        self.saldo = sal_in

    def depositar(self, cantidad):
        if cantidad > 0:
            self.saldo += cantidad
            return f"Has depositado ${cantidad:2}. Saldo actual: ${self.saldo:2}"
        else:
            return "La cantidad tiene que ser mayor a cero."

    def retirar(self, cantidad):
        if cantidad > self.saldo:
            return "Fondo insuficiente."
        elif cantidad <= 0:
            return "La cantidad a retirar tiene que ser mayor a cero."
        else:
            self.saldo -= cantidad
            return f"Has retirado ${cantidad:2}. Saldo actual: ${self.saldo:2}"

    def consultar_saldo(self):
        return f"Saldo actual: ${self.saldo:2}"

class CuentaAhorro(CuentaBancaria):
    def __init__(self, sal_in=0, interes=0.0):
        super().__init__(sal_in)
        self.__interes = interes 

    def aplicar_interes(self):
        interes_ganado = self.saldo * (self.__interes / 100)
        self.saldo += interes_ganado
        return f"Interés aplicado. Saldo actual: ${self.saldo:2}"

    def consultar_interes(self):
        return f"Porcentaje de interés actual: {self.__interes}%"


cuenta_ahorro = CuentaAhorro(3000, 5.0)  
print(cuenta_ahorro.consultar_saldo())
print(cuenta_ahorro.depositar(700))
print(cuenta_ahorro.retirar(600))
print(cuenta_ahorro.aplicar_interes())  
print(cuenta_ahorro.consultar_interes())  
print(cuenta_ahorro.consultar_saldo())
