class CuentaBancaria:
    #LUIS MUÑOZ
    def __init__(self, sal_in=0):
        self.saldo = sal_in

    def depositar(self, cantidad):
        if cantidad > 0:
            self.saldo += cantidad
            return f"Has depositado ${cantidad:2}. Saldo actual: ${self.saldo:2}"
        else:
            return "La cantidad tiene q ser mayor a cero."

    def retirar(self, cantidad):
        if cantidad > self.saldo:
            return "Fondo insuficiente."
        elif cantidad <= 0:
            return "La cantidad a retirar tiene q ser mayor a cero."
        else:
            self.saldo -= cantidad
            return f"Has retirado ${cantidad:2}. Saldo actual: ${self.saldo:2}"

    def consultar_saldo(self):
        return f"Saldo actual: ${self.saldo:2}"

cuenta = CuentaBancaria(3000)

print(cuenta.consultar_saldo())
print(cuenta.depositar(700))
print(cuenta.retirar(600))
print(cuenta.retirar(100))
print(cuenta.consultar_saldo())
