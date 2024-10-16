//Questão 03: Função que calcula potência

//Divisão do Programa:
//Função potencia:

//Objetivo: Calcular e retornar a potência de um número.
//Parâmetros:
//base: O número que será elevado.
//expoente: O expoente ao qual a base será elevada (um inteiro maior ou igual a 1).
//Retorno: O resultado da base elevada ao expoente.
//Função main:

//Objetivo: Ler a base e o expoente do usuário e usar a função potencia para calcular e exibir o resultado.
//Processo:
//Lê a base e o expoente.
//Chama a função potencia.
//Exibe o resultado.

#include <stdio.h>

int potencia(int base, int expoente) {
    int resultado = 1;  // Inicializa o resultado como 1
    for (int i = 0; i < expoente; i++) {
        resultado *= base;  // Multiplica a base pelo resultado
    }
    return resultado;  // Retorna o resultado final
}

int main() {
    int base, expoente;

    // Lê a base e o expoente do usuário
    printf("Digite a base e o expoente: ");
    scanf("%d %d", &base, &expoente);  // Armazena os valores

    // Chama a função potencia e imprime o resultado
    printf("%d elevado a %d é: %d\n", base, expoente, potencia(base, expoente));

    return 0;  // Finaliza o programa
}
