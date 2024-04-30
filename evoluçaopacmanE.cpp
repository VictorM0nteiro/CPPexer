#include <bits/stdc++.h>
#include <stdlib.h>
	int main(){
		int lp, cp, lf, cf, linha = 0;
		char mat[31];

		while( scanf("%[^\n]s", mat) != EOF){
			getchar();

			for( int i = 0; i < strlen(mat); i++){
				if(mat[i] == 'p'){
					cp = i/2;
					lp = linha;
				}
				if(mat[i] == 'f'){
					cf = i/2;
					lf = linha;
				}
			}
			linha++;
		}
		printf("%d\n", abs(lp-lf)+abs(cp-cf));
	}