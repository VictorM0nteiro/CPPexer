#include <bits/stdc++.h>
using namespace std;
    int main(){
        /*A B C D E F G H I J K L M N O P Q R S T U V W X Y Z, CIFRA DE CEZAR/*/
        int n, ngiro;
        cin >> n;
        string palavra;

        for( int i = 0; i < n; i++){
            cin >> ngiro;
            cin >> palavra;
            int tamanho = palavra.length();

            for(int j =0; j < tamanho; j++){
                if( palavra[j] >= 'A' && palavra[j] <= 'Z'){
                    palavra[j] = 'A' + (palavra[j] - 'A' + ngiro + 26) % 26;
                }
            }
            cout << palavra << endl;
        }
        return 0;
    }