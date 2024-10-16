//Questão 01: Cadastro de Alunos
//Explicação Geral:
//O objetivo desse programa é criar uma estrutura chamada Aluno que contém informações sobre um aluno, incluindo nome, email, data de nascimento e um vetor de notas. O programa permite cadastrar até 5 alunos e exibe suas informações, incluindo a média das notas e a idade.

//Divisão do Programa:
//Definição da Estrutura Aluno:

//Objetivo: Criar uma estrutura que armazena informações de um aluno.
//Propriedades:
//nome: Um array de caracteres para armazenar o nome do aluno.
//email: Um array de caracteres para armazenar o email do aluno.
//nascimento: Um array de caracteres para armazenar a data de nascimento do aluno.
//notas: Um vetor de float para armazenar as notas do aluno.
//Função calcular_media:

//Objetivo: Calcular a média das notas do aluno.
//Parâmetros:
//notas[]: O vetor que contém as notas do aluno.
//n: O número de notas.
//Retorno: A média das notas.
//Função main:

//Objetivo: Cadastrar até 5 alunos, calcular e exibir suas médias e idades.
//Processo:
//Lê os dados dos alunos.
//Calcula e exibe a média das notas e a idade.

#include <stdio.h>
#include <string.h>

struct Aluno {
    char nome[50];
    char email[50];
    char nascimento[11]; // Formato: dd/mm/aaaa
    float notas[5];      // Vetor para até 5 notas
};

// Função que calcula a média das notas
float calcular_media(float notas[], int n) {
    float soma = 0;
    for (int i = 0; i < n; i++) {
        soma += notas[i];  // Soma todas as notas
    }
    return soma / n;  // Retorna a média
}

int main() {
    struct Aluno alunos[5];  // Array de alunos
    int i, j;

    // Cadastrando até 5 alunos
    for (i = 0; i < 5; i++) {
        printf("Digite o nome do aluno %d: ", i + 1);
        scanf("%s", alunos[i].nome);  // Lê o nome
        printf("Digite o email do aluno %d: ", i + 1);
        scanf("%s", alunos[i].email);  // Lê o email
        printf("Digite a data de nascimento do aluno %d (dd/mm/aaaa): ", i + 1);
        scanf("%s", alunos[i].nascimento);  // Lê a data de nascimento

        printf("Digite as 5 notas do aluno %d:\n", i + 1);
        for (j = 0; j < 5; j++) {
            printf("Nota %d: ", j + 1);
            scanf("%f", &alunos[i].notas[j]);  // Lê as notas
        }
    }

    // Exibindo os dados dos alunos
    for (i = 0; i < 5; i++) {
        printf("\nAluno %d: %s\n", i + 1, alunos[i].nome);
        printf("Email: %s\n", alunos[i].email);
        printf("Data de nascimento: %s\n", alunos[i].nascimento);
        printf("Média das notas: %.2f\n", calcular_media(alunos[i].notas, 5));
    }

    return 0;  // Finaliza o programa
}
