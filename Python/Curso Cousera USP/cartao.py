meuCartao = int(input("Digite o número de seu cartão de crédito: "))

cartaoLido = 1
encontreiMeuCartao = False

#se digitar 0 acaba de pedir número do próximo cartão

while cartaoLido != 0 and not encontreiMeuCartao:
	cartaoLido = int(input("Digite o número do próximo cartão de crédito: "))
	if cartaoLido == meuCartao:
		encontreiMeuCartao = True

if encontreiMeuCartao:
	print("EBA!!! Meu cartão está lá!")
else:
	print("Xi, meu cartão não está lá!")
	