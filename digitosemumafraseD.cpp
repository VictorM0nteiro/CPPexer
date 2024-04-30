#include <bits/stdc++.h>
    int main(){
        int digitos = 0, i, j;
        char n[301];
        scanf("%[^\n]s", &n);

        for( i = 0; n[i] != '\0'; i++){
            if( n[i] >= '0' && n[i] <= '9'){
                digitos++;
            }
        }
        printf("%d\n", digitos);

    }