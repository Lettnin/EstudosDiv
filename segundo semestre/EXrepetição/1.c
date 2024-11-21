#include <stdio.h>

int main()
{
  float a, b, media, soma;
  printf("Escreva as suas notas das avaliacoes: ");
  scanf("%f \n %f", &a, &b);

  soma = a + b;
  media = soma / 2;

  if (media >= 3 && media <= 7)
  {
    printf("Voce tirou: %.2f voce ficou de EXAME!", media);
  }
  else if (media < 3)
  {
    printf("Voce tirou: %.2f voce foi reprovado!", media);
  }
  else
  {
    printf("Voce tirou: %.2f voce esta aprovado!", media);
  }
}
