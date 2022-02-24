//Pedro Lopes de Lucena - 32055633
//Thiago de Oliveira Aguirre - 32089589
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    float N1, N2, N3, ME, MA;
    printf("Digite a primeira nota: "); 
    scanf("%f", &N1);
    printf("Digite a segunda nota: ");  
    scanf("%f", &N2);
    printf("Digite a terceira nota: "); 
    scanf("%f", &N3);
    printf("Digite a media dos exercicios: "); 
    scanf("%f", &ME);
    MA = (N1 * 1 + N2 * 2 + N3 * 3 + ME) / 7.0;
    if (MA >= 9) 
    { 
        printf("A"); 
    }
    else if (MA >= 7.5) 
    { 
        printf("B"); 
    }
    else if (MA >= 6) 
    { 
        printf("C"); 
    }
    else if (MA >= 4) 
    { 
        printf("D"); 
    }
    else 
    { 
        printf("E"); 
    }
    printf("\n");
    return 0;
}