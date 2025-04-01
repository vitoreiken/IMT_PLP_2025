VP = 50
VN = 120
FP = 10
FN = 20

acuracia = (VP + VN) / (VP + VN + FP + FN)
precisao = VP / (VP + FP)
revocacao = VP / (VP + FN)
f1_score = 2 * (precisao * revocacao) / (precisao + revocacao)

print(f"Acurácia: {acuracia:.3f}")
print(f"Precisão: {precisao:.3f}")
print(f"Revocação: {revocacao:.3f}")
print(f"F1-Score: {f1_score:.3f}")
