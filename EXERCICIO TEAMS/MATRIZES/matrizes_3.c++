//Questão 09: Multiplicação de duas matrizes 3x3
//Explicação Geral:
//O objetivo desse programa é ler duas matrizes 3x3 e calcular o produto delas, exibindo a matriz resultante da multiplicação.

//Divisão do Programa:
//Função main:
//Objetivo: Ler duas matrizes 3x3 e calcular e exibir a matriz resultante da multiplicação.
//Parâmetros: Não há parâmetros de entrada direta.
//Retorno: A matriz resultante é exibida.
//Processo:
//Lê os valores das duas matrizes.
//Calcula a multiplicação e armazena os resultados em uma matriz resultante.
//Exibe a matriz resultante.

#include <stdio.h>

int main() {
    int matrizA[3][3], matrizB[3][3], matrizResultado[3][3] = {0};  // Matrizes 3x3 e matriz resultado

    // Lendo os valores da primeira matriz 3x3
    printf("Digite os valores da primeira matriz 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Matriz A[%d][%d]: ", i, j);  // Solicita ao usuário o valor
            scanf("%d", &matrizA[i][j]);  // Lê e armazena o valor na matriz A
        }
    }

    // Lendo os valores da segunda matriz 3x3
    printf("Digite os valores da segunda matriz 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Matriz B[%d][%d]: ", i, j);  // Solicita ao usuário o valor
            scanf("%d", &matrizB[i][j]);  // Lê e armazena o valor na matriz B
        }
    }

    // Multiplicação das matrizes
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                matrizResultado[i][j] += matrizA[i][k] * matrizB[k][j];  // Calcula o produto
            }
        }
    }

    // Exibindo a matriz resultado
    printf("\nResultado da multiplicação das matrizes:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrizResultado[i][j]);  // Imprime cada elemento da matriz resultado
        }
        printf("\n");  // Nova linha para cada linha da matriz
    }

    return 0;  // Finaliza o programa
}
