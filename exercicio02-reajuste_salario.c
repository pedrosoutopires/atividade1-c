#include <stdio.h>

int main() {
    float salarioatual, reajuste, salarionovo, aumento;
    
    printf("Digite o salario atual: \nR$");
    scanf("%f", &salarioatual);
    
    printf("Digite a porcentagem do reajuste: \n");
    scanf("%f", &reajuste);

    salarionovo = salarioatual + (salarioatual * (reajuste/100));
    printf("O novo valor do salario e: R$%.2f", salarionovo);

    aumento = salarionovo - salarioatual;
    
    printf("\nO aumento foi de: R$%.2f", aumento);

    return 0;
}
