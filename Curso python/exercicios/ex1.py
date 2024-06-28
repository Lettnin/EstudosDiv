"""
Faça um programa que peça ao usuário para digitar um número inteiro,
informe se este número é par ou ímpar. Caso o usuário não digite um número
inteiro, informe que não é um número inteiro.
"""

try:
    numero = int(input('Digite um número: '))
    if numero % 2 == 0:
        print(f'o numero s{numero} é PAR')
    else:
        print(f'o numero {numero} é IMPAR')
    
except:
    print('numero digitado não é inteiro')


'''
OUTRA FORMA DE

 if entrada.isdigit():
     entrada_int = int(entrada)
     par_impar = entrada_int % 2 == 0
     par_impar_texto = 'ímpar'

     if par_impar:
         par_impar_texto = 'par'

     print(f'O número {entrada_int} é {par_impar_texto}')
 else:
     print('Você não digitou um número inteiro')

try:
    entrada_int = float(entrada)
    par_impar = entrada_int % 2 == 0
    par_impar_texto = 'ímpar'

    if par_impar:
        par_impar_texto = 'par'

    print(f'O número {entrada_int} é {par_impar_texto}')
except:
    print('Você não digitou um número inteiro')
    '''