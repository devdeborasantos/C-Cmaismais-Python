#include <iostream>

using namespace std;

int main() {
    int idade = 0, sexo_menor_salario, opc_sexo, m_inf_200 = 0, qtd_salario = 0, maior_id = 0, menor_id, id_menor_sal;
    float salario, md_sal, soma_salario = 0, menor_sal;

    menor_sal = 1000000000;
    menor_id = 1000000000;
    while (idade >=0) {
        cout << "Informe sua idade ou digite um valor negativo para finalizar o programa: ";
        cin >> idade;

        if (idade < 0) {
            break;
        }

        cout << "Informe seu salario: ";
        cin >> salario;
        cout << "Informe seu sexo: " << endl;
        cout << "[1] Masculino" << endl;
        cout << "[2] Feminino" << endl;
        cin >> opc_sexo;

        if (opc_sexo == 1) {
            qtd_salario++;
            soma_salario += salario;
        } else if (opc_sexo == 2) {
            qtd_salario++;
            soma_salario += salario;
            if (salario <= 200){
                m_inf_200++;
            }
        }    
        if (idade > maior_id) {
            maior_id = idade;
        }
        if (idade < menor_id){
            if (idade > 0) {
            menor_id = idade;
            }
            
        }
        if (salario < menor_sal){
            menor_sal = salario;
            id_menor_sal = idade;
            sexo_menor_salario = opc_sexo;
        }
    }

        md_sal = soma_salario / qtd_salario;

        cout << "A media dos salarios do grupo eh R$" << md_sal << endl;
        cout << "A maior idade do grupo eh " << maior_id << " e a menor idade eh " << menor_id << endl;
        cout << "A quantidade de mulheres com salario ate R$200: " << m_inf_200 << endl;
        if (sexo_menor_salario == 1){
            cout << "A pessoa com o menor salario eh do sexo masculino e tem " << id_menor_sal << " anos e recebe: R$" << menor_sal << endl;
        } else {
            cout << "A pessoa com o menor salario do grupo eh do sexo feminino e tem " << id_menor_sal << " anos e recebe: R$" << menor_sal << endl;
        }

    return 0;
}