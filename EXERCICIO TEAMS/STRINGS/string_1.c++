//Questão 03: Imprimir nome se começar com 'a'
//Explicação Geral:
//O objetivo do programa é ler um nome e imprimir esse nome apenas se a primeira letra for 'a' (tanto maiúscula quanto minúscula).

//Divisão do Programa:
//Função main:
//Objetivo: Ler um nome e verificar se a primeira letra é 'a'.
//Parâmetros: Não há parâmetros de entrada direta.
//Retorno: O nome é exibido se começar com 'a'; caso contrário, uma mensagem informando que não começa com 'a' é exibida.
//Processo:
//Lê o nome do usuário.
//Verifica a primeira letra do nome.
//Exibe o nome ou uma mensagem de acordo com a condição.

#include <stdio.h>
#include <ctype.h>  // Biblioteca necessária para a função tolower

int main() {
    char nome[50];  // Array para armazenar o nome

    // Lê o nome do usuário
    printf("Digite um nome: ");
    scanf("%s", nome);  // Lê a string do usuário

    // Verifica se a primeira letra é 'a' (considerando maiúscula e minúscula)
    if (tolower(nome[0]) == 'a') {
        printf("O nome digitado é: %s\n", nome);  // Imprime o nome se começar com 'a'
    } else {
        printf("O nome não começa com 'a'.\n");  // Mensagem caso contrário
    }

    return 0;  // Finaliza o programa
}
