#include <bits/stdc++.h>
#define true 1
#define false 0

    int main(){
        int p, n, anterior, proximo, teste, vitoria = true;
        int i;
        int altura;

        scanf("%d %d", &p, &n);
        scanf("%d", &altura);
        anterior = altura;

        for( i = 1; i < n; i++)
        {
            scanf("%d", &altura);
            proximo = altura;
            teste = proximo - anterior;
            if( teste < 0)
            {
                teste = teste *(-1);
            }
            if (teste > p)
            {
                vitoria = false;
            }
            anterior = proximo;
            
        }

        if( vitoria == true)
            printf("YOU WIN\n");
        
        else{
            printf("GAME OVER\n");
        }
    }