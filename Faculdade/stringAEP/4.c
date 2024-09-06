// Construa um programa que leia uma string s, e dois caracteres a
// e b. Em seguida, o programa deve substituir todas as ocorrências
// do caractere a na string s pelo caractere b. (Observação: a e b
// são informados pelo usuário e podem ser qualquer letra)  

#include <stdio.h>
#include <string.h>
int main(){
   char texto[100];
   char A,B;
   int i;
   
  printf("Digite uma frase: ");
  fgets(texto, sizeof(texto), stdin);

  printf("Digite o caractere a ser substituido: ");
  scanf(" %c", &A);
  printf("Digite o caractere que vai substituir: ");
  scanf(" %c", &B);

  for(i=0; texto[i] != '\0'; i++){
    if(texto[i] == A){
      texto[i] = B;
    }
  }
  
  printf("Texto alterado ficou: %s", texto);

}