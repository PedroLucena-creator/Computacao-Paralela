from concurrent.futures import ThreadPoolExecutor, as_completed
T = 100
def taylor(x):
  S = 0
  X = 0
  num = T/2
  if x == 0:
    for i in range(int(num)):
      if i == 0:
        pass
      else:
        S += 1/i
  elif x == 1:
    for i in range(int(num)):
      X += 1/num
      num += 1
  resultado = S + X
  print(resultado)

pool = ThreadPoolExecutor(2)
futures = []
for x in range(2):
    futures.append(pool.submit(taylor, x))
