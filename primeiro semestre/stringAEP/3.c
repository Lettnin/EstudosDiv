// Escreva um programa que conte a quantidade de palavras de um
// texto digitado pelo teclado. (Uma palavra é qualquer sequência
// de caracteres separada por um ou mais espaços). 
#include <stdio.h>
#include <string.h>
int main(){
  int cpalavra = 0, a = 0, i=0;
  char texto[100];

  printf("Digite uma frase: ");
  fgets(texto, sizeof(texto), stdin);
  
  while (texto[i] == ' '){
    i++;
  }

  for (a=i; texto[a] != '\0'; a++){
    if (texto[a] == ' ' && texto[a+1] != ' ' && texto[a+1] != '\0'){
      cpalavra++;
    }
  }
  printf("\n%s\n", texto);
  printf("Foram Digitadas %d na frase a cima", cpalavra);

}