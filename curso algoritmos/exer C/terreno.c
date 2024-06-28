#include <stdio.h>

int main()
{
	double  l,c,mq,a,pt;
	
	printf("Digite a larguro do terreno: ");
	scanf("%lf", &l);
	printf("Digite o comprimento do terreno: ");
	scanf("%lf", &c);
	printf("Digite o valor do metro quadrado: ");
	scanf("%2lf", &mq);
	
	a = l*c;
	pt = a*mq;
	
	printf("area do terreno =  %.2lf \n", a);
	printf("preco do terreno: %.2lf \n", pt);

	return 0;
}

