import math

base = float(input("Digite a base do retangulo: "))
altura = float(input("Digite a altura do retangulo: "))

area = base * altura
perimetro = 2 *(base + altura)
diagonal = math.sqrt(base**2 + altura**2)

print(f"A area do retangulo é: {area:.4f}")
print(f"O perimetro do retangulo é: {perimetro:.4f}")
print(f"A diagonal do retangulo é: {diagonal:.4f}")
      