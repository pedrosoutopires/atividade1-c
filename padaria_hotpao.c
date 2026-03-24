#include <stdio.h>

int main() {
    float pao = 0.12, broa = 1.50, poupanca, faturamento;
    int paes, broas;
    printf("Digite o numero de paes: ");
    scanf("%d", &paes);
    printf("Digite o numero de broas: ");
    scanf("%d", &broas);

    faturamento = (pao * paes) + (broa * broas);
    poupanca = faturamento * 0.1;

    printf("Faturamento: %.2f", faturamento);
    printf("\nValor destinado a poupanca: %.2f", poupanca);

    return 0;
}
