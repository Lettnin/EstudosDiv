#include <stdio.h>

int main()
{
	int a;
		printf("Digite sua nota: ");
		scanf("%d", &a);
		
		if (a>=0 && a<=5)
			printf("D");
		
		else if (a>5 && a<=7)
			printf("C");
		
		else if (a>7 && a<=9)
			printf("B");
		
		else
			printf("A");
		
	return 0;
}

