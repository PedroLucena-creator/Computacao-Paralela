//Pedro Lopes de Lucena - 32055633
//Thiago de Oliveira Aguirre - 32089589
//crie um arquivo  arquivos BIN. para execução do exercicio
//para rodarmos o codigo usamos o GCC, the GNU Compiler Collection e MinGW
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main() 
{
    int i, num, j;
    pid_t pid;
    printf("Enter the number: ");
    scanf("%d", &num);
    j = num;
    for (i = 1; j > 1; j = j -1)
    {
        pid = fork();
        if (pid < 0)
        {
            perror("fork");
            exit(1);
        }
        else if (pid != 0)
        {
            pid = wait(NULL);
            break;
        }
        else
        {
            printf("Parentprocess: |%d|\n", getppid());
            printf("Childprocess:|%d|\n",   getpid());
            i = i * j;
            if (j == 2)
                printf("\nThe factorial of %d is %d\n", num, i);
        }
    }
    return 0;
}
