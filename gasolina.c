#include <stdio.h>

int main() {
    float pagamento, preco, litros;

    printf("Digite o valor do pagamento: ");
    scanf("%f", &pagamento);

    printf("Digite o preco da gasolina: ");
    scanf("%f", &preco);

    litros = pagamento / preco;

    printf("O numero de litros e: %.2f", litros);

    return 0;
}
