//Pedro Lopes de Lucena - 32055633
//Thiago de Oliveira Aguirre - 32089589
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int matrizA[2][3];
	int matrizB[3][2];
	int i, j;
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("Insira os elementos das Matriz: \n");
			scanf("%d", &matrizA[i][j]);
		}
	}
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d\t", matrizA[i][j]);

		}
		printf("\n");
	}
	system("pause");
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 2; j++)
		{
			matrizB[i][j] = matrizA[j][i];
		}
	}
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("%d\t", matrizB[i][j]);

		}
		printf("\n");
	}
	system("pause");
	return (0);
}