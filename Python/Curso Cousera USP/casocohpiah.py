import re

def le_assinatura():
    '''A funcao le os valores dos tracos linguisticos do modelo e devolve uma assinatura a ser comparada com os textos fornecidos'''
    print("Bem-vindo ao detector automático de COH-PIAH.")
    print("Informe a assinatura típica de um aluno infectado:")

    wal = float(input("Entre o tamanho médio de palavra:"))
    ttr = float(input("Entre a relação Type-Token:"))
    hlr = float(input("Entre a Razão Hapax Legomana:"))
    sal = float(input("Entre o tamanho médio de sentença:"))
    sac = float(input("Entre a complexidade média da sentença:"))
    pal = float(input("Entre o tamanho medio de frase:"))

    return [wal, ttr, hlr, sal, sac, pal]

def le_textos():
    '''A funcao le todos os textos a serem comparados e devolve uma lista contendo cada texto como um elemento'''
    i = 1
    textos = []
    texto = input("Digite o texto " + str(i) +" (aperte enter para sair):")
    while texto:
        textos.append(texto)
        i += 1
        texto = input("Digite o texto " + str(i) +" (aperte enter para sair):")

    return textos

def separa_sentencas(texto):
    '''A funcao recebe um texto e devolve uma lista das sentencas dentro do texto'''
    sentencas = re.split(r'[.!?]+', texto)
    if sentencas[-1] == '':
        del sentencas[-1]
    return sentencas

def separa_frases(sentenca):
    '''A funcao recebe uma sentenca e devolve uma lista das frases dentro da sentenca'''
    return re.split(r'[,:;]+', sentenca)

def separa_palavras(frase):
    '''A funcao recebe uma frase e devolve uma lista das palavras dentro da frase'''
    return frase.split()

def n_palavras_unicas(lista_palavras):
    '''Essa funcao recebe uma lista de palavras e devolve o numero de palavras que aparecem uma unica vez'''
    freq = dict()
    unicas = 0
    for palavra in lista_palavras:
        p = palavra.lower()
        if p in freq:
            if freq[p] == 1:
                unicas -= 1
            freq[p] += 1
        else:
            freq[p] = 1
            unicas += 1

    return unicas

def n_palavras_diferentes(lista_palavras):
    '''Essa funcao recebe uma lista de palavras e devolve o numero de palavras diferentes utilizadas'''
    freq = dict()
    for palavra in lista_palavras:
        p = palavra.lower()
        if p in freq:
            freq[p] += 1
        else:
            freq[p] = 1

    return len(freq)

def calcula_assinatura(texto):
    sentencas = separa_sentencas(texto)
    frases = [separa_frases(sentenca) for sentenca in sentencas]
    palavras = [separa_palavras(frase) for sentenca in frases for frase in sentenca]

    num_palavras = sum(len(lista) for lista in palavras)
    num_sentencas = len(sentencas)
    num_frases = sum(len(lista) for lista in frases)

    wal = sum(len(palavra) for lista in palavras for palavra in lista) / num_palavras
    ttr = n_palavras_diferentes([palavra for lista in palavras for palavra in lista]) / num_palavras
    hlr = n_palavras_unicas([palavra for lista in palavras for palavra in lista]) / num_palavras
    sal = sum(len(sentenca) for sentenca in sentencas) / num_sentencas
    sac = num_frases / num_sentencas
    pal = sum(len(frase) for sentenca in frases for frase in sentenca) / num_frases

    return [wal, ttr, hlr, sal, sac, pal]

def compara_assinatura(as_a, as_b):
    similaridade = 0
    for i in range(len(as_a)):
        similaridade += abs(as_a[i] - as_b[i])
    return similaridade / 6

def avalia_textos(textos, ass_cp):
    assinaturas = [calcula_assinatura(texto) for texto in textos]
    similaridades = [compara_assinatura(assinatura, ass_cp) for assinatura in assinaturas]
    return similaridades.index(min(similaridades)) + 1

if __name__ == '__main__':
    assinatura = le_assinatura()
    textos = le_textos()
    texto_infectado = avalia_textos(textos, assinatura)
    print(f"\nO autor do texto {texto_infectado} está infectado com COH-PIAH")
