segundos_str = input("Por favor, enrtre com o número de segundos que deseja converter: ")
total_segs = int(segundos_str)

horas = total_segs // 3600
segs_restantes = total_segs % 3600
minutos = segs_restantes // 60
seg_restantes_final = segs_restantes % 60

print(horas, "horas", minutos, "minutos", seg_restantes_final, "segundos")
