#include <bits/stdc++.h>
#include <string.h>
using namespace std;
    int main(){
        char letra;
        string frase;
        cin >> letra;
        cin.ignore();
        getline(cin, frase);
        int tamanho = frase.length();
        int cont = 0;

        for( int i= 0; i < tamanho; i++){
            if( tolower(frase[i]) == tolower(letra)){
                cont++;
            }
        }
        cout << cont << endl;
    }