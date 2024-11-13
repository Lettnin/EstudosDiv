#include <stdio.h>
#include <string.h>
int main(){
  char frase[100],palavra[100];
 
  printf("Digite uma frase: ");
  fgets(frase, sizeof(frase), stdin);
  frase[strcspn(frase, "\n")] = 0;//remove o /n que o fgtes pode ter inserido

  printf("Digite uma palavra: ");
  fgets(palavra, sizeof(palavra), stdin);
  palavra[strcspn(palavra, "\n")] = 0;

    if (strstr(frase,palavra) != NULL){
    printf("A palavra esta na frase: %s", palavra);
    }

    else{
      printf("A palavra nao esta na frase: %s", palavra);
    }
}

