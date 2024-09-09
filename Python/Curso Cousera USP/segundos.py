segundos_str = input("Por favor, entre com o número de segundos que deseja converter: ")
total_segs = int(segundos_str)

a = total_segs // 86400
segs_rest1 = total_segs % 86400

b = segs_rest1 // 3600
segs_rest2 = segs_rest1 % 3600

c = segs_rest2 // 60

d = segs_rest2 % 60

print(a, "dias,", b, "horas,", c, "minutos e", d, "segundos.")
