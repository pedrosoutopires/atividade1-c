#include <stdio.h>

int main() {
  int camisetapequena, camisetamedia, camisetagrande;
  float valor_arrecadado;

  printf("Digite o numero de camisetas pequenas: ");
  scanf("%d", &camisetapequena);
  printf("Digite o numero de camisetas medias: ");
  scanf("%d", &camisetamedia);
  printf("Digite o numero de camisetas grandes: ");
  scanf("%d", &camisetagrande);

  valor_arrecadado = (camisetapequena * 10) + (camisetamedia * 12) + (camisetagrande * 15);

  printf("O valor total arrecadado e: %.2f", valor_arrecadado);

  return 0;
}
