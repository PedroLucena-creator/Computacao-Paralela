#Pedro Lopes de Lucena - 32055633
#Thiago de Oliveira Aguirre - 32089589
import time

inicio = time.time()
S = 0
for i in range(100):
    if i == 0:
        pass
    else:
        S += 1/i
print(S)
fim = time.time()
print('Speedup:', fim - inicio, 'segundos.')
