preco = float(input("Preco unitario do produto: "))
quantidade = float(input("Quantidade comprada: "))
dinheiro = float(input("dinheiro recebido: "))

troco = dinheiro - (preco * quantidade)


print (f"TROCO = {troco:.2f}")
 