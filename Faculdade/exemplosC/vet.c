#include <stdio.h>
int main()
{
  float notas[25],media_turma,soma;
  int c, c2=0;

  soma=0;

  for (c=0;c <= 24; c++){
    printf("Digite nota: ");
    scanf ("%d",&notas[c]);
    soma+=notas[c];
  }
  media_turma = soma/25;

  for(c=0; c <= 24;c++){
    if (notas[c]>media_turma)
    c2++;
  }
  printf("A media da turma e: %d", c2);
  return 0;
}