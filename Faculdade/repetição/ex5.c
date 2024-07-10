//A série de Fibonacci é uma sequência de números em que os dois primeiros são 0 e 1 e a partir daí cada número é a soma dos anteriores, ou seja  𝑡n =𝑡n-1 + 𝑡n-2 Faça um algoritmo que escreve os x primeiros termos da série e a soma destes termos. //

#include <stdio.h>
int main()
{
  int x,i, t1 = 0, t2 = 1 , novotermo, sum;

  printf("Digite o numero de termos: ");
  scanf("%d", &x);

  if (x <= 0) 
  {
    printf("O numero de termos deve ser positivo.\n");
    return 1;
  } 
  else if (x == 1) 
  {
    printf("Serie de Fibonacci ate %d termos: %d\n", x, t1);
    printf("Soma dos termos: %d\n", t1);
    return 0;
  }
  printf("Serie de Fibonacci ate %d termos: %d, %d", x, t1, t2);

  for (i = 3; i <= x; ++i) 
    {
    novotermo = t1 + t2;
    sum += novotermo;
    printf(", %d", novotermo);
    t1 = t2;
    t2 = novotermo;
    }

    printf("\nSoma dos termos: %llu\n", sum);

return 0;
}