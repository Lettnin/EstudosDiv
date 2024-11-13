#include <stdio.h>

int main(){

  int a=0,b=1,i=1,f;
  while (i<=6){
    a = (a+b);
    b= (a-b);
    printf("%d",b);
    i++;
  }
  return 0;
}