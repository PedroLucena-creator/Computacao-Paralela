//Pedro Lopes de Lucena - 32055633
//Thiago de Oliveira Aguirre - 32089589
#include <stdio.h>

void Transposta(int Matriz[][4], int N)
{
    int i, j;
    int aux;
    for (i = 0; i < N; i++)
    {
        for (j = i; j < N; j++) 
        {
            aux = Matriz[i][j];
            Matriz[i][j] = Matriz[j][i];
            Matriz[j][i] = aux;
        }
    }
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("%d \t", Matriz[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int matriz[4][4] = { {1,3,4,5}, {6,7,8,9}, {10,11,12,13}, {14,15,16,17} };
    Transposta(matriz, 4);

    return 0;
}