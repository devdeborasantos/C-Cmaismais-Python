num = int(input("Digite um número inteiro: "))
anterior = num % 10
num //= 10

tem_adjacente_igual = False

while num > 0:
    atual = num % 10
    if atual == anterior:
        tem_adjacente_igual = True
        break
    anterior = atual
    num //= 10

if tem_adjacente_igual:
    print("sim")
else:
    print("não")
