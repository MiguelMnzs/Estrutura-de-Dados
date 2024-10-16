//Questão 06: Função que calcula a média de notas
//Explicação Geral:
//O objetivo do programa é criar uma função que recebe três notas e uma letra que indica o tipo de média a ser calculada (aritmética, ponderada ou harmônica) e retorna o resultado.

//Divisão do Programa:
//Funções de cálculo de média:

//media_aritmetica:
//Objetivo: Calcular a média aritmética.
//Parâmetros:
//notas[]: Um array contendo as 3 notas.
//Retorno: A média aritmética.
//media_ponderada:
//Objetivo: Calcular a média ponderada.
//Parâmetros:
//notas[]: Um array contendo as 3 notas.
//Retorno: A média ponderada.
//media_harmonica:
//Objetivo: Calcular a média harmônica.
//Parâmetros:
//notas[]: Um array contendo as 3 notas.
//Retorno: A média harmônica.
//Função main:

//Objetivo: Ler as notas e o tipo de média do usuário e usar as funções para calcular e exibir o resultado.
//Processo:
//Lê as três notas.
//Lê o tipo de média (A, P, H).
//Chama a função apropriada com base na letra.
//Exibe o resultado.

#include <stdio.h>

// Função que calcula a média aritmética
float media_aritmetica(float notas[]) {
    return (notas[0] + notas[1] + notas[2]) / 3;  // Retorna a média aritmética
}

// Função que calcula a média ponderada
float media_ponderada(float notas[]) {
    return (5 * notas[0] + 3 * notas[1] + 2 * notas[2]) / 10;  // Retorna a média ponderada
}

// Função que calcula a média harmônica
float media_harmonica(float notas[]) {
    return 3 / (1/notas[0] + 1/notas[1] + 1/notas[2]);  // Retorna a média harmônica
}

int main() {
    float notas[3];  // Array para armazenar as 3 notas
    char tipo_media; // Variável para armazenar o tipo de média

    // Lê as 3 notas do usuário
    printf("Digite as 3 notas: ");
    for (int i = 0; i < 3; i++) {
        scanf("%f", &notas[i]);  // Armazena cada nota no array
    }

    // Lê o tipo de média que será calculada
    printf("Escolha o tipo de média (A para aritmética, P para ponderada, H para harmônica): ");
    scanf(" %c", &tipo_media);  // Lê o tipo de média

    // Calcula e imprime a média correspondente
    if (tipo_media == 'A') {
        printf("Média aritmética: %.2f\n", media_aritmetica(notas));
    } else if (tipo_media == 'P') {
        printf("Média ponderada: %.2f\n", media_ponderada(notas));
    } else if (tipo_media == 'H') {
        printf("Média harmônica: %.2f\n", media_harmonica(notas));
    } else {
        printf("Tipo de média inválido.\n");
    }

    return 0;  // Finaliza o programa
}
