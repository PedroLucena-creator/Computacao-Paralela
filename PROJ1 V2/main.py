# Pedro Lopes de Lucena - 32055633
# Thiago de Oliveira Aguirre - 32089589
import threading
from concurrent.futures import ProcessPoolExecutor, as_completed, ThreadPoolExecutor
import time

T = 100000000


def taylor(x):
    S = 0
    X = 0
    Y = 0
    Z = 0
    num = T / 4
    num2 = T / 2
    num3 = num + num2
    if x == 0:
        for i in range(int(num)):
            if i == 0:
                pass
            else:
                S += 1 / i
        return S
    elif x == 1:
        for y in range(int(num)):
            X += 1 / num
            num += 1
        return X
    elif x == 2:
        for z in range(int(num)):
            Y += 1 / num2
            num2 += 1
        return Y
    elif x == 3:
        for v in range(int(num)):
            Z += 1 / num3
            num3 += 1
        return Z

if __name__ == '__main__':
    futures = []
    pool = ProcessPoolExecutor(4)
    for x in range(4):
        futures.append(pool.submit(taylor, x))

    for x in as_completed(futures):
        print(x.result())
