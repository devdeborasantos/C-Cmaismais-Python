numeros = []

num = int(input("Digite um número: "))

while num != 0:
    numeros.append(num)
    num = int(input("Digite um número: "))

for num in reversed(numeros):
    print(num)