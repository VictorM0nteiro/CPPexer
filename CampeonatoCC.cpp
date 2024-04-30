#include <bits/stdc++.h>
    int main(){
        long int i, j, n, soma=0;
        scanf("%ld", &n);
        long int m[n][n];

        for( i = 0; i < n; i++){
            for( j = 0; j < n; j++){
                scanf("%ld", &m[i][j]);
            }
        }

        for( i = 0; i < n; i++){
            for( j = 0; j < n; j++){
                if( j == (n-1-i)){
                    if(m[i][j] % 2 != 0){
                        soma += m[i][j];
                    }
                }
            }
        }
        printf("%ld\n", soma);
    }