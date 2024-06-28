#include <stdio.h>

int main()
{
	int n1, n2;
	
	printf("Digite um valor: ");
	scanf("%d", &n1);
	
	printf("Digite um valor: ");
	scanf("%d", &n2);
	
	if (n1 > n2) {
        int temp = n1;
        n1 = n2;
        n2 = temp;
    }

	printf("Os numeros em ordem crescente fica: %d %d", n1, n2);
	
	
	return 0;
}

