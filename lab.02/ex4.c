//Ex4.Crie um progama capaz de ler dois nomes de pessoas e imprimi-los em ordem alfabética. Faça isto com string de C e de C++

//Pedro Lopes de Lucena - 32055633
//Thiago de Oliveira Aguirre - 32089589
#include <stdio.h>
#include <stdlib.h>

int main() 
{
    char p1[10];
    char p2[10];
    int retorno;
    printf("Digite dois nomes:\n");
    scanf("%s", &p1);
    scanf("%s", &p2);
    retorno = strcoll(p2, p1);
    printf("Nomes em ordem alfabetica: \n");
    if (retorno == 1)
    {
        printf("%s\n%s\n\n\n", p1, p2);
    }
    else
    {
        printf("%s\n%s\n\n\n", p2, p1);
    }
    system("pause");
}