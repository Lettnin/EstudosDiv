#include <stdio.h>

int main()
{
int v1,v2,v3;
int m1,m2,m;

  printf("Digite um valor: ");
  scanf("%d",&v1);
  printf("Digite um valor: ");
  scanf("%d",&v2);
  printf("Digite um valor: ");
  scanf("%d",&v3);

  // Encontra os dois maiores valores
    if (v1 > v2 && v1 > v3) {
      m1 = v1;
      if (v2 > v3) 
      {
        m2 = v2;
        m = v3;
      } 
      else 
      {
        m2 = v3;
        m = v2;
      }
    } else if (v2 > v1 && v2 > v3) {
        m1 = v2;
        if (v1 > v3) 
        {
          m2 = v1;
          m = v3;
        } 
        else 
        {
          m2 = v3;
          m = v1;
        }
    } 
    else 
    {
      m = v3;
      if (v1 > v2) {
        m2 = v1;
        m = v2;
      } 
      else 
      {
        m2 = v2;
        m = v1;
      }
    }

    // Calcula a soma dos dois maiores valores
    int soma = m1 + m2;

    // Imprime o resultado
    printf("A soma dos dois maiores valores eh: %d\n", soma);

    return 0;
}
