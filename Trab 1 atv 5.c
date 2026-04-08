#include <stdio.h>

int main() {
    int vetor[3], matriz[3][3], resultado[3];
    int i, j;

    // Leitura do vetor
    printf("Digite os 3 elementos do vetor:\n");
    for(i = 0; i < 3; i++) {
        scanf("%d", &vetor[i]);
    }

    // Leitura da matriz
    printf("Digite os elementos da matriz 3x3:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    // Multiplicação do vetor pelas colunas da matriz
    for(j = 0; j < 3; j++) {
        resultado[j] = 0;
        for(i = 0; i < 3; i++) {
            resultado[j] += vetor[i] * matriz[i][j];
        }
    }

    // Impressão do resultado
    printf("\nResultado da multiplicacao:\n");
    for(j = 0; j < 3; j++) {
        printf("%d ", resultado[j]);
    }

    printf("\n");
    return 0;
}