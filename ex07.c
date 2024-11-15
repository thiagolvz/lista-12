#include <stdio.h>

int main() {
    // Declaração das variáveis
    float nota;
    float frequencia;
    
    // Recebe os dados do estudante
    printf("Digite a nota do estudante: ");
    scanf("%f", &nota);
    
    printf("Digite a frequencia do estudante (em %%): ");
    scanf("%f", &frequencia);
    
    // Avaliação do estudante
    if (nota >= 7 && frequencia >= 75) {
        printf("Estudante aprovado!\n");
    } else {
        printf("Estudante reprovado!\n");
    }
    
    return 0;
}
