def produtos_abaixo_minimo(estoque):
    lista_produtos_abaixo_minimo = []
    for i in range(0, len(estoque)):
        if(estoque[i]["quantidade"] < estoque[i]["minimo"]):
            lista_produtos_abaixo_minimo.append(estoque[i]["nome"])
    print(lista_produtos_abaixo_minimo)

estoque = [
    {"nome": "Caneta", "quantidade": 10, "minimo": 15},
    {"nome": "Lápis", "quantidade": 20, "minimo": 10},
    {"nome": "Borracha", "quantidade": 5, "minimo": 8},
]

produtos_abaixo_minimo(estoque)
