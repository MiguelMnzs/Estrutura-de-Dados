//Questão 06: Verificar se banda está entre as favoritas
//Explicação Geral:
//permitir que o usuário verifique se uma banda está entre suas 5 bandas favoritas, usando a estrutura definida anteriormente.

//Divisão do Programa:
//Objetivo: Cadastrar até 5 bandas e verificar se uma banda específica está entre as favoritas.
//Processo:
//Lê os dados das bandas.
//Lê o nome da banda a ser verificada.
//Compara o nome informado com as bandas cadastradas e exibe se a banda está ou não entre as favoritas.

#include <stdio.h>
#include <string.h>  // Biblioteca necessária para usar strcmp

struct Banda {
    char nome[50];
    char tipoMusica[30];
    int integrantes;
    int ranking;
};

int main() {
    struct Banda bandas[5];  // Array de bandas
    char nomeBuscado[50];    // Banda a ser verificada
    int i, encontrada = 0;    // Flag para verificar se a banda foi encontrada

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

    // Verificando se a banda está entre as favoritas
    printf("\nDigite o nome da banda para verificar se está entre as favoritas: ");
    scanf("%s", nomeBuscado);  // Lê o nome da banda a ser verificada

    // Compara a banda buscada com as bandas cadastradas
    for (i = 0; i < 5; i++) {
        if (strcmp(bandas[i].nome, nomeBuscado) == 0) {
            encontrada = 1;  // Banda encontrada
            break;  // Sai do loop
        }
    }

    // Exibe o resultado da verificação
    if (encontrada) {
        printf("A banda %s está entre as favoritas.\n", nomeBuscado);
    } else {
        printf("A banda %s NÃO está entre as favoritas.\n", nomeBuscado);
    }

    return 0;  // Finaliza o programa
}
