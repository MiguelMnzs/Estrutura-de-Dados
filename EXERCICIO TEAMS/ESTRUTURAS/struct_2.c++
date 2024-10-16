//Questão 02: Estrutura que representa bandas de música
//Explicação Geral:
//criar uma estrutura chamada Banda que contém informações sobre uma banda, incluindo o nome, tipo de música, número de integrantes e posição no ranking. O programa permite cadastrar informações de 5 bandas.

//Divisão do Programa:
//Definição da Estrutura Banda:

//Objetivo: Criar uma estrutura que armazena informações de uma banda.
//Propriedades:
//nome: Um array de caracteres para armazenar o nome da banda.
//tipoMusica: Um array de caracteres para armazenar o tipo de música da banda.
//integrantes: Um inteiro para armazenar o número de integrantes da banda.
//ranking: Um inteiro para armazenar a posição no ranking.
//Função main:

//Objetivo: Cadastrar até 5 bandas e exibir suas informações.
//Processo:
//Lê os dados das bandas.
//Exibe as informações de cada banda.

#include <stdio.h>

struct Banda {
    char nome[50];
    char tipoMusica[30];
    int integrantes;
    int ranking;
};

int main() {
    struct Banda bandas[5];  // Array de bandas
    int i;

    // Cadastrando até 5 bandas
    for (i = 0; i < 5; i++) {
        printf("Digite o nome da banda %d: ", i + 1);
        scanf("%s", bandas[i].nome);  // Lê o nome
        printf("Digite o tipo de música da banda %d: ", i + 1);
        scanf("%s", bandas[i].tipoMusica);  // Lê o tipo de música
        printf("Digite o número de integrantes da banda %d: ", i + 1);
        scanf("%d", &bandas[i].integrantes);  // Lê o número de integrantes
        printf("Digite a posição no ranking da banda %d: ", i + 1);
        scanf("%d", &bandas[i].ranking);  // Lê a posição no ranking
    }

    // Exibindo os dados das bandas
    printf("\nBandas cadastradas:\n");
    for (i = 0; i < 5; i++) {
        printf("\nBanda %d:\n", i + 1);
        printf("Nome: %s\n", bandas[i].nome);
        printf("Tipo de música: %s\n", bandas[i].tipoMusica);
        printf("Número de integrantes: %d\n", bandas[i].integrantes);
        printf("Posição no ranking: %d\n", bandas[i].ranking);
    }

    return 0;  // Finaliza o programa
}
