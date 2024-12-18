"""calculadora com while
.lower = converte tudo que for mainsculo para minusculo
.startswith = comeca com 
.endswith = termina com

"""

while True:
    numero_1 = input("Digite um valor: ")
    numero_2 = input("Digite um valor: ")
    operador = input("Digite o operador (+-*/): ")
    
    numeros_validos = None
    num_1_float = 0
    num_2_float = 0
    
    try:
        num_1_float = float(numero_1)
        num_2_float = float(numero_2)
        numeros_validos = True
    except:
        numeros_validos = None
        
    if numeros_validos is None:
        print('Um ou ambos os numero digitados sao invalidos.')
        continue
    
    operadores_permitidos = '+-*/'
    
    if operador not in operadores_permitidos:
        print('Operador invalido.')
        continue
    
    if len(operador) > 1:
        print('Digite apenas um operador.')
        continue
        
    if operador == '+':
        print(f'{num_1_float} + {num_2_float}=', num_1_float + num_2_float)
    elif operador == '-':
        print(f'{num_1_float} - {num_2_float}=', num_1_float - num_2_float)
    elif operador == '/':
        print(f'{num_1_float} / {num_2_float}=', num_1_float / num_2_float)
    elif operador == '*':
        print(f'{num_1_float} * {num_2_float}=', num_1_float * num_2_float)
    else:
        'Nunca deveria chegar aqui.'
        
    sair = input('Quer sair? [s]im: ').lower().startswith('s')
    print(sair)
    if sair is True:
        break