// Uma operação muito comum de manipulação de strings é
// conhecida como TRIM. Trata-se de uma função que recebe uma
// string e remove todos os espaços no início e no fim da string.
// Elabore uma função que realiza esta tarefa

#include <stdio.h>
#include <string.h>
int main(){
  int i,j = 0;
  char ntexto[100],texto[100];

  printf("Digite uma frase: ");
  fgets(texto, sizeof(texto), stdin);
  texto[strcspn(texto, "\n")] = '\0';

  for (i=0; texto[i] != '\0'; i++){
    if (texto[i] != ' '){
      ntexto[j] = texto[i];
      j++;
    }
  }
  ntexto[j] = '\0';
  printf("A palavra sem espacos: %s", ntexto);

  return 0;

}