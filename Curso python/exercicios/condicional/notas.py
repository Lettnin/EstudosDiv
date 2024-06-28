n1 = float(input("Digite sua primeira nota: "))
n2 = float(input("Digite sua segunda nota: "))

nota_final = (n1 *2 + n2 * 2) / 2

print(f"NOTA FINAL = {nota_final}")

if nota_final < 60.00:
    print("REPROVADO")