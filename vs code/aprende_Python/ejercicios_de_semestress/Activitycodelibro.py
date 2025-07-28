class libro():
    def __init__(self,titulo,autor,npag):
        self.titulo=titulo
        self.autor=autor
        self.npag=npag
    
    def mostrar_informacion(self):
        print(f"tituo del libro: {self.titulo}")
        print(f"autor: {self.autor}")
        print(f"numero de paginas: {self.npag} ")

libro1=libro ("L bestia", "pablo", 230)
libro2=libro ("viveros", "pablo", 1630)
libro3=libro ("marquez", "pablo", 330)
libro4=libro ("entrada", "pablo", 560)
libro1.mostrar_informacion()
libro2.mostrar_informacion()
libro3.mostrar_informacion()
libro4.mostrar_informacion()

