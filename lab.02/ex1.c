// Ex1. Crie um programa capaz de ler os dados de uma matriz quadrada de inteiros.
// Ao final da leitura o programa deverá imprimir o número da linha que contém o menor dentre todos os números lidos.

//Pedro Lopes de Lucena - 32055633
//Thiago de Oliveira Aguirre - 32089589

#include<stdio.h>
#include<stdlib.h>

int main () 
{
    int k, i, j, result;
    printf("Digite a dimensao da matriz quadrada\n");
    scanf("%d", &k);
    printf("=======================================\n");

    int a[k][k];
    printf("Digite os valores da matriz\n");
    for (i=0; i<k; i++)
    {
        printf("Valores para a %d linha: \n", i+1);
        for (j=0; j<k; j++)
        {
            scanf("%d", &a[i][j]);
        }
        printf("=======================================\n");
    }
    result = a[0][0];
    for (i=0; i<k; i++)
    {
        for (j=0; j<k; j++)
        {
            if (a[i][j] < result)
                result = a[i][j];
        }
    }
    printf("O menor valor da matriz: %d\n", result);
}