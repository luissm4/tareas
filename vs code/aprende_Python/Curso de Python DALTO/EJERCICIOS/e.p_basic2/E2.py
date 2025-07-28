#Contador de vocales:
#Solicita al usuario una frase y cuenta cuántas vocales tiene. Muestra el resultado.

text=str(input("digite texto: "))

total=text.count("a")+text.count("e")+text.count("i")+text.count("o")+text.count("u")

print(f"el total es: {total}")
