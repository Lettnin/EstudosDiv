#include <stdio.h>

int main()
{
	int senha;
	
	while(senha != 2002){
	printf("Digite a senha: ");
	scanf("%d", &senha);
	
		if(senha == 2002){
			printf("Acesso permitido!");
		}
		else{
			printf("Senha invalida! Tente novamente \n");
			}
	}
	return 0;
}

