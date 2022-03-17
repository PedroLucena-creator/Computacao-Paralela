//Pedro Lopes de Lucena - 32055633
//Thiago de Oliveira Aguirre - 32089589
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cstdlib>
#pragma warning(disable : 4996)

typedef struct {
    char nome[50];
    int idade;
    float altura;
}PESSOA;

/* int x = 0;
    while (!feof(fptr))
    {
        fscanf(fptr, "%s", array[x].nome);
        fscanf(fptr, "%d", array[x].idade);
        fscanf(fptr, "%f", array[x].altura);
        x++;
    }
*/
void imprimeVetor(PESSOA povo[10], int i, FILE* resultado)
{
    char idade[100];
    char alt[100];
    for (int j = 0; j < i; j++)
    {
        printf("\n Nome:%s", povo[j].nome);
        printf("\n idade:%d", povo[j].idade);
        printf("\n altura:%.2f\n", povo[j].altura);
        itoa(povo[j].idade, idade, 10);
        gcvt(povo[j].altura, 3, alt);
        fputs(povo[j].nome, resultado);
        fputs("\n", resultado);
        fputs(idade, resultado);
        fputs("\n", resultado);
        fputs(alt, resultado);
        fputs("\n", resultado);
    }
}

PESSOA Dadosdepessoa(FILE* Arq)
{
    PESSOA i;
    fscanf(Arq, "\n%s", &i.nome);
    fscanf(Arq, "\n%d", &i.idade);
    fscanf(Arq, "\n%f", &i.altura);
    return i;
}

void fechaArquivo(FILE* Arq)
{
    fclose(Arq);
}
/*
int comparacao(const void *p1, const void *p2)
{
    float pess1 = ((PESSOA*)p1)->altura;
    float pess2 = ((PESSOA*)p2)->altura;
    if (pess1 < pess2) return -1;
    if (pess1 > pess2) return 1;
    return 0;
}*/
int compar(const void* p1, const void* p2)
{
    if ((*(PESSOA*)p1).altura == ((*(PESSOA*)p2).altura))
        return 0; //iguais
    else
        if ((*(PESSOA*)p1).altura < ((*(PESSOA*)p2).altura))
            return -1; 
        else
            return 1; 
}

void ordenaVetor(PESSOA* Povo, int i)
{
    qsort(Povo, i, sizeof(PESSOA), compar);
}

FILE* Arq;
FILE* abreArquivoAEntrada(char S1[50])
{
    FILE* Arq = fopen(S1, "rt");
    return Arq;
}

int main()
{
    char S1[50] = "Arquivo.txt";
    FILE* Arq = abreArquivoAEntrada(S1);
    PESSOA Povo[10], P;
    FILE* resultado = fopen("resultado.txt", "a");
    int i = 0;
    if (abreArquivoAEntrada(S1) != NULL)
    {
        while (!feof(Arq))
        {
            P = Dadosdepessoa(Arq);
            Povo[i] = P;
            i++;
        }
        fechaArquivo(Arq);
        ordenaVetor(Povo, i);
        imprimeVetor(Povo, i, resultado);
    }

    else printf("Erro na abertura do arquivo");
    return 0;
}
