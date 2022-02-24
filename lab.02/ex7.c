// Faça um programa que crie um vetor de pessoas. Os dados de uma pessoa devem ser armazenados em um variavel do tipo struct. 
// O programa deve permitir que o usuário digite o nome de 3 pessoas e a seguir imprimi os dados de todas as pessoas. 
// A struct deve armazenar os dados de idade, peso e altura.

//Pedro Lopes de Lucena - 32055633
//Thiago de Oliveira Aguirre - 32089589

#include <stdio.h>

typedef struct 
{
    float Peso;
    int Idade;
    float Altura;
} Pessoa;

Pessoa SetPessoa(int idade, float peso, float altura)
{
    Pessoa pont;
    pont.Idade = idade;
    pont.Altura = altura;
    pont.Peso = peso;
    return pont;
}
void Printa_Pessoa(Pessoa pont)
{
  printf("Idade: %d  Peso: %f Altura: %f\n", pont.Idade, pont.Peso, pont.Altura);
}

int main()
{
    Pessoa n1;
    Pessoa n2;
    Pessoa n3;
    char nome1[10], nome2[10], nome3[10];
    printf("Digite o nome de uma pessoa: \n");
    scanf("%s", &nome1);
    n1 = SetPessoa(10,75.2,1.80); 
    printf("Dados Pessoa %s : \n", nome1);
    Printa_Pessoa(n1);
    printf("=======================================\n");
    printf("Digite o nome de uma pessoa: \n");
    scanf("%s", &nome2);
    n2 = SetPessoa(15,62.5,1.75); 
    printf("Dados Pessoa %s : \n", nome2);
    Printa_Pessoa(n2);
    printf("=======================================\n");
    printf("Digite o nome de uma pessoa: \n");
    scanf("%s", &nome3);
    n3 = SetPessoa(15,60.5,1.75); 
    printf("Dados Pessoa %s : \n", nome3);
    Printa_Pessoa(n3);
    printf("=======================================\n");
    return 0;
}


