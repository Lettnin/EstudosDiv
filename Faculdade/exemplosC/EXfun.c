#include <stdio.h>
int levalor (){
    int valor;
    printf("Digite um valor: ");
    scanf("%d", &valor);
    while(valor <= 0){
    printf("Valor invalido\nDigite um novo valor: ");
    scanf("%d",&valor);
  }
return valor;
}

  int main(){
    int v1,v2,v3;
  v1=levalor();
  v2=levalor();
  v3=levalor();
}

