#include <bits/stdc++.h>
using namespace std;

    int main(){
        int n;
        char v[101];

        while( scanf("%d %s", &n, v) == 2){
            bool encontrou_n = false;;

            int tamanho = strlen(v);

            for( int i = 0; i < tamanho; i++){
                if( v[i] != (n+'0')){
                    if( v[i] != '0' || encontrou_n){
                        cout << v[i];
                    }
                    if( v[i] != '0'){
                        encontrou_n = true;
                    }
                }
            }

            if(!encontrou_n){
                cout << "0";
            }
            cout << endl;
        }
        return 0;
    }