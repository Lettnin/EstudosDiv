#include <stdio.h>

int main(){

  int n1,n2,f,n3;
  n1=0;
  n2=1;

  printf("Quantos algoritmos da sequencia de Fibonacci voce deseja escrever: ");
  scanf("%d", &f);

  if(f==1)
  printf("1");

  while(f>=2){

    if(n1==0 && n2==1)
    printf("%d\n",n2);

    n3=n1+n2;
    printf("%d\n",n3);

    n1=n2;
    n2=n3;
    n3=0;

    f--;
  }  
  return 0;
}