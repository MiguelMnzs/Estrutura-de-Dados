// Função verificar_matricula:
//Esta função recebe um vetor, seu tamanho e uma matrícula a ser verificada. Ela percorre o vetor e retorna 1 se a matrícula for encontrada, e 0 caso contrário.
//Função main:
//A função principal começa lendo 10 números de matrículas e armazenando-os em um vetor. Em seguida, solicita 3 números de matrículas adicionais que precisam ser verificados. Para cada uma das 3 matrículas, o programa chama a função verificar_matricula e exibe uma mensagem indicando se a matrícula está ou não no vetor.

#include <stdio.h>

// Função que verifica se um número está presente em um vetor
int verificar_matricula(int vetor[], int tamanho, int matricula) {
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] == matricula) {
            return 1; // Matrícula encontrada
        }
    }
    return 0; // Matrícula não encontrada
}

int main() {
    int vetor[10];
    int matriculas_a_verificar[3];

    // Lendo as 10 matrículas e armazenando no vetor
    printf("Digite as 10 matrículas dos alunos:\n");
    for (int i = 0; i < 10; i++) {
        printf("Matrícula %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    // Lendo as 3 matrículas que precisam ser verificadas
    printf("\nDigite 3 matrículas para verificar se estão presentes:\n");
    for (int i = 0; i < 3; i++) {
        printf("Matrícula %d: ", i + 1);
        scanf("%d", &matriculas_a_verificar[i]);
    }

    // Verificando as 3 matrículas e imprimindo o resultado
    for (int i = 0; i < 3; i++) {
        if (verificar_matricula(vetor, 10, matriculas_a_verificar[i])) {
            printf("A matrícula %d está presente no vetor.\n", matriculas_a_verificar[i]);
        } else {
            printf("A matrícula %d NÃO está presente no vetor.\n", matriculas_a_verificar[i]);
        }
    }

    return 0;
}

