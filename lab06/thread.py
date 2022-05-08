#Pedro Lopes de Lucena - 32055633
#Thiago de Oliveira Aguirre - 32089589
"""Procedimento para executar a equação ln=100 utilizando thread"""
from threading import Thread
import concurrent.futures
import time

def Taylor1(ln1):
    S = 0
    for i in range(ln1):
        if i == 0:
            pass
        else:
            S += 1/i
    return S
def Taylor2(ln2):
    X = 0
    b = ln2
    for i in range(ln2):
        X += 1 / b
        b += 1
    return X
inicio = time.time()
with concurrent.futures.ThreadPoolExecutor() as executor:
    print('EXECUTANDO THREAD...')
    future = executor.submit(Taylor1, 50)
    return_value = future.result()
    Res2 = Taylor2(50)
    Resultado = return_value + Res2
    print('Resultado = ', Resultado)
    fim = time.time()
    print('Speedup: ', fim - inicio, 'segundos')


