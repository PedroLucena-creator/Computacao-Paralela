#Pedro Lopes de Lucena - 32055633
#Thiago de Oliveira Aguirre - 32089589

import math

x = 1
S = 0
for i in range(10):
    S += x**i/math.factorial(i)
    
print(S)
