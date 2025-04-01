import pandas as pd
import matplotlib.pyplot as plt

# a)
data = pd.read_excel("pedidos_de_asilo.xlsx")
print(data.head())
print(data.shape)

# b)
plt.figure(figsize=(10, 6))
plt.hist(data["Número de Pedidos"].dropna(), bins=100)
plt.title("Distribuição do Número de Pedidos de Asilo")
plt.xlabel("Número de Pedidos")
plt.ylabel("Frequência")
plt.grid(True)
plt.xlim(0, 100)
plt.show()

# c)
plt.scatter(data["Ano"], data["Número de Pedidos"])
plt.title("Número de Pedidos de Asilo ao Longo dos Anos")
plt.xlabel("Ano")
plt.ylabel("Número de Pedidos")
plt.grid(True)
plt.show()
