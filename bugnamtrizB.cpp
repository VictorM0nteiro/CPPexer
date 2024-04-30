#include <bits/stdc++.h>
    int main(){
        int i, j, l, c;
        scanf("%d %d", &l, &c);
        int m[l][c];

        for( i = 0; i < l; i++){
            for( j = 0; j < c; j++){
                scanf("%d", &m[i][j]);
            }
        }

        for( j = 0; j < c; j++){
            for( i = 0; i < l; i++){
                printf("%d", m[i][j]);
                if(i != l - 1){
                    printf(" ");
                }
            }
            printf("\n");
        }
    }