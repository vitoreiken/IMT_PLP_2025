import pandas as pd

# a)
data = {
        "Segurança": [7.8, 6.2, 9.8],
        "Financeiro": [6.7, 4.1, 7.3],
        "Transporte": [2.8, 9.2, 3.4],
        "Tecnologia": [5.6, 4.5, 7.2],
        "Marketing": [8.3, 7.5, 9.1]
}

df = pd.DataFrame(data, index = ["Filial A", "Filial B", "Filial C"])

# b)
df["Media Desempenho"] = df.mean(axis=1)

df["Melhor Desempenho"] = df.idxmax(axis=1)

print(df.sum(numeric_only=True))

# c)
df.to_csv("filiais.csv")
pd.read_csv("filiais.csv")
