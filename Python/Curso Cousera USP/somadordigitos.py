num = int(input("Digite um número: "))
soma = 0

while num != 0:
	digito = num % 10
	soma = soma + digito
	num = num // 10

print("A soma de todos os dígitos é:", soma)
