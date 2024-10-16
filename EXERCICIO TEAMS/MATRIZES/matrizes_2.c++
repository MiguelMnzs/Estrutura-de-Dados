//Questão 04: Imprimir diagonal de trás para frente
//Explicação Geral:
//O objetivo do programa é ler uma matriz 3x3 e imprimir os valores da diagonal principal (de cima para baixo, da esquerda para a direita) em ordem inversa.

//Divisão do Programa:
//Função main:
//Objetivo: Ler os valores de uma matriz 3x3 e exibir a diagonal principal de trás para frente.
//Parâmetros: Não há parâmetros de entrada direta.
//Retorno: A diagonal principal da matriz é exibida na ordem inversa.
//Processo:
//Lê os valores da matriz 3x3.
//Imprime os elementos da diagonal principal em ordem inversa.

#include <stdio.h>

int main() {
    int matriz[3][3];  // Matriz 3x3

    // Lendo os valores da matriz 3x3
    printf("Digite os valores da matriz 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Matriz[%d][%d]: ", i, j);  // Solicita ao usuário o valor
            scanf("%d", &matriz[i][j]);  // Lê e armazena o valor na matriz
        }
    }

    // Imprimindo a diagonal principal de trás para frente
    printf("\nDiagonal principal de trás para frente:\n");
    for (int i = 2; i >= 0; i--) {
        printf("%d ", matriz[i][i]);  // Imprime os elementos da diagonal
    }

    return 0;  // Finaliza o programa
}
