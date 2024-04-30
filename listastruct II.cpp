#include <bits/stdc++.h>
using namespace std;
    typedef struct
    {
        float preco;
        string nome;
    } compra;
    
    int main(){
        compra mer1, mer2, mer3, mer4;
        cin >> mer1.preco;
        getline( cin, mer1.nome);

        cin >> mer2.preco;
        getline( cin, mer2.nome);

        cin >> mer3.preco;
        getline( cin, mer3.nome);

        cin >> mer4.preco;
        getline( cin, mer4.nome);

        cout << fixed << setprecision(2);

        if(mer1.preco < mer2.preco && mer1.preco < mer3.preco && mer1.preco < mer4.preco){
            cout << mer1.preco << mer1.nome << endl;
        }
        else if(mer2.preco < mer1.preco && mer2.preco < mer3.preco && mer2.preco < mer4.preco){
            cout << mer2.preco << mer2.nome << endl;
        }
        else if(mer3.preco < mer1.preco && mer3.preco < mer2.preco && mer3.preco < mer4.preco){
            cout << mer3.preco << mer3.nome << endl;
        }
        else if(mer4.preco < mer1.preco && mer4.preco < mer3.preco && mer4.preco < mer2.preco){
            cout << mer4.preco << mer4.nome << endl;
        }

        return 0;
    }