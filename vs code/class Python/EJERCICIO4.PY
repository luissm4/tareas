class   Libro:
    #LUIS MUÑOZ
    def __init__(self, titulo,autor, t_pag):
        self.__titulo = titulo
        self.__autor = autor
        self.__t_pag = t_pag
        self.__page_act=1

    def pasar_pagina(self,pagina):
        if self.__page_act+pagina>self.__t_pag:   
            raise ValueError("error")
        self.__page_act+=pagina
        

    def regresar_pagina(self,pagina):
        if self.__page_act-pagina<1:
            raise ValueError("error")
        self.__page_act-=pagina

    def obtener_pagina_actual(self):
        return self.__page_act
    def informacion(self):
        return{
            "titulo": self.__titulo,
            "autor": self.__autor,
            "total de paginas": self.__t_pag,
            "pagina actual": self.__page_act,
        }
    
libro=Libro("TERRA VERDE","luisito chans",150)
print(libro.informacion())
libro.pasar_pagina(110)
print(f"Paginas siguientes:{libro.obtener_pagina_actual()}")
libro.regresar_pagina(40)
print(f"paginas regresadas:{libro.obtener_pagina_actual()}")    