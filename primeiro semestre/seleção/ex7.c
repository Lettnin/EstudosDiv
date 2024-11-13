#include <stdio.h>

int main()
{
	int n1;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n1);
    
    if(n1 % 2)
    {
        printf("O numero %d eh impar", n1);
    }
    else{
        printf("O numero %d eh par", n1);
    }
    if (n1 > 0)
    {
        printf(" e positivo", n1);
    }
    else if(n1 < 0)
    {
        printf(" e negativo", n1);
    }
    else
    {
        printf(" e zero", n1);
    }

return 0;
}