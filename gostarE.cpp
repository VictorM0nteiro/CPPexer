#include <bits/stdc++.h>
using namespace std;

    void removespaces ( char *str){
        int i = 0, j = 0;
        for( i = 0; str[i] != '\0'; i++){
            if( str[i] != ' '){
                str[j++] = str[i];
            }
        }
        str[j] ='\0';

    }

    void removedots(char *palavra){
     int i=0,j=0;
     for(i=0; palavra[i] != '\0'; i++){
        if(isalpha(palavra[i])){
            palavra[j++] = palavra[i];
        }
     }
     palavra[j] = '\0';
    }

    bool ehpalindromo( const string& frase){
        int esquerda = 0;
        int direita = frase.length() - 1;

        while( esquerda < direita){
            while(!isalpha(frase[esquerda]) && esquerda < direita){
                esquerda++;
            }
            while(!isalpha(frase[direita]) && esquerda < direita){
                direita--;
            }

            char esq = tolower(frase[esquerda]);
            char dir = tolower(frase[direita]);

            if( esq != dir){
                return false;
            }

            esquerda++;
            direita--;
        }
        return true;
    }

    int main(){
        string linha; // linha e frase existem para serem igualados

        while( getline(cin, linha)){
            char frase[1001];
            strcpy(frase, linha.c_str());


            removespaces(frase);
            removedots(frase);


            if(ehpalindromo(frase_sem_acentos)){
                cout << "sim" << endl;
            }
            else cout << "nao" << endl;
        }
        return 0;
    }