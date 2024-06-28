#include <stdio.h>

int main()
{
	int lados,medida_lado,perimetro,area;

	printf("Digite o numero de lados do poligono (3, 4 ou 5): ");
  scanf("%d", &lados);

    if (lados == 3 || lados == 4) {
      // Lendo a medida do lado apenas para triângulos e quadrados
      printf("Digite a medida do lado do poligono: ");
      scanf("%d", &medida_lado);
    }
  
  if (lados == 3)
  {
    perimetro = (lados * medida_lado);
    printf("Triangulo e o do seu perimetro eh %d.", perimetro);
  }
  else if (lados == 4)
  {
    area = (medida_lado * medida_lado);
    printf("QUADRADO e o valor da sua area eh %d.", area);
  }
  else if (lados == 5)
  {
    printf("PENTAGONO");
  }

  return 0;
}