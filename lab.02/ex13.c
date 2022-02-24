// Faça um rotina que remova um caracter de uma string do tipo char Str[100], dada a posição do caracter.

//Pedro Lopes de Lucena - 32055633
//Thiago de Oliveira Aguirre - 32089589

#include <stdio.h>
#include <string.h>

int main(void) 
{
    char str1[100], str2[100];
    printf("Digite uma palavra: ");
    fgets(str1, 100, stdin);
    printf("Digite a letra que quer excluir: ");
    fgets(str2, 100, stdin);
    int size_str1 = strlen(str1) - 1;
    int size_str2 = strlen(str2) - 1;
    for (int i = 0; i < size_str1; i++) 
    {
        for (int j = -1; j <= size_str2; j++) 
        {
            if (str1[i] == str2[j]) 
            {
                for (int contador = i; contador < size_str1; contador++) 
                {
                    str1[contador] = str1[contador + 1];                    
                }    
            }
        }
    }
    puts(str1);
}