//Questão 07: Comparar duas strings sem strcmp
//Explicação Geral:
//O objetivo deste programa é comparar duas strings fornecidas pelo usuário e informar se são iguais ou diferentes, sem usar a função strcmp.

//Divisão do Programa:
//Função comparar_strings:
//Objetivo: Ler duas strings e usar a função de comparação.
//Processo:
//Lê as duas strings.
//Chama a função comparar_strings para verificar a igualdade.
//Exibe o resultado da comparação.

#include <stdio.h>

// Função que compara duas strings sem usar strcmp
// Parâmetros:
// str1[]: a primeira string
// str2[]: a segunda string
// Retorno: 1 se as strings forem iguais, 0 se forem diferentes
int comparar_strings(char str1[], char str2[]) {
    int i = 0;
    // Percorre ambas as strings até encontrar uma diferença ou o final
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return 0;  // As strings são diferentes
        }
        i++;
    }
    return str1[i] == str2[i];  // Verifica se ambas terminaram ao mesmo tempo
}

int main() {
    char str1[50], str2[50];  // Arrays para armazenar as duas strings

    // Lê as duas strings do usuário
    printf("Digite a primeira string: ");
    scanf("%s", str1);  // Lê a primeira string
    printf("Digite a segunda string: ");
    scanf("%s", str2);  // Lê a segunda string

    // Chama a função de comparação e imprime o resultado
    if (comparar_strings(str1, str2)) {
        printf("As strings são iguais.\n");
    } else {
        printf("As strings são diferentes.\n");
    }

    return 0;  // Finaliza o programa
}
