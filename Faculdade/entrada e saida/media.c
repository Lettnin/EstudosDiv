#include <stdio.h>

//int = inteiro
//%d = uso quando uso int para numeros inteiro

int main(){
    float a,b,nota_final;
    printf("Digite sua nota: ");
    scanf("%f",&a);
    printf("Digite sua outra nota: ");
    scanf("%f",&b);

    nota_final = (a+b)/2;

    printf("Sua nota final do semestre: %.2f", nota_final);
    
    }