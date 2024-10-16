//Explicação Geral:
//O objetivo do programa é ler 10 números inteiros de um vetor e calcular a soma dos números ímpares presentes nesse vetor. O programa utiliza uma estrutura simples que percorre o vetor, verifica se cada número é ímpar e, se for, adicionar a uma variável acumuladora que mantém a soma total.

//Divisão do Programa:
//Função main:
//Objetivo: Ler 10 números inteiros, calcular a soma dos números ímpares e exibir o resultado.
//Parâmetros: Não há parâmetros de entrada direta para a função main, mas o vetor é preenchido pelo usuário.
//Retorno: O resultado da soma dos números ímpares é exibido no console.
//Processo:
//Lê os 10 números inteiros e os armazena em um vetor.
//Percorre o vetor para verificar se cada número é ímpar.
//Se um número for ímpar, ele é adicionado à soma total.
//Exibe a soma total dos números ímpares ao final.

#include <stdio.h>

int main() {
    int vetor[10];  // Vetor que armazenará os 10 números inteiros
    int soma = 0;   // Variável para armazenar a soma dos números ímpares

    // Lendo os valores do vetor
    printf("Digite 10 números inteiros:\n");
    for (int i = 0; i < 10; i++) {
        printf("Número %d: ", i + 1);  // Solicita ao usuário um número
        scanf("%d", &vetor[i]);  // Armazena o número no vetor
        // Verifica se o número é ímpar
        if (vetor[i] % 2 != 0) {
            soma += vetor[i];  // Adiciona o número ímpar à soma total
        }
    }

    // Exibe a soma dos números ímpares
    printf("A soma dos números ímpares é: %d\n", soma);

    return 0;  // Finaliza o programa
}
