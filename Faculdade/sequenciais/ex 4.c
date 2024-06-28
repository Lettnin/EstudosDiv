
#include <stdio.h>

int main()
{
	float pd =0.28; //28%
	float i = 0.45; //45%
	float cf;
	float soma;
		printf("escreva o custo de fabrica do carro: ");
		scanf("%f" , &cf);
		
		soma  = cf + (pd *cf) + (i*cf);
		
		printf("O custo final do carro :  %.3f", soma);
	
	return 0;
}

