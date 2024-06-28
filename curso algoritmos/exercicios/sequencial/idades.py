print("Dados da primeira pessoa")
nome1 = input("Digite seu nome: ")
n1 = int(input("Digite sua idade: "))

print("Dados da segunda pessoa")
nome2 = input("Digite seu nome: ")
n2 = int(input("Digite sua idade: "))

media = (n1 + n2)/2

print(f"A idade media de {nome1} e {nome2} é de {media:1f} anos")