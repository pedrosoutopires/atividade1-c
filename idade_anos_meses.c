#include <stdio.h>

int main() {
    int anos, meses, dias;

    printf("Digite o numero de dias: ");
    scanf("%d", &dias);

    anos = dias / 365;
    dias = dias % 365;

    meses = dias / 30;
    dias = dias % 30;

    printf("O numero de anos e: %d", anos);
    printf("\nO numero de meses e: %d", meses);
    printf("\nO numero de dias e: %d", dias);

    return 0;
}
