//Crie uma função capaz de substituir todos os números negativos de uma matriz por seu módulo.

//Pedro Lopes de Lucena - 32055633
//Thiago de Oliveira Aguirre - 32089589

#include<stdio.h>
#include<stdlib.h>

void Substitui_Negativo(int Matriz[4][4], int N) //funcao pedida no exercicio
{
    int i, j;
    for(i = 0; i < N ; i ++)
    {
        for(j = 0; j < N; j ++)
        {
            if (Matriz[i][j] < 0)
            Matriz[i][j] = Matriz[i][j] * (-1);
        }
    }
}
void Printa_Matriz(int Matriz[4][4]) //funcao auxiliar
{
    int i, k, c, j;
    printf("Imprimindo valores da matriz positivos...\n");
    for (i=0; i<k; i++) 
    {
	    for (j=0; j<c; j++) 
        {
        printf("%d ", Matriz[i][j]);
        }
        printf("\n");
	}
}

int main()
{
    int matriz[4][4] = { {1,-3,4,5}, {6,7,-8,9}, {-10,11,12,13}, {14,15,16,-17} };
    printf("=======================================\n");
    Substitui_Negativo(matriz,4);
    Printa_Matriz(matriz);
}