v1 = int(input("primeiro valor: "))
v2 = int(input("segundo valor: "))
v3 = int(input("terceiro valor: "))

if v1 < v2 & v1 < v3:
    menor = v1
elif v2 < v3:
    menor = v2
else:
    menor = v3
    
print(f"MENOR {menor}")
    