#-----------------------------------------------------------------
# Solução 1: curta e grossa
#
#-----------------------------------------------------------------
def main():
    '''
    Programa que lê três números inteiros positivos n, i e j 
    e imprime os n primeiros números inteiros maiores o iguais
    a zero que são multiplos de i ou de j.
    '''

    print("Cálculo dos n primeros multiplos de i ou j\n")

    # leitura dos dados
    n = int(input("Digite n: "))
    i = int(input("Digite i: "))
    j = int(input("Digite j: "))
    
    
    # mult é o candidato a multiplo de i ou j
    mult = 0

    # k é o contador de múltiplos impressos
    k    = 0
    while k < n:
        if mult%i == 0 or mult%j == 0:
            # mult é multiplo de i ou j
            print(mult)
            k = k + 1;
         
        # vamos para o próximo candidato   
        mult = mult + 1;	

# . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .
main()