import random

class Personaje:
    def __init__(self, vida, ataque, defensa):
        self.__vida = vida
        self.__ataque = ataque
        self.__defensa = defensa

    def get_vida(self):
        return self.__vida

    def set_vida(self, vida):
        if 0 <= vida <= 100:
            self.__vida = vida
        elif vida < 0:
            self.__vida = 0
        else:
            self.__vida = 100

    def get_ataque(self):
        return self.__ataque

    def set_ataque(self, ataque):
        self.__ataque = ataque

    def get_defensa(self):
        return self.__defensa

    def set_defensa(self, defensa):
        self.__defensa = defensa

    def atacar(self, objetivo):
        raise NotImplementedError("Este método lo sobrescribo por las subclases")

class Guerrero(Personaje):
    def __init__(self, vida, ataque, defensa):
        super().__init__(vida, ataque, defensa)

    def atacar(self, objetivo):
        daño = self.get_ataque() * 1.2 - objetivo.get_defensa()
        daño = max(0, daño) 
        print(f"Guerrero ataca causando {daño} de daño")
        objetivo.set_vida(objetivo.get_vida() - daño)
        print(f"Vida restante del objetivo: {objetivo.get_vida()}")

class Mago(Personaje):
    def __init__(self, vida, ataque, defensa):
        super().__init__(vida, ataque, defensa)

    def atacar(self, objetivo):
        daño = self.get_ataque() 
        print(f"Mago ataca ignorando la defensa y causando {daño} de daño")
        objetivo.set_vida(objetivo.get_vida() - daño)
        print(f"Vida restante del objetivo: {objetivo.get_vida()}")

class Arquero(Personaje):
    def __init__(self, vida, ataque, defensa):
        super().__init__(vida, ataque, defensa)

    def atacar(self, objetivo):
        if self.get_ataque() > objetivo.get_defensa():
            daño = (self.get_ataque() - objetivo.get_defensa()) * 2
        else:
            daño = self.get_ataque() - objetivo.get_defensa()
        daño = max(0, daño) 
        print(f"Arquero ataca causando {daño} de daño")
        objetivo.set_vida(objetivo.get_vida() - daño)
        print(f"Vida restante del objetivo: {objetivo.get_vida()}")

def batalla(personaje1, personaje2):
    turno = 1
    while personaje1.get_vida() > 0 and personaje2.get_vida() > 0:
        print(f"\nTurno {turno}:")
        if turno % 2 != 0:
            personaje1.atacar(personaje2)
        else:
            personaje2.atacar(personaje1)
        turno += 1

    if personaje1.get_vida() > 0:
        print("\nEl personaje 1 ha ganado la batalla!")
    else:
        print("\nEl personaje 2 ha ganado la batalla!")

guerrero = Guerrero(100, 30, 20)
mago = Mago(80, 40, 10)

batalla(guerrero, mago)

