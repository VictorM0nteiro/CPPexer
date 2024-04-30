#include <bits/stdc++.h>

    void removespaces ( char *str){
        int i = 0, j = 0;
        for( i = 0; str[i] != '\0'; i++){
            if( str[i] != ' '){
                str[j++] = str[i];
            }
        }
        str[j] ='\0';

    }

    void removedots(char *palavra){
     int i=0,j=0;
     for(i=0; palavra[i] != '\0'; i++){
        if(palavra[i] >= 'a' && palavra[i] <= 'z' || palavra[i] >= 'A' && palavra[i] <= 'Z'){
            palavra[j++] = palavra[i];
        }
     }
     palavra[j] = '\0';
    }

    

// tabela ascii;
 /*#include <bits/stdc++.h>
using namespace std;

    int main(){
        for( int i = 1; i <= 275; i++){
            cout << i;
            printf(" %c\n", i);
        }
    }*/

    int main()
{   char buff[501];
    int i;
    wchar_t wbuff[128];
    setlocale(LC_ALL, "");

    while(fgetws(wbuff, 128, stdin)){
    	int len = wcslen(wbuff);
    	for (i=0; i<len ;i++)
    	{
        	if      (wbuff[i] == L'Ó') { wbuff[i] = L'O'; }
		    else if (wbuff[i] == L'á') { wbuff[i] = L'a'; }
        	else if (wbuff[i] == L'ã') { wbuff[i] = L'a'; }
        	else if (wbuff[i] == L'ç') { wbuff[i] = L'c'; }
        	else if (wbuff[i] == L'í') { wbuff[i] = L'i'; }
        	else if (wbuff[i] == L'é') { wbuff[i] = L'e'; }
        	else if (wbuff[i] == L'ê') { wbuff[i] = L'e'; }
        	else if (wbuff[i] == L'ó') { wbuff[i] = L'o'; }
        	else if (wbuff[i] == L'ô') { wbuff[i] = L'o'; }
		wbuff[i]=tolower(wbuff[i]);
    	}
	int c=0;
    	for (i=0; i<len ;i++){
		if (wbuff[i]!=L' ' && wbuff[i]!=L'-' && wbuff[i]!=L',' && wbuff[i]!=L';' && wbuff[i]!=L':' && wbuff[i]!=L'!' && wbuff[i]!=L'?' && wbuff[i]!=L'.') { buff[c]=wbuff[i]; c++; }
	}
	buff[c]='\0';
    	printf("%s", buff);
    }
    return 0;
}