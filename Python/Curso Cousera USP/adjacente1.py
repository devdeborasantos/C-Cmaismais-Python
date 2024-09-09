# dado um número dizer se tem 2 números adjacentes iguais

num = int(input("Digite um número: "))
anterior = num % 10  # Primeiro dígito (menos significativo)
num //= 10  # Remove o último dígito do número

tem_adjacente_igual = False

while num > 0:
    atual = num % 10
    if atual == anterior:
        tem_adjacente_igual = True
        break
    anterior = atual
    num //= 10

if tem_adjacente_igual:
    print("O número possui dígitos adjacentes iguais.")
else:
    print("O número não possui dígitos adjacentes iguais.")
