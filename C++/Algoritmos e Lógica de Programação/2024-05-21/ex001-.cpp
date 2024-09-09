#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string validos = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789 ";

int ehvalido(char carac) {
    for (int i = 0; i < validos.size(); i++) {
        if(carac == validos[i])
        return i;
    }
    return -1;
}

string processa_post(string q_post) {
    string p_post = "";
    int idx;
    for(int i = 0; i < q_post.size(); i++) {   
        idx = ehvalido(q_post[i]);
        if(idx > -1) {
            if(idx < 26)
                idx += 26;
                p_post += validos[idx];
        }
    }
    return p_post;
}

int main () {
    string p;
    cout << "Faça o post: ";
    getline (cin, p);
    cout << processa_post(p) << endl;

    return 0;
}