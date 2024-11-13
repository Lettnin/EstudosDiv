#include <stdio.h>
#define n_pessoas 500 //define o numero de pessoas
int main(){
  float p[n_pessoas],a[n_pessoas],imc[n_pessoas];
  int i,c=0;

  for(i=0; i<2; i++){
    printf("Digite sua altura em metros %d: \n",i+1);
    scanf("%f" , &a[i]);
    printf("Digite o peso em KG %d: \n",i+1);
    scanf("%f", &p[i]);


    imc[i] = p[i] / (a[i] * a[i]);
    if(imc[i]>30){
      c++;
    }
  }
  printf("Quantas pessoas tem IMC maior que 30: %d\n", c);
}
