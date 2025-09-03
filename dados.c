#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int qtdTipos=0, qtdDados=0, lados=0;
    int resultado=0, somaTotal = 0;

    srand(time(NULL));

    printf("=== Rolagem de Dados RPG ===\n");
    printf("Quantos tipos de dados diferentes deseja rolar (1 a 4)? ");
    scanf("%d", &qtdTipos);

    if (qtdTipos < 1 || qtdTipos > 4) {
        printf("Quantidade invalida! Escolha entre 1 e 4.\n");
        return 1;
    }

    for (int t = 1; t <= qtdTipos; t++) {
        printf("\nTipo %d:\n", t);

        printf("  Quantos dados? ");
        scanf("%d", &qtdDados);

        printf("  Qual o tipo de dado (4, 6, 8, 10, 12, 20)? d");
        scanf("%d", &lados);

        if (lados != 4 && lados != 6 && lados != 8 && lados != 10 && lados != 12 && lados != 20) {
            printf("  Tipo de dado invalido!\n");
            return 1;
        }

        printf("  Rolando %d d%d...\n", qtdDados, lados);

        int somaParcial = 0;
        for (int i = 1; i <= qtdDados; i++) {
            resultado = (rand() % lados) + 1;
            printf("    Dado %d: %d\n", i, resultado);
            somaParcial += resultado;
        }

        printf("  Subtotal (d%d): %d\n", lados, somaParcial);
        somaTotal += somaParcial;
    }

    printf("\n=== Resultado Final ===\n");
    printf("Total: %d\n", somaTotal);

    return 0;
}
