#include <stdio.h>
#include <math.h>

float calcularHipotenusa(float cateto1, float cateto2){

    return(sqrt((cateto1*cateto1) + (cateto2*cateto2)));
}

int main(){
    float resultado, cateto1, cateto2;

    printf("Digite o valor do primeiro cateto: ");
    scanf("%f", &cateto1);

    printf("Digite o valor do segundo cateto: ");
    scanf("%f", &cateto2);

    resultado = calcularHipotenusa(cateto1, cateto2);

    printf("O valor da hipotenusa e: %.2f", resultado);

    return 0;
}
