//Crie uma função capaz de somar os elementos das linhas L1 e L2 de uma matriz. O resultado deve ser colocado na linha L2. Faça o mesmo com a multiplicação.

//Pedro Lopes de Lucena - 32055633
//Thiago de Oliveira Aguirre - 32089589

#include<stdio.h>
#include<stdlib.h>

void Soma_Linha(int m, int n, int Matriz[m][n])
{
    int i, j;
    for(i = 0; i < m ; i ++)
    {
        Matriz[i][j+1] = Matriz[i][j] + Matriz[i][j+1];  
    }
}

void Printa_Matriz(int Matriz[2][2]) //funcao auxiliar
{
    int i, k, c, j;
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
    int matriz[2][2] = { {1,5}, {6,7} };
    printf("=======================================\n");
    Soma_Linha(matriz,2,2);
    Printa_Matriz(matriz);
}