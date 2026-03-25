#include <stdio.h>

int main() {
    int ferraduras, cavalos;
    
    printf("Digite o numero de cavalos: ");
    scanf("%d", &cavalos);

    ferraduras = cavalos * 4;
    printf("O numero de ferraduras e: %d", ferraduras);

    return 0;
}
