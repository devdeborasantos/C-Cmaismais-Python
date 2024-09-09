import math

def calcular_raizes(a, b, c):
    delta = b ** 2 - 4 * a * c
    
    if delta < 0:
        return "Esta equação não possui raízes reais"
    elif delta == 0:
        x = -b / (2 * a)
        return f"A raiz desta equação é {x}"
    else:
        x1 = (-b + math.sqrt(delta)) / (2 * a)
        x2 = (-b - math.sqrt(delta)) / (2 * a)
        return f"As raízes da equação são {x1} e {x2}"

# Entrada dos coeficientes
a = float(input("Digite o valor de a: "))
b = float(input("Digite o valor de b: "))
c = float(input("Digite o valor de c: "))

# Chamada da função para calcular e exibir as raízes
resultado = calcular_raizes(a, b, c)
print(resultado)