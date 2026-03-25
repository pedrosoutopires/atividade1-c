#include <stdio.h>

int main() {

    float produto, desconto = 0.1, produtonovo;

    printf("Digite o valor do produto: ");
    scanf("%f", &produto);

    produtonovo = produto - (produto * desconto);

    printf("O valor do produto com desconto e: %.2f", produtonovo);

    return 0;
}
