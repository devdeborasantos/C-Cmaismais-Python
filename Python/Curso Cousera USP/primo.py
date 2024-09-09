num = int(input("Digite um número inteiro: "))

n = 1
res = 0

while n <= num:
    if num % n == 0:
        res = res + 1
    n = n + 1

if res > 2:
    print("não primo")
else:
    print("primo")