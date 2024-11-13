
#include <stdio.h>

int main()
{
	float n1, n2, n3,media;
	
	printf("escreva sua nota: ");
	scanf("%f", &n1);
	printf("escreva sua nota: ");
	scanf("%f", &n2);
	printf("escreva sua nota: ");
	scanf("%f", &n3);
	
	media = (n1*2+n2*3+n3*5) / 10;
	
	printf("Sua nota final: %.2f", media);
	
	
	return 0;
	
}

