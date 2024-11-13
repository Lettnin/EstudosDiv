#include <stdio.h>
int main()
{
  int i;
  float salario,ns;

  for (i=1; i<=30; i++)
  {
    do {
    printf("Digite seu salario: ");
    scanf("%f",&salario);
    } while(salario <=0);

    if (salario >= 3000)
      ns =  salario * 1.03;

    else if (salario > 1000)
      ns = salario * 1.1;

    else
      ns = salario * 1.15;
    printf("novo salario eh: %.2f\n",ns);
  }


return 0;
}