#include <stdio.h>
#include <string.h>
int main(){
  int i;
  char s1[20],s2[20],s3[20];
  printf("DIgite uma palavra: ");
  scanf("%s",s1);
  strcpy(s2,s1);
  printf("s1 = %s\ns2 = %s\n", s1,s2);

  strcpy(s3,s1); //copia os dados de s3 para s1, usando essa função
  strcat(s3," ");
  strcat(s3,s2); //função para concatenar os valores da string(concatenar = juntar os valores)
  printf("s1 = %s\ns3 = %s\n", s1,s3);

  return 0;
}