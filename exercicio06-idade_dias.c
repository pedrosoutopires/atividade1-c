#include <stdio.h>

int main() {
    int anos, meses, dias, diastotais;

    printf("Digite os anos: ");
    scanf("%d", &anos);

    printf("Digite os meses: ");
    scanf("%d", &meses);

    printf("Digite os dias: ");
    scanf("%d", &dias);

    diastotais = (anos * 365) + (meses * 30) + dias;
    printf("A quantidade de dias de vida e: %d", diastotais);

    return 0;
}
