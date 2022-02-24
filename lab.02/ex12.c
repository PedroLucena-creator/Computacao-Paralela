//Faça uma função que retorne a posição de um dado caracter dentro de uma string.

//Pedro Lopes de Lucena - 32055633
//Thiago de Oliveira Aguirre - 32089589

#include <stdio.h>

int buscar(const char* str, char query) 
{
    const char* temp = str;
    while (*temp != 0 && *temp != query)
        temp++;
    return *temp == 0 ? -1 : temp - str;}
int main() {
    const char* str = "thiago";
    int query = 'g';
    int posicao = buscar(str, query);
    printf("%d\n", posicao);
}