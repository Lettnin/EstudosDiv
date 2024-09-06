#include <stdio.h>
int main(){
  int i,v[2];
  int temp;
  float media;
  int somador=0;
  int medias;

  for(i=0; i<2; i++){
  printf("Digite um valor[%d]: ", i+1);
  scanf("%d", &temp);
    if(temp > 0){
      v[1] = temp;
    }
    else{
      printf("Valor informado invalido, por favor digite um valor maior que 0: ");
      i--;
    }
  }

  for(i=0; i<2; i++){
    somador += v[i];
    }
    media = somador / 2;
  
  printf("A media aritmetica eh: %.2f\n", media);

  for(i=0; i<2; i++){
    if (v[i] == media){
    medias = medias + 1;
    }
  }
  printf("A quantidade de numero na media foi: %d", medias);
}