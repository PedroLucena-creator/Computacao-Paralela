// Faça o programa que apresenta a seguinte saída, perguntando ao usuário o número máximo (no exemplo, 9). Este número deve ser sempre ímpar.

//Pedro Lopes de Lucena - 32055633
//Thiago de Oliveira Aguirre - 32089589

#include<stdio.h>
#include<stdlib.h>

int main() {

    int n, a, b;

    printf("Digite o numero máximo da saída em formato de triangulo. OBS: O número deve ser ímpar.\n");
    scanf("%d", &n);
    printf("\n");

    if (n % 2 ==0)
    {
       printf("numero invalido.\n");
       return 1;
    }
    else
    {
        for( a = 0; a<= (n / 2) + 1; a++)
        {
            for ( b = a + 1; b <= n - a; b++ )
            {
                printf("%d ",b);
            }

            printf("\n");

            for ( b = 0; b < (a + 1) * 2; b++ )
              printf(" ");
         }
    }
    return 0;
}