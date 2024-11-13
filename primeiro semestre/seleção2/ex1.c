#include <stdio.h>

int main()
{
	float media,n1,n2;

	printf("Digite sua primeira nota: ");
	scanf("%f",&n1);
	printf("Digite sua segunda nota: ");
	scanf("%f",&n2);

	media = (n1+n2)/2.0;

	if (media > 6)
	{
		printf("Voce ficou com %.1f de media. \n", media);
		printf("APROVADO");	
	}	
	else if (media > 3 && media <6)
	{
		printf("Voce ficou com %.1f de media. \n", media);
		printf("EM EXAME");	
	}
	else
	{
		printf("Voce ficou com %.1f de media. \n", media);
		printf("REPROVADO");	
	}
return 0;
}


