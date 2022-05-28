# Pedro Lopes de Lucena - 32055633
# Thiago de Oliveira Aguirre - 32089589

def taylor(ln):
    S = 0 
    X = 0
    num = ln/2
    for i in range(int(num)):
        if i == 0:
            pass
        else:
            S += 1/i

    for y in range(int(num)):
        X += 1/num
        num += 1
    Resultado = S + X
    print(Resultado)

taylor(1000000000)
