#include <stdio.h>

int main()
{
	int a;
		printf("Digite sua idade: ");
		scanf("%d", &a);
		
		if (a>=5 && a<=7)
			printf("Infantil A");
		
		else if (a>7 && a<=10)
			printf("Infantil B");
		
		else if (a>10 && a<=13)
			printf("Juvenil A");
			
		else if (a>13 && a<=17)
			printf("Juvenil B");
		else
			printf("ADULTO");
			
			
		

	return 0;
}

