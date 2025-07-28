import tkinter as tk

class AnalizadorSentimientos:
    def __init__(self, master):
        self.master = master
        self.master.title("Analizador de Sentimientos")
        self.master.geometry("350x150")
        self.master.configure(bg="lightblue")  

        self.label = tk.Label(master, text="Hola, escribe como quieres ir al trabajo:", bg="lightblue")
        self.label.pack(pady=7)

        self.text_input = tk.Text(master, height=1, width=20)
        self.text_input.pack(pady=5)

        self.analizar_button = tk.Button(master, text="ver", command=self.analizar_texto)
        self.analizar_button.pack(pady=5)

        self.resultado_label = tk.Label(master, text="", bg="lightblue")
        self.resultado_label.pack(pady=10)

    def analizar_texto(self):
        texto = self.text_input.get("1.0", tk.END)
        sentimiento = self.obten_sentimiento(texto)
        self.resultado_label.config(text=f"Sentimiento: {sentimiento}")

    def obten_sentimiento(self, texto):
        if "bien" in texto or "excelente" in texto:
            return "Positivo para iniciar tu dia"
        elif "mal" in texto or "feo" in texto:
            return "Negativo, ve a desayunar"
        else:
            return "Neutral, agarra taxi "

if __name__ == "__main__":
    root = tk.Tk()
    app = AnalizadorSentimientos(root)
    root.mainloop()