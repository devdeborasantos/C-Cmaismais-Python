def usuario_escolhe_jogada(n, m):

    while True:

        jogada = int(input("Quantas peças você vai tirar? "))

        

        if jogada > m or jogada > n or jogada <= 0:

            print("Oops! Jogada inválida! Tente de novo")

        else:

            if jogada == 1:

                print("Você tirou 1 peça\n")

            else:

                print("Você tirou", jogada, "peças\n")

            return jogada


def computador_escolhe_jogada(n, m):

    jogada = 1

    while jogada != m:

        if (n - jogada) % (m + 1) == 0:

            return jogada

        jogada += 1

    return jogada


def partida():

    n = int(input("Quantas peças? "))

    m = int(input("Limite de peças por jogada? "))

    print(" ")


    if n % (m + 1) == 0:

        print("Você começa!")

        vez_computador = False

    else:

        print("Computador começa!")

        vez_computador = True


    while n > 0:

        if vez_computador:

            jogada_computador = computador_escolhe_jogada(n, m)

            print("O computador tirou", jogada_computador, "peça(s)\n")

            n -= jogada_computador

            vez_computador = False

        else:

            jogada_usuario = usuario_escolhe_jogada(n, m)

            n -= jogada_usuario

            if n > 0:

                print("Agora restam", n, "peças no tabuleiro.\n")

            vez_computador = True


        if n == 1:

            print("Agora resta 1 peça no tabuleiro.\n")


    if vez_computador:
        print("Fim do jogo! Você ganhou!\n")

        return "jogador"

    else:

        print("Fim do jogo! O computador ganhou!\n")

        return "computador"


def campeonato():

    placar_jogador = 0

    placar_computador = 0


    for rodada in range(1, 4):

        print("\n**** Rodada", rodada, "****\n")

        resultado = partida()

        if "computador" in resultado:

            placar_computador += 1

        else:

            placar_jogador += 1


    print("\n**** Final do campeonato! ****\n")

    print("Placar: Você", placar_jogador, "X", placar_computador, "Computador\n")


def main():

    print("Bem-vindo ao jogo do NIM! Escolha:\n")

    resp = int(input("1 - para jogar uma partida isolada\n2 - para jogar um campeonato\n"))


    if resp == 1:

        print("Você escolheu uma partida isolada!\n")

        partida()

    elif resp == 2:

        print("Você escolheu um campeonato!\n")

        campeonato()

    else:

        print("Opção inválida")


if __name__ == "__main__":

    main()