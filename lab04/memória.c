// Nome: Thiago de Oliveira Aguirre Tia: 32089589
// Nome: Pedro Lopes de Lucena      Tia: 32055633
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <sys/wait.h>
int main() {
  pid_t childpid;
  int shm_id;
  shm_id = shmget(IPC_PRIVATE, 1024, IPC_CREAT | 0600);
  if (shm_id < 0) {
    printf("shmget error\n");
  }
  int *shrd = (int *)shmat(shm_id, NULL, 0);
  *shrd = 1;
  printf("o processo pai e o processo filho compartilhem uma variável simples "
         "de %i\n",
         *shrd);
  childpid = fork();
  if (childpid == 0) {
    *shrd += 2;
    printf("o valor da variavel ao somar eh %i\n", *shrd);
  } else {
    wait(NULL);
    *shrd *= 4;
    printf("O valor da variavel compartilhada ao multiplicar por  4 eh %i\n",
           *shrd);
    exit(0);
  }
}
