#include <stdio.h>

int main() {

    float hora, horaextra, imposto = 0.1, salariobruto, salarioliquido;

    printf("Digite as horas normais: ");
    scanf("%f", &hora);

    printf("Digite as horas extras: ");
    scanf("%f", &horaextra);

    salariobruto = (hora * 10) + (horaextra * 15);
    salarioliquido = salariobruto - (salariobruto * imposto);

    printf("O salario bruto e: %.2f", salariobruto);
    printf("\nO salario liquido e: %.2f", salarioliquido);

    return 0;
}
