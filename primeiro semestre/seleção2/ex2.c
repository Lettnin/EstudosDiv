#include <stdio.h>

int main()
{
	int n1,n2;

	printf("Digite o numero de gols marcados pelo gremio: ");
	scanf("%f",&n1);
	printf("Digite o numero de gols marcados pelo inter: ");
	scanf("%f",&n2);

  if (n1 > n2)
  {
    printf("GREMIO ");
  }
  else if (n1 < n2)
  {
    printf("INTER ");
  }
  else
  {
    printf("EMPATE ");
  }

  
return 0;
}