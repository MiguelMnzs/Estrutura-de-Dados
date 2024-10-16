//Questão 01: Função que retorna o menor número

//Divisão do Programa:
//Função menor:

//Objetivo: Retornar o menor entre dois números inteiros.
//Parâmetros:
//a: O primeiro número inteiro.
//b: O segundo número inteiro.
//Retorno: O menor número entre a e b.
//Função main:

//Objetivo: Ler dois números do usuário e usar a função menor para determinar qual deles é o menor.
//Processo:
//Lê os dois números inteiros.
//Chama a função menor.
//Exibe o menor número.

#include <stdio.h>

int menor(int a, int b) {
    return (a < b) ? a : b;  // Retorna o menor número
}

int main() {
    int x, y;

    // Lê dois números inteiros do usuário
    printf("Digite dois números inteiros: ");
    scanf("%d %d", &x, &y);  // Armazena os números nas variáveis x e y

    // Chama a função menor e imprime o resultado
    printf("O menor número é: %d\n", menor(x, y));

    return 0;  // Finaliza o programa
}
