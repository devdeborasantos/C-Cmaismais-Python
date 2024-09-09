#include <iostream>
#include <ctime>
using namespace std;

const int N = 10; // Tamanho dos vetores de código e estoque

// Função para verificar se o código do produto existe no vetor de códigos
int encontrarPosicao(int codigo, int codigos[], int tamanho) {
    int i = 0;
    while (i < tamanho) {
        if (codigos[i] == codigo) {
            return i; // Retorna a posição se o código for encontrado
        }
        i++;
    }
    return -1; // Retorna -1 se o código não for encontrado
}

int main() {
    int vetcod[N]; // Vetor de códigos de produtos
    int vetest[N]; // Vetor de estoque de produtos

    // Preenchimento automático dos vetores de códigos e estoque
    srand(time(NULL));
    cout << "Preenchendo os dados automaticamente...\n";
    for (int i = 0; i < N; ++i) {
        vetcod[i] = i + 1; // Códigos de produtos começando de 1
        vetest[i] = rand() % 100; // Estoque aleatório entre 0 e 99 unidades
        cout << "Codigo: " << vetcod[i] << ", quantidade em estoque: " << vetest[i] << endl;
    }

    // Processamento das vendas
    int codcli, codigoProduto, qtd;
    cout << "\nRealize as vendas:\n";
    while (true) {
        cout << "Codigo do cliente (0 para encerrar): ";
        cin >> codcli;
        if (codcli == 0)
            break;

        cout << "Codigo do produto desejado: ";
        cin >> codigoProduto;
        cout << "Quantidade desejada: ";
        cin >> qtd;

        int posicao = encontrarPosicao(codigoProduto, vetcod, N);
        if (posicao != -1) {
            if (vetest[posicao] >= qtd) {
                cout << "Pedido atendido. Obrigado e volte sempre!\n";
                vetest[posicao] -= qtd; // Atualiza o estoque
            } else {
                cout << "Nao temos estoque suficiente dessa mercadoria.\n";
            }
        } else {
            cout << "Codigo inexistente.\n";
        }
    }

    // Exibir os códigos dos produtos com seus respectivos estoques
    cout << "\nEstoque atualizado:\n";
    for (int i = 0; i < N; ++i) {
        cout << "Codigo do produto: " << vetcod[i] << ", Estoque: " << vetest[i] << endl;
    }

    return 0;
}
