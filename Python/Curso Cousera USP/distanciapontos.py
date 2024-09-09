import math

x1 = int(input("Informe o número x1: "))
y1 = int(input("Informe o número y1: "))
x2 = int(input("Informe o número x2: "))
y2 = int(input("Informe o número y2: "))

distancia = math.sqrt((x1 - x2) ** 2 + (y1 - y2) ** 2)

if distancia >= 10:
	print("longe")
else:
	print("perto")

