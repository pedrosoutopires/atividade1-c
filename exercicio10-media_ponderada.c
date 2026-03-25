#include <stdio.h>

int main() {
    float nota1, nota2, nota3, notafinal;

    printf("Digite o valor da primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite o valor da segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite o valor da terceira nota: ");
    scanf("%f", &nota3);

    notafinal = (nota1*1 + nota2*2 + nota3*3)/6;

    printf("A nota final e: %.2f", notafinal);

    return 0;
}
