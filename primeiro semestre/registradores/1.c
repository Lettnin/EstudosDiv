// Faça um programa que possua uma estrutura para armazenar 2
// horários (hora, minuto, segundo). Esse programa deve ler esses dois
// horários e informar a diferença entre eles (informar a diferença no
// formato hh:mm:ss). 

#include <stdio.h>
#include <string.h>

struct horario
{
  int hora,minuto,segundo;
};

int main(){
struct horario guardah[2];
int i;
for(i=0; i<2; i++){
  printf("Horario %d\n", i+1);
  printf("Digite a hora: ");
  scanf("%d", &guardah[i].hora);
  printf("Digite os minutos: ");
  scanf("%d", &guardah[i].minuto);
  printf("Digite os segundo: ");
  scanf("%d", &guardah[i].segundo);
  printf("%d : %d : %d\n",guardah[i].hora, guardah[i].minuto, guardah[i].segundo);
 }

struct horario diferenca


  

}