#include <stdio.h>
#include <string.h>

  struct h {
    int hora,minutos,segundos;
  };
  struct h horas,t[2],diferenca;
int main(){
  int segInicio,segfim,difseg;
  for (int i =0; i<2; i++){
    printf("Digite a hora: ");
    scanf("%d", &t[i].hora);
    printf("Digite os minutos: ");
    scanf("%d", &t[i].minutos);
    printf("Digite os segundos: ");
    scanf("%d", &t[i].segundos);
    printf("%d : %d : %d\n", t[i].hora,t[i].minutos,t[i].segundos);
  }
}