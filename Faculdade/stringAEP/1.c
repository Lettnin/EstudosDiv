// Escreva um programa que leia um texto pelo teclado. Em
// seguida, faça uma função que inverta e exiba-o na tela.
// Exemplo: Para a string "Bom dia" o programa imprime "aid
// moB" Obs: O objetivo é alterar os caracteres na string, não é
// imprimir ao contrário! 

#include <stdio.h>
#include <string.h>
int main(){
  int i,p1;
  char texto[100];

  printf("Digite uma frase: ");
  fgets(texto, sizeof(texto), stdin);

  // Remover o caractere de nova linha '\n' lido pelo fgets
  texto[strcspn(texto, "\n")] = '\0';
  
  p1 = strlen(texto);

  for (i=0; p1/2>i; i++){
    char temporaria = texto[i];
    texto[i] = texto[p1 - i - 1];
    texto[p1 - i - 1] = temporaria;
  }
  printf("Palavra modificada: %s", texto);

  }