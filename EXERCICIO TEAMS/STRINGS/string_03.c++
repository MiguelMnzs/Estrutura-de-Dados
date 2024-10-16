//Questão 10: Imprimir palavra de trás para frente

//Divisão do Programa:
//Função main:
//Objetivo: Ler uma palavra e exibir essa palavra na ordem inversa.
//Parâmetros: Não há parâmetros de entrada direta.
//Retorno: A palavra é exibida na ordem inversa.
//Processo:
//Lê a palavra do usuário.
//Calcula o comprimento da palavra.
//Exibe a palavra de trás para frente.

#include <stdio.h>
#include <string.h>  // Biblioteca necessária para a função strlen

int main() {
    char palavra[50];  // Array para armazenar a palavra
    int tamanho;  // Variável para armazenar o tamanho da palavra

    // Lê a palavra do usuário
    printf("Digite uma palavra: ");
    scanf("%s", palavra);  // Lê a string do usuário

    // Calcula o tamanho da palavra
    tamanho = strlen(palavra);

    // Imprime a palavra de trás para frente
    printf("Palavra de trás para frente: ");
    for (int i = tamanho - 1; i >= 0; i--) {
        printf("%c", palavra[i]);  // Imprime cada caractere em ordem inversa
    }
    printf("\n");  // Nova linha após a impressão

    return 0;  // Finaliza o programa
}
