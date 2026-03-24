#include <stdio.h>

int main() {
    int real1, moeda50, moeda25, moeda10, moeda5, moeda1, valor;
    printf("Digite o valor em centavos: ");
    scanf("%d", &valor);

    real1 = valor / 100;
    valor = valor % 100;

    moeda50 = valor / 50;
    valor = valor % 50;

    moeda25 = valor / 25;
    valor = valor % 25;

    moeda10 = valor / 10;
    valor = valor % 10;

    moeda5 = valor / 5;
    valor = valor % 5;

    moeda1 = valor;

    printf("Moedas de 1 real: %d\n", real1);
    printf("Moedas de 50 centavos: %d\n", moeda50);
    printf("Moedas de 25 centavos: %d\n", moeda25);
    printf("Moedas de 10 centavos: %d\n", moeda10);
    printf("Moedas de 5 centavos: %d\n", moeda5);
    printf("Moedas de 1 centavo: %d\n", moeda1);

    return 0;
}
