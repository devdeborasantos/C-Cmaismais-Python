largura = int(input("digite a largura: "))
altura = int(input("digite a altura: "))

i = 0
while i < altura:
    j = 0
    linha = ""
    while j < largura:
        linha += "#"
        j += 1
    print(linha)
    i += 1