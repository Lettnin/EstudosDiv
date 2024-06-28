#include <stdio.h>

//int = inteiro
//%d = uso quando uso int para numeros inteiro

int main(){
	float a,b,resultado,nota;
	printf("digite sua nota: ");
	scanf("%f",&a);
	printf("digite sua outra nota: ");
	scanf("%f",&b);

	resultado = a+b;
    nota = resultado/2;

	printf("o resultado da divisao: %f" , nota);
      
    } 