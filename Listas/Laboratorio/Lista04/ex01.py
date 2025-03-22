import pandas as pd

# a)
data = {
    "Filial A": [7.8, 6.7, 2.8, 5.6, 8.3],
    "Filial B": [6.2, 4.1, 9.2, 4.5, 7.5],
    "Filial C": [9.8, 7.3, 3.4, 7.2, 9.1]
}

df = pd.DataFrame(data, index = ["Segurança", "Financeiro", "Transporte", "Tecnologia", "Marketing"])
print(df)

# b)
pd.insert("Media Desempenho", df.mean(), True)
