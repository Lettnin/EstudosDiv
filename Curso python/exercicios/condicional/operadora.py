minutos = int(input("Digite a quantidade de minutos: "))

plano = (50.0)

if minutos > 100:
    plano = plano + (minutos - 100) * 2.0

print(f"valor a pagar = R$ {plano:.2f}")