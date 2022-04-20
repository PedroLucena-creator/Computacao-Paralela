### Como compilar o programa na plataforma disponibilizada?

No linux eu utilizei o site replit.

### Como executar o programa?

Copie o codigo e cole no replit

### Como comprovar que os resultados propostos foram alcançados?

  Primeiramente eu utilizei como base o pdf Sistemas Operacionais – Profa. Roberta Lima Gomes ROTEIRO LAB Shared Memory que voce disponibilizou no moodle. Criamos 
um processo filho que faz uma compartilhacão da variável simples de um inteiro com o valor de 1. Depois eu estou tratando uma variável de Memória Compartilhada o "shrd" em um facilitador para eu conseguir explicar o lugar de alocação na memória. Logo em seguida o processo pai imprime o valor inicial e em seguida  ele cria o processo filho e fica em aguardo. Assim que termina o filho ele acessa a variável e faz a operação, que neste caso é de adição de um valor 2 modificando o valor para 3; em seguida o processo do filho é terminado utilizando a biblioteca de "Wait(NULL)" para conseguir dar à pausa. Por último criei um processo Pai que faz a operação de mutiplicação de um valor 4 que pega o resultado do filho anterior e dá o novo resultado de 12, modificando novamente esta variável e imprimindo este novo valor.
