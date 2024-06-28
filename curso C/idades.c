#include <stdio.h>

int main()

{
	
	int id1,id2;
	char n1[50],n2[50];
	double idademedia;
	
	printf("Dados da primeira pessoa\n");
	printf("Digite seu nome: ");
	gets(n1);
	printf("Digite sua idade: ");
	scanf("%d", &id1);
	
	printf("Dados da primeira pessoa\n");
	printf("Digite seu nome: ");
	fseek(stdin, 0, SEEK_END);
	gets(n2);
	printf("Digite sua idade: ");
	scanf("%d", &id2);
	
	idademedia = (double) (id1 + id2) / 2;
	
	printf("A idade media de %s e %s eh de %.1lf anos", n1,n2,idademedia);
	
	
	return 0;
}

