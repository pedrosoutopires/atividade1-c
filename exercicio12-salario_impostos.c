#include <stdio.h>

int main() {
  float salarioatual, salarionovo, salarionovoimposto, imposto = 0.08;

  printf("Digite o salario atual: R$");
  scanf("%f", &salarioatual);

  salarionovo = salarioatual + (salarioatual * 0.15);

  salarionovoimposto = salarionovo - (salarionovo * 0.08);

  printf("O salario atual e: R$%.2f", salarioatual);
  printf("\nO salario com aumento e sem os impostos e: R$%.2f", salarionovo);
  printf("\nO salario com aumento e com os impostos e: R$%.2f", salarionovoimposto);

  return 0;
}
