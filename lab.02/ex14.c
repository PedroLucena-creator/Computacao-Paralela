//Pedro Lopes de Lucena - 32055633
//Thiago de Oliveira Aguirre - 32089589
#include <stdio.h>
#include <string.h>

void Char(char* j, int pos, char* t) 
{
    int i = strlen(j);
    if (pos > i) 
    {
        *(j + i) = t[0];
    }
    else {
        for (i; i > pos; i--) 
        {
            *(j + i) = *(j + i - 1);
        }
        *(j + pos) = t[0];
    }
}
int main() 
{
    char teste[100] = "Arro com feijao muito bom\n";
    printf("Arro com feijao muito bom\n");
    printf("=======================================\n");
    printf("Inserindo um Z na posicao 4:\n");
    Char(teste, 4, "z");
    printf("\n%s\n", teste);
}