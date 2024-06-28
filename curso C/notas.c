#include <stdio.h>

int main(int argc, char **argv)
{
	double nota1,nota2,notafinal;
	
	printf("Digite sua nota: ");
	scanf("%lf", &nota1);
	
	printf("Digite sua nota: ");
	scanf("%lf", &nota2);
	
	notafinal = nota1+nota2;
	
	printf("Sua nota final foi: %.1lf\n", notafinal);
	
	if (notafinal < 60){
		printf("REPROVADO");
	}
	
	return 0;
}

