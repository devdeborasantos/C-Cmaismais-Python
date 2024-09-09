def MinMax(temperaturas):
   print("A menor temperatura do mês foi:", mínimo(temperaturas), "ºC")
   print("A menor temperatura do mês foi:", máximo(temperaturas), "ºC")

def mínima(temps):
   min = temps[0]
   i = 1
   while i < len(temps)
      if temps[i] < min:
         min = temps[i]
      i = i + 1
   return min


def máxima(temps):
   max = temps[0]
   i = 1
   while i < len(temps)
      if temps[i] > max:
         max = temps[i]
      i = i + 1
   return max