#include <stdio.h>

int main()
{
	int cod,n1,n2,n3;
	float media;

		printf("Digite seu codigo de aluno: ");
		scanf("%d", &cod);
		
		printf("Digite sua nota: ");
		scanf("%d", &n1);
		printf("Digite sua outra nota: ");
		scanf("%d", &n2);
		printf("Digite sua outra nota: ");
		scanf("%d", &n3);

		media = ((n1 * 4) + (n2 * 3) + (n3 * 3)) / 10.0;

		if (media > 5){
			printf("Seu codigo de aluno eh %d suas tres notas: %d, %d, %d\n", cod,n1,n2,n3);
			printf("Sua media ficou: %.1f, com isso voce foi APROVADO", media);
		}
		else{
			printf("Seu codigo de aluno eh %d suas tres notas: %d, %d, %d\n", cod,n1,n2,n3);
			printf("Sua media ficou: %.1f, com isso voce foi REPROVADO", media);
		}
			
	return 0;
}

