from concurrent.futures import ThreadPoolExecutor, as_completed

def taylor(In):
  S = 0
  X = 0
  num = In/2
  for i in range(int(num)):
    if i == 0:
      pass
    else:
      S += 1/i
  for i in range(int(num)):
    X += 1/num
    num += 1
  resultado = S + X
  print(resultado)

pool = ThreadPoolExecutor(1)
futures = []
for x in range(1):
    futures.append(pool.submit(taylor, 100))
