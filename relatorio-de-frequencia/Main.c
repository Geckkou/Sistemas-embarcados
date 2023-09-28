#include <stdio.h>
int main()
{
    int temps[20]; // Vetor para armazenar as entradas
    int frequencia[20] = {0}; // Contador de frequencia

    // Entrada de Valores
    for (int i = 0; i < 20; i++) {
        printf("Informe os valores das temperaturas - %d valor:\n", (i+1));
        scanf("%d", &temps[i]);
    }

    // Calcula a frequência das temperaturas
    for (int i = 0; i < 20; i++) {
        int contagem = 1; // Inicializa a contagem para a temperatura atual
        if (temps[i] != -1) { // Verifica se a temperatura já foi contada
            for (int j = i + 1; j < 20; j++) {
                if (temps[j] == temps[i]) {
                    contagem++;
                    temps[j] = -1; // Marca a temperatura como contada
                }
            }
            frequencia[i] = contagem;
        }
    }

    // Ordena as temperaturas em ordem decrescente de frequência (usando Bubble Sort)
    for (int i = 0; i < 20 - 1; i++) {
        for (int j = 0; j < 20 - i - 1; j++) {
            if (frequencia[j] < frequencia[j + 1]) {
                // Troca as frequências
                int temp = frequencia[j];
                frequencia[j] = frequencia[j + 1];
                frequencia[j + 1] = temp;

                // Troca as temperaturas correspondentes
                temp = temps[j];
                temps[j] = temps[j + 1];
                temps[j + 1] = temp;
            }
        }
    }

    // Imprime o relatório de frequência
    printf("RELATÓRIO DE FREQUÊNCIA\n");
    printf("=======================\n");
    for (int i = 0; i < 20; i++) {
        if (frequencia[i] > 0) {
            printf("%d - %d VEZES\n", temps[i], frequencia[i]);
        }
    }

    return 0;
}