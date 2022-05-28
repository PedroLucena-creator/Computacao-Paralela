###Como resolveram o problema:  descrição simples do algoritmo e estratégia de paralelismo adotada.
O problema foi resolvido utilizando a linguagem Python. Primeiramente, utilizamos pthreads no python, mas descobrimos que não existe threads em python.
Em seguida, procuramos outra maneira de resolver o problema, e encontramos a biblioteca "concurrent.futures" e importamos o "as_completed" e "ThreadPoolExecutor".
E então quando acabado o código, rodamos e o speedup foi o mesmo para as versões serial e paralela.
Depois disso apenas trocamos o "ThreadPoolExecutor" por "ProcessPoolExecutor" e houve uma ótima diferença no speedup.

###Qual foi o speedup da última versão e como eles fizeram para melhorar?
Na última versão, o tempo de execução era o mesmo. Porém, agora os tempos com T = 1000000000 foram serial = 1 minuto e 15 segundos, e o paralelo foi de 25 segundos.
Speedup = 75/25 = 3.

###Considerações sobre a estratégia de paralelismo adotada e como isso auxiliou na escala do problema.
Testamos com 2, 3 e 4 threads. E chegamos a conclusão que o melhor speedup foi com 4 threads, até porque o computador que foi excutado possui 4 núcleos. E então não seria 
necessário o aumento de threads.
