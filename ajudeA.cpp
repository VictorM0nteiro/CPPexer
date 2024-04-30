#include <bits/stdc++.h>
    int main(){
        int i, j , n;
        scanf("%d", &n);
        int m[n][n];

        for( i = 0; i < n; i++){
            for( j = 0; j < n; j++){
                if(i == j){
                    printf("1");
                }
                else{
                    printf("0");
                }
                if(j != n - 1){
                    printf(" ");
                }
            }
            printf("\n");
        }
        return 0;
    }