import datetime
import random

# Lista fixa de feriados brasileiros (DD/MM)
FERIADOS_BRASILEIROS = [
    "01/01",  # Confraternização Universal
    "20/02",  # Carnaval (data variável)
    "21/02",  # Carnaval (data variável)
    "07/04",  # Sexta-feira Santa (data variável)
    "21/04",  # Tiradentes
    "01/05",  # Dia do Trabalho
    "08/06",  # Corpus Christi (data variável)
    "07/09",  # Independência do Brasil
    "12/10",  # Nossa Senhora Aparecida
    "02/11",  # Finados
    "15/11",  # Proclamação da República
    "25/12"   # Natal
]

def gerar_pin():
    """Gera um PIN de 6 dígitos."""
    return str(random.randint(100000, 999999))

def validar_data(dia_mes):
    """Valida o dia e mês no formato DD/MM e impede agendamentos em feriados, fins de semana e datas no passado."""
    try:
        data_atual = datetime.datetime.now()
        dia, mes = map(int, dia_mes.split('/'))
        ano = data_atual.year
        data_agendada = datetime.datetime(ano, mes, dia)
        
        # Verifica se a data é no ano atual
        if ano != data_atual.year:
            return False
        
        # Verifica se a data é menor que a data atual
        if data_agendada < data_atual:
            return False
        
        # Verifica se a data é um fim de semana
        if data_agendada.weekday() in [5, 6]:  # 5=Sabado, 6=Domingo
            return False
        
        # Verifica se é um feriado
        if dia_mes in FERIADOS_BRASILEIROS:
            return False
        
        return True
    except ValueError:
        return False

def validar_horario(horario):
    """Valida o horário no formato HH:MM e verifica se está em intervalos de 30 minutos permitidos."""
    try:
        hora, minuto = map(int, horario.split(':'))
        if 0 <= hora < 24 and 0 <= minuto < 60:
            if minuto % 30 == 0:
                if (8 <= hora < 12) or (13 <= hora < 18):  # Pode agendar das 8:00 às 11:30 e das 13:00 às 17:30
                    if hora == 11 and minuto > 30:
                        return False
                    if hora == 17 and minuto > 30:
                        return False
                    return True
        return False
    except ValueError:
        return False

def verificar_agendamento_disponivel(dia_mes, horario):
    """Verifica se a combinação de data e horário já está agendada."""
    try:
        with open("agendamentos.txt", "r") as arquivo:
            agendamentos = arquivo.readlines()
            for i in range(0, len(agendamentos), 5):  # Cada agendamento ocupa 5 linhas
                linha_data = agendamentos[i + 1].split(": ")[1].strip()
                linha_horario = agendamentos[i + 2].split(": ")[1].strip()
                if linha_data == dia_mes and linha_horario == horario:
                    return False
        return True
    except FileNotFoundError:
        return True

def salvar_agendamento(nome, dia_mes, horario):
    """Salva as informações do agendamento em um arquivo com um PIN gerado."""
    pin = gerar_pin()
    with open("agendamentos.txt", "a") as arquivo:
        arquivo.write(f"Nome: {nome}\nData: {dia_mes}\nHorário: {horario}\nPIN: {pin}\n")
        arquivo.write("-" * 30 + "\n")
    print(f"Dentina: Seu agendamento foi realizado com sucesso! Seu PIN é {pin}.")
    print(f"*** GUARDE O NÚMERO DO SEU PIN, POIS SERÁ NECESSÁRIO SE PRECISAR REAGENDAR A CONSULTA ***")

def remover_agendamento(pin, primeiro_nome):
    """Remove um agendamento específico baseado no PIN e no primeiro nome fornecido pelo usuário."""
    try:
        with open("agendamentos.txt", "r") as arquivo:
            agendamentos = arquivo.readlines()
        
        encontrou = False
        with open("agendamentos.txt", "w") as arquivo:
            i = 0
            while i < len(agendamentos):
                linha_nome = agendamentos[i].split(": ")[1].strip()
                linha_pin = agendamentos[i + 3].split(": ")[1].strip()
                
                if linha_pin == pin and linha_nome.startswith(primeiro_nome.upper()):
                    # Remover o bloco de 5 linhas do agendamento encontrado
                    encontrou = True
                    i += 5
                    if i < len(agendamentos) and agendamentos[i].strip() == "-" * 30:
                        i += 1
                else:
                    # Manter o bloco de 5 linhas
                    arquivo.writelines(agendamentos[i:i + 5])
                    i += 5
        
        if encontrou:
            print("Dentina: O agendamento foi removido com sucesso!")
        else: # aqui é se os dados estando corretos, o agendamento nao existir
            print("Dentina: Não foi encontrado um agendamento com o PIN e o nome fornecidos.")
    except FileNotFoundError: # aqui é se os dados inseridos estão incorretos
        print("Dentina: Não há agendamentos registrados. Por favor verifique os dados e tente novamente.")

def recuperar_pin(nome, dia_mes):
    """Recupera o PIN do agendamento baseado no nome e data fornecidos pelo usuário."""
    try:
        with open("agendamentos.txt", "r") as arquivo:
            agendamentos = arquivo.readlines()
            for i in range(0, len(agendamentos), 5):  # Cada agendamento ocupa 5 linhas
                linha_nome = agendamentos[i].split(": ")[1].strip()
                linha_data = agendamentos[i + 1].split(": ")[1].strip()
                
                if linha_nome == nome.upper() and linha_data == dia_mes:
                    linha_pin = agendamentos[i + 3].split(": ")[1].strip()
                    return linha_pin
        return None
    except FileNotFoundError:
        return None

def visualizar_agendamento(pin, nome):
    """Visualiza o agendamento baseado no PIN e nome fornecido pelo usuário."""
    try:
        with open("agendamentos.txt", "r") as arquivo:
            agendamentos = arquivo.readlines()
            for i in range(0, len(agendamentos), 5):  # Cada agendamento ocupa 5 linhas
                linha_nome = agendamentos[i].split(": ")[1].strip()
                linha_pin = agendamentos[i + 3].split(": ")[1].strip()
                
                if linha_pin == pin and linha_nome.startswith(nome.upper()):
                    linha_data = agendamentos[i + 1].split(": ")[1].strip()
                    linha_horario = agendamentos[i + 2].split(": ")[1].strip()
                    print(f"Dentina: Aqui estão os detalhes do agendamento para o(a) paciente {nome}:")
                    print(f"Data: {linha_data}")
                    print(f"Horário: {linha_horario}")
                    return
        print("Dentina: Não foi encontrado um agendamento com o PIN e nome fornecidos.")
    except FileNotFoundError:
        print("Dentina: Não há agendamentos registrados. Por favor verifique os dados e tente novamente.")

def obter_informacoes():
    """Solicita informações ao usuário para agendar uma consulta."""
    print("Dentina: Olá! Eu sou a Dentina e vou agendar sua consulta com a Dra Ortodontista.")
    print("Dentina: Há disponibilidade de segunda à sexta, das 8:00h às 11:30h e das 13:00h às 17:30h.")
    print("*** OS HORÁRIOS SÃO A CADA 30 MINUTOS, CONSIDERE HORA INTEIRA OU MEIA AO DIGITAR ***")
    
    nome = input("Dentina: Qual é o nome COMPLETO do(a) paciente? ").upper()
    
    while True:
        dia_mes = input("Dentina: Digite o melhor dia e mês para consulta (Formato: DD/MM): ")
        if validar_data(dia_mes):
            break
        else:
            print("Dentina: Data inválida. Por favor, insira uma data válida no formato DD/MM.")
    
    while True:
        horario = input("Dentina: Qual é o horário desejado para a consulta? (Formato: HH:MM): ")
        if validar_horario(horario) and verificar_agendamento_disponivel(dia_mes, horario):
            break
        else:
            print("Dentina: Horário indisponível. Por favor, tente outro horário no formato HH:MM.")
    
    return nome, dia_mes, horario

def confirmar_agendamento(nome, dia_mes, horario):
    """Confirma os detalhes do agendamento com o usuário."""
    print(f"\nDentina: Ótimo, {nome}! Aqui estão os detalhes da sua consulta:")
    print(f"Data: {dia_mes}")
    print(f"Horário: {horario}")
    
    confirmacao = input("Dentina: Está correto? (sim/não) ").strip().lower()
    
    if confirmacao in ["sim", "s"]:
        salvar_agendamento(nome, dia_mes, horario)
        print("Dentina: O endereço de Dra Ortodontista é Rua XXX, nº 123 - Bairo ZZZ - Ribeirão Preto/SP.")
        print("Dentina: Qualquer dúvida entre em contato pelo número (16)1234-1234.")
    else:
        print("Dentina: Entendi. Vamos começar novamente.")
        menu_principal()

def menu_principal():
    """Exibe o menu principal e lida com as opções do usuário."""
    while True:
        print("Dentina: O que você gostaria de fazer?")
        print("(1) Agendar uma consulta")
        print("(2) Remover um agendamento")
        print("(3) Recuperar seu PIN")
        print("(4) Visualizar agendamento")
        print("(5) Sair")
        escolha = input("Dentina: Digite o número escolhido: ").strip()
        
        if escolha == "1":
            nome, dia_mes, horario = obter_informacoes()
            confirmar_agendamento(nome, dia_mes, horario)
        elif escolha == "2":
            pin = input("Dentina: Por favor, forneça o PIN do agendamento que deseja remover: ")
            primeiro_nome = input("Dentina: Por favor, forneça o primeiro nome do paciente: ").upper()
            remover_agendamento(pin, primeiro_nome)
        elif escolha == "3":
            nome = input("Dentina: Qual é o nome COMPLETO do(a) paciente? ").upper()
            dia_mes = input("Dentina: Digite a data do agendamento para o qual deseja recuperar o PIN (Formato: DD/MM): ")
            pin = recuperar_pin(nome, dia_mes)
            if pin:
                print(f"Dentina: Seu PIN é {pin}.")
            else:
                print("Dentina: Não foi encontrado um agendamento com essas informações.")
        elif escolha == "4":
            pin = input("Dentina: Por favor, forneça o PIN do seu agendamento: ")
            nome = input("Dentina: Qual é o nome COMPLETO do(a) paciente? ").upper()
            visualizar_agendamento(pin, nome)
        elif escolha == "5":
            print("Dentina: Até logo! Se precisar alterar seu horário, estarei aqui.")
            break
        else:
            print("Dentina: Opção inválida. Por favor, escolha uma opção válida.")

if __name__ == "__main__":
    menu_principal()
