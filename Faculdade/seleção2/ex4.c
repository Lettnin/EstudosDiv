#include <stdio.h>

int main()
{ 
	float x,y;
  
  printf("Digite o primeiro numero: ");
  scanf("%f",&x);
  printf("Digite o outro valor: ");
  scanf("%f",&y);

  int operadores;
  printf("Escolha uma operacao: \n");
  printf("1. Adicao\n");
  printf("2. Subtracao\n");
  printf("3. Divisao\n");
  printf("4. Multiplicacao\n");
  scanf("%d",&operadores);
  
  
  if (operadores == 1)
  {
    printf("Resultado da soma: %.1f\n", x + y);
  }
  else if (operadores == 2)
  {
    printf("Resultado da subtracao: %.1f\n", x - y);
  }
  else if (operadores == 3)
  {
    printf("Resultado da divisao: %.1f\n", x / y);
  }
  else
  {
    printf("Resultado da multiplicacao: %.1f\n", x * y);
  }
  
return 0;
}