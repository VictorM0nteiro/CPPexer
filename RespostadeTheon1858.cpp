#include <bits/stdc++.h>
    int main(){

        int n, x, menor, posicao = 0;

        scanf("%d", &n);
        int vetor[n];

        for( int i = 0; i < n; i++){
            scanf("%d", &vetor[i]);
        }

        menor = vetor[0];

        for( int i = 0; i < n; i++)
        {
            if (vetor[i] < menor)
            {
                menor = vetor[i];
                posicao = i;
            }
            
        }

        printf("%d\n", posicao+1);
    }