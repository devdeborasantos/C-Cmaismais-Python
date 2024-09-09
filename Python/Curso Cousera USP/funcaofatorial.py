# n! / k! (n-k)!

def fatorial(x):
	fat = 1
	while x > 1:
		fat = fat * x
		x = x -1
	return fat

n = int(input("Digite o valor de n: "))
k = int(input("Digite o valor de k: "))

res = fatorial(n) // (fatorial(k) * fatorial(n-k))

print("O resultado de C(n,k) é:", res)

