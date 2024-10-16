#include <stdio.h>

// Função que verifica se um número está presente em um vetor
// Parâmetros:
// vetor[]: o vetor onde a matrícula será buscada
// tamanho: o tamanho do vetor (número de elementos, aqui 10)
// matricula: a matrícula que será verificada
// Retorno: 1 se a matrícula for encontrada, 0 se não for encontrada

int verificar_matricula(int vetor[], int tamanho, int matricula) {
    // Percorre o vetor até o final, comparando cada elemento com a matrícula fornecida
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] == matricula) {
            return 1; // Matrícula encontrada no vetor
        }
    }
    return 0; // Matrícula não encontrada após percorrer o vetor inteiro
}

int main() {
    int vetor[10];  // Vetor que armazenará as 10 matrículas fornecidas pelo usuário
    int matriculas_a_verificar[3];  // Vetor que armazenará as 3 matrículas a serem verificadas

    // Lendo as 10 matrículas e armazenando no vetor
    printf("Digite as 10 matrículas dos alunos:\n");
    for (int i = 0; i < 10; i++) {
        printf("Matrícula %d: ", i + 1);  // Solicita ao usuário uma matrícula
        scanf("%d", &vetor[i]);  // Armazena o valor digitado no vetor
    }

    // Lendo as 3 matrículas que precisam ser verificadas
    printf("\nDigite 3 matrículas para verificar se estão presentes:\n");
    for (int i = 0; i < 3; i++) {
        printf("Matrícula %d: ", i + 1);  // Solicita ao usuário uma matrícula para verificar
        scanf("%d", &matriculas_a_verificar[i]);  // Armazena a matrícula no vetor de verificação
    }

    // Verificando as 3 matrículas e imprimindo o resultado
    for (int i = 0; i < 3; i++) {
        // Chama a função para verificar se a matrícula está presente no vetor
        if (verificar_matricula(vetor, 10, matriculas_a_verificar[i])) {
            printf("A matrícula %d está presente no vetor.\n", matriculas_a_verificar[i]);
        } else {
            printf("A matrícula %d NÃO está presente no vetor.\n", matriculas_a_verificar[i]);
        }
    }

    return 0;  // Finaliza o programa
}
