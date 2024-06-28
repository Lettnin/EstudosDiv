
#include <stdio.h>

int main()
{ 
	int a,b,c;
    printf("Digite um valores: ");
    scanf("%d", &a);
    printf("Digite outro valores: ");
    scanf("%d", &b);
    printf("Digite outro valores: ");
    scanf("%d", &c);

    if ((a > b) && (a > c)){
        printf("A eh maior");
    
    }else if ((b > a) && (b > c)){
        printf("B eh o maior ");

    }else{
        printf("C eh o maior");
    }   

	return 0;}