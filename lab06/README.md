### Como compilar o programa na plataforma disponibilizada?

No linux eu utilizei o site replit.

### Como executar o programa?

Copie o codigo e cole no replit

### Explicação.

Para realizar o serial.py, utilizamos o mesmo código do lab passado e mudamos o ln de 10 para 100, e também calculamos um speedup.
Já para programar o thread.py, dividimos em duas funções (exemplo: ao invés de calcular uma série de Taylor em uma função que rodava 100 vezes, utilizamos Taylor1:
que rodava de 1 a 50, e a Taylor2: que rodava de 51 a 100.) e implementamos a thread em uma delas para serem excutadas ao mesmo tempo.
No ln = 100 não observamos nenhuma diferença no speedup do código, mas para o ln = 100000000, a thread.py roda muito mais rápido que a versão serial.
