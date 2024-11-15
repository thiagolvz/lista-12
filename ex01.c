#include <stdio.h>
#include <stdlib.h>

typedef struct Aluno {
    char nome[100];
    int faltas;
    float nota;
} aluno_t;

int main() {
    aluno_t *novo_aluno = (aluno_t *)malloc(sizeof(aluno_t));
    if (novo_aluno == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    // Entrada de dados do aluno
    printf("Digite o nome do aluno: ");
    scanf(" %[^\n]", novo_aluno->nome);

    printf("Digite o número de faltas: ");
    scanf("%d", &novo_aluno->faltas);

    printf("Digite a nota do aluno: ");
    scanf("%f", &novo_aluno->nota);

    // Exibe os dados do aluno
    printf("\n--- Dados do Aluno ---\n");
    printf("Nome: %s\n", novo_aluno->nome);
    printf("Faltas: %d\n", novo_aluno->faltas);
    printf("Nota: %.2f\n", novo_aluno->nota);

    // Verifica aprovação (considerando aprovação com nota >= 5 e até 25% de faltas)
    if (novo_aluno->nota >= 5 && novo_aluno->faltas <= 25) {
        printf("Status: Aprovado\n");
    } else {
        printf("Status: Reprovado\n");
    }

    // Libera memória alocada
    free(novo_aluno);
    return 0;
}
