#include <stdio.h>

float calcularAreaCirculo(float raio){
    return (raio* raio) * 3.14159;
}

int main(){
    float resultado, raio;

    printf("Digite o valor do raio: ");
    scanf("%f", &raio);

    resultado = calcularAreaCirculo(raio);

    printf("A area do circulo e: %.2f", resultado);

    return 0;
}
