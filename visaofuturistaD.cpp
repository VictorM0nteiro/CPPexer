#include <bits/stdc++.h>
using namespace std;
    int main(){
        int n;
        string frase;
        cin >> n;
        cin.ignore();
        getline(cin, frase);


        for( int i = 1; i <= n; i++){
            cout << frase << endl;
        }
        return 0;
    }