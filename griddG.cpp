#include <stdio.h>
#include <math.h>

// Função para imprimir a tabela verdade
void print_truth_table(int G) {
    int combinations = pow(2, G); // Número total de combinações possíveis

    // Iterar sobre todas as combinações possíveis
    for (int i = 0; i < combinations; i++) {

        // Converter o número decimal para binário com formatação correta
        for (int j = G - 1; j >= 0; j--) {
            printf("%d", (i >> j) & 1);
            if( j != 0){
                printf(" ");//adiciona espações entre os numeros, menos no ultimo
            }
        }
        printf("\n");
    }
}
int main() {
    int G;
    scanf("%d", &G);  // Lê o número de variáveis G

    // Chama a função para imprimir a tabela verdade
    print_truth_table(G);

    return 0;
}
