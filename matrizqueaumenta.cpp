#include <iostream>
#include <vector>
using namespace std;

int main() {
    int tamanho;
    cin >> tamanho;

    int matriz[tamanho][tamanho];

    int valor = 1;
    for (int i = 0; i < tamanho; ++i) {
        for (int j = 0; j < tamanho; ++j) {
            matriz[i][j] = valor++;
        }
    }

    for (int i = 0; i < tamanho; ++i) {
        for (int j = 0; j < tamanho; ++j) {
            cout << matriz[i][j];
            if(j != tamanho-1) cout << " ";
        }
        cout << endl;
    }
    

    return 0;
}