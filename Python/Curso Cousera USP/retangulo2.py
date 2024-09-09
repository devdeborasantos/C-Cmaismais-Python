largura = int(input("Digite a largura: "))
altura = int(input("Digite a altura: "))

i = 0
while i < altura:
    j = 0
    while j < largura:
        if i == 0 or i == altura - 1 or j == 0 or j == largura - 1:
            print("#", end="")
        else:
            print(" ", end="")
        j += 1
    print()  # Pula para a próxima linha após imprimir a linha completa
    i += 1
