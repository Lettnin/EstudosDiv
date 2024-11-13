#include <stdio.h>

int main()
{
	int a;
	printf("Digite um valor: ");
	scanf("%d",&a);
	
	if (a > 0){
		printf("POSITIVO");}
	else if(a < 0){
			printf("NEGATIVO");}
		else
			printf("ZERO");
	
	return 0;
}

