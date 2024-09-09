//Você foi convocado à escrever uma função que receba posts de uma rede social e processe-a deixando apenas as letras, 
//números e espaços, além disso todas as letras devem estar em caixa-alta.

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string recebepost(string postf) {
    string retorno;
    for(int i = 0; i < postf.length(); i++) {

        if(isalpha(postf[i]) || isblank(postf[i]) || isdigit(postf[i])) {
            retorno += postf[i];
        }
    } 
    return retorno;
}          

int main() {
    string post;
    
    cout << "Informe a frase do post" << endl;
    getline(cin, post);

    post = recebepost(post);

    cout << post << endl;

    return 0;
}