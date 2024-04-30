#include <bits/stdc++.h>
#include <string.h>
    void removespaces( char *str){
        int i = 0, j = 0;
        
        for( i = 0; str[i] != '\0'; i++){
            if( str[i] != ' '){
                str[j++] = str[i];
            }
        }
        str[j] = '\0';
    }

    int main(){
        int n;
        char palavraprog[31], palavrajuiz[31];
        scanf("%d", &n);
        getchar();

        for( int i = 0; i < n; i++){
            scanf("%[^\n]%*c", palavraprog);
            scanf("%[^\n]%*c", palavrajuiz);

            if( strcmp(palavraprog, palavrajuiz) == 0){
                printf("Caso %d: Yes\n", (i+1));
            }
            else{
                removespaces(palavraprog);
                if( strcmp(palavraprog, palavrajuiz) == 0){
                    printf("Caso %d: Output Format Error\n", (i+1));
                }
                else{
                    printf("Caso %d: Wrong Answer\n", (i+1));
                }
            }
        }
    }