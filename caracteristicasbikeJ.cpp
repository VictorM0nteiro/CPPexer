#include <bits/stdc++.h>
using namespace std;

    typedef struct
    {
        string cor;
        string marca;
        int marcha;
        float preco;
    } bike;

    int main(){
        int quantbike, minmarch, maxmarch;
        cin >> quantbike >> minmarch >> maxmarch;
        cin.ignore();

        bike num[35];

        for( int i = 0; i < quantbike; i++){
            getline(cin, num[i].cor);
            getline(cin, num[i].marca);
            cin.ignore();
            cin >> num[i].marcha;
            cin >> num[i].preco;
            cin.ignore();
        }

        cout << fixed << setprecision(2);

        for( int i = 0; i < quantbike; i++){
            if( num[i].marcha >= minmarch && num[i].marcha <= maxmarch){
                cout << num[i].cor << endl;
                cout << num[i].marca << endl;
                cout << num[i].marcha << endl;
                cout << num[i].preco << endl;
            }
        }

        return 0;
    }