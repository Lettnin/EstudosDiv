#include <stdio.h>

//int = inteiro
//%d = uso quando uso int para numeros inteiro

int main(){
	int a,b,resultado;
	printf("digite a altura: ");
	scanf("%d",&a);
	printf("digite a base: ");
	scanf("%d",&b);
	
	resultado= a*b;

	printf("area do triangulo: %d", resultado);
}
	