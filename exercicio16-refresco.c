#include <stdio.h>

int main() {

    float agua, suco, litros;

    printf("Digite um numero de litros do refresco: ");
    scanf("%f", &litros);

    agua = litros * 0.8;
    suco = litros * 0.2;

    printf("Serao necessarios, em litros de agua: %.2f", agua);
    printf("\nSerao necessarios, em litros de suco: %.2f", suco);

    return 0;
}
