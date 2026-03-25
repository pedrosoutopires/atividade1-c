#include <stdio.h>

int main() {

    int carlos, andre;
    float conta, felipe;

    printf("Digite o valor da conta: R$");
    scanf("%f", &conta);

    carlos = conta/3;
    andre = conta/3;
    felipe = (conta/3) + (conta/3 - andre) + (conta/3 - carlos);

    printf("O valor da conta para Carlos e: %d", carlos);
    printf("\nO valor da conta para Andre e: %d", andre);
    printf("\nO valor da conta para Felipe e: %.2f", felipe);

    return 0;
}
