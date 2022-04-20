### Como compilar o programa na plataforma disponibilizada?

Copie o codigo no site do replit.

### Como executar o programa?

No linux eu utilizei o site replit.

### Como comprovar que os resultados propostos foram alcançados?

  Primeiramente eu utilizei como base o pdf Sistemas Operacionais – Profa. Roberta Lima Gomes ROTEIRO LAB Shared Memory que voce disponibilizou no moodle. Criamos 
um processo filho que faz uma compartilhacão da variavel simples de um inteiro com o valor de 1. Depois eu estou tratando uma variavel de Memória Compartilhada o "shrd" em um facilitador para eu conseguir explicar o lugar de alocação na memória. Logo em seguida o processo pai imprime o valor inicial e em seguida  ele cria o processo filho e fica em aguardo. Assim que termina o filho acessa a variavel faz a operação, que neste caso é de adição de um valor 2 modificando o valor para 3; em seguida o processo do filho é terminado utilizando a biblioteca de "Wait(NULL)" para conseguir dar uma pausa. Por ultimo criei um processo Pai que faz a operação de mutiplicação
de um valor 4 que pega o resultado do filho anterior e da o resultado  de 12, modificando novamente esta variavel e imprimindo este novo  valor.
