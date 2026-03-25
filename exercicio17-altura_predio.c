#include <stdio.h>

int main() {

    float sombrapredio, sombrapessoa, alturapredio, alturapessoa;

    printf("Digite, em metros, sua altura: ");
    scanf("%f", &alturapessoa);

    printf("Digite, em metros, o comprimento de sua sombra: ");
    scanf("%f", &sombrapessoa);

    printf("Digite, em metros, o comprimento da sombra do predio: ");
    scanf("%f", &sombrapredio);

    alturapredio = (sombrapredio/sombrapessoa) * alturapessoa;

    printf("A altura do predio e: %.2f", alturapredio);

    return 0;
}
