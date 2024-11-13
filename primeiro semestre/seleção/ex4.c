#include <stdio.h>

int main()
{
	int A,B,C;
	
	printf("Digite o lado de um triangulo: ");
	scanf("%d", &A);
	printf("Digite o lado de um triangulo: ");
	scanf("%d", &B);
	printf("Digite o lado de um triangulo: ");
	scanf("%d", &C);
	
	
	if (!(A < (B+C)))
		printf("Nao pode ser um lado de um triangulo"); 
	
	else if (!(B < (C+A)))
		printf("Não pode ser um lado de um triangulo"); 
	
	else if (!(C < (A+B)))
		printf("Não pode ser um lado de um triangulo"); 
	
	else 
		printf("Pode ser lado de um triangulo");
	
	return 0;
}

