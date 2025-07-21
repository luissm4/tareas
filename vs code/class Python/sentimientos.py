import tkinter as tk

# Crear la ventana principal
root = tk.Tk()
root.title("Sentimientos")
root.geometry("300x300")

# Etiqueta de bienvenida
label = tk.Label(root, text="Hola, describe que sientes")
label.pack(pady=10)

# Campo de entrada
entrada = tk.Entry(root)
entrada.pack()

# Etiqueta para mostrar el saludo (debe ser definida antes de usarla en la función)
saludo_label = tk.Label(root, text="")
saludo_label.pack(pady=40)

def mostrar_saludo():
    nombre = entrada.get()
    saludo_label.config(text=f"Hola, {nombre}")

# Botón para saludar
boton_saludar = tk.Button(root, text="Saludar", command=mostrar_saludo)
boton_saludar.pack(pady=10)

# Iniciar el bucle principal
root.mainloop()