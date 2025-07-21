import tkinter as tk
from tkinter import messagebox

class AnalizadorSentimientos:
    def __init__(self, master):
        self.master = master
        self.master.title("Analizador de Sentimientos")

        self.label = tk.Label(master, text="Ingresa tu texto:")
        self.label.pack()

        self.text_input = tk.Text(master, height=10, width=50)
        self.text_input.pack()

        self.analizar_button = tk.Button(master, text="Analizar", command=self.analizar_texto)
        self.analizar_button.pack()

        self.resultado_label = tk.Label(master, text="")
        self.resultado_label.pack()

    def analizar_texto(self):
        texto = self.text_input.get("1.0", tk.END)
        sentimiento = self.obten_sentimiento(texto)
        self.resultado_label.config(text=f"Sentimiento: {sentimiento}")

    def obten_sentimiento(self, texto):
        # Este es un análisis simple, puedes mejorar la lógica
        if "bueno" in texto or "excelente" in texto:
            return "Positivo"
        elif "malo" in texto or "terrible" in texto:
            return "Negativo"
        else:
            return "Neutral"

if __name__ == "__main__":
    root = tk.Tk()
    app = AnalizadorSentimientos(root)
    root.mainloop()