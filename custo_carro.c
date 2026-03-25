#include <stdio.h>

int main() {
    float custofabrica, distribuidor = 0.28, impostos = 0.45, custofinal;

    printf("Digite o valor do custo de fabrica: ");
    scanf("%f", &custofabrica);

    custofinal = custofabrica + (custofabrica * distribuidor) + (custofabrica * impostos);

    printf("O custo final e: %.2f", custofinal);

    return 0;
}
