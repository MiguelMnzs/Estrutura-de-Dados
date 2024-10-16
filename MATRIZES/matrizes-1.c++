//Questão 01: Preencher vetor a partir de uma matriz 5x2
//Explicação Geral:
//O objetivo desse programa é preencher uma matriz de 5x2 com números inteiros e, em seguida, transferir esses valores para um vetor de 10 elementos. O vetor resultante é então exibido.

//Divisão do Programa:
//Função main:
//Objetivo: Ler 10 números inteiros de uma matriz 5x2 e armazená-los em um vetor.
//Parâmetros: Não há parâmetros de entrada direta. Os valores da matriz são lidos do usuário.
//Retorno: O vetor resultante é exibido após o preenchimento.
//Processo:
//Lê os valores da matriz 5x2 e armazena no vetor.
//Exibe o vetor preenchido.

#include <stdio.h>

int main() {
    int matriz[5][2];  // Matriz 5x2
    int vetor[10];     // Vetor que armazenará os 10 valores

    // Lendo os valores da matriz 5x2
    printf("Digite os valores da matriz 5x2:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Matriz[%d][%d]: ", i, j);  // Solicita ao usuário o valor
            scanf("%d", &matriz[i][j]);  // Lê e armazena o valor na matriz
            vetor[i * 2 + j] = matriz[i][j];  // Preenche o vetor com os valores da matriz
        }
    }

    // Exibindo o vetor resultante
    printf("\nVetor preenchido:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);  // Imprime cada elemento do vetor
    }

    return 0;  // Finaliza o programa
}
