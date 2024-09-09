def remove_repetidos(lista):
   lista_sem_rep = set(lista)
   lista_orden = sorted(lista_sem_rep)
   return lista_orden
