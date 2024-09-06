#include <stdio.h>
#include <math.h>
//int = inteiro
//%d = uso quando uso int para numeros inteiro
//#include <math.h>, para operaçoes matematicas//
//%f = float
// M_PI = pi

int main(){
    float v1,ac;
    printf("Digite o valor do raio: ");
    scanf("%f", &v1);

    ac = pow(v1,2) * 3.14; 

    printf("O resultado do circulo: %.2f", ac);
}
