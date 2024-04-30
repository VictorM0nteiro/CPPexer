#include <bits/stdc++.h>
using namespace std;
    int main(){
        string c;
        getline(cin, c);
        string s = c;
        reverse(c.begin(), c.end());
        if( s == c) cout << "sim" << endl;
        else cout << "nao" << endl;
        return 0;

    }