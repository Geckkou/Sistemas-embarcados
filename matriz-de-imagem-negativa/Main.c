#include <stdio.h>

int main() {
    int linhas, colunas;

    // Solicita ao usuário o tamanho em linhas e colunas da matriz
    printf("Número de linhas: ");
    scanf("%d", &linhas);
    printf("Número de colunas: ");
    scanf("%d", &colunas);

    // Declara as matrizes para a imagem original e a imagem invertida
    int imagemOriginal[linhas][colunas];
    int imagemInvertida[linhas][colunas];

    // Solicita ao usuário os valores da matriz da imagem original
    printf("Valores digitados para a matriz (por linha):\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            scanf("%d", &imagemOriginal[i][j]);
        }
    }

    // Exibe a matriz da imagem original
    printf("Matriz da imagem original (digitada):\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%3d ", imagemOriginal[i][j]);
        }
        printf("\n");
    }

    // Gera a matriz da imagem invertida
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            imagemInvertida[i][j] = 255 - imagemOriginal[i][j];
        }
    }

    // Exibe a matriz da imagem invertida
    printf("Matriz da imagem invertida (gerada pelo programa):\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%3d ", imagemInvertida[i][j]);
        }
        printf("\n");
    }

    return 0;
}
