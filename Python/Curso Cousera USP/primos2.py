def n_primos(n):
    if n < 2:
        return 0
    
    qtd = 0
    num = 2
    
    while num <= n:
        eh_primo = True
        divisor = 2
        while divisor <= int(num ** 0.5):
            if num % divisor == 0:
                eh_primo = False
                break
            divisor += 1
        
        if eh_primo:
            qtd += 1
        
        num += 1
    
    return qtd
