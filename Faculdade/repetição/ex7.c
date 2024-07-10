// Faça um programa que leia 10 números, considere que serão lidos números inteiros e positivos. Se o número lido for menor que 7,  calcule o seu fatorial. Se for maior ou igual a 7, calcule a soma de 1 até o número lido.//

#include <stdio.h>
int main()
{
  int c,n1,fatorial,cf;

  for(c=1; c<=10; c++){
    printf("Digite um valor de 1 a 10: ");
    scanf("%d", &n1);
    if (n1<7){
    cf=n1;

    while(cf>=2){
    fatorial = fatorial*cf;
    cf--;
    }
  printf("O fatorial do seu numero e: %d\n", fatorial);
  }

  else{
    cf=1;
    fatorial = n1;
     
    while(cf <= n1){
    fatorial = fatorial + cf;
    cf++;
    }
  
  printf("A soma do seu numero de 1 ate ele e: %d\n",fatorial);
  }
  
  cf = 0;
  fatorial = 1;
  
  }
return 0;
}