#include <stdio.h>

float celsiusParaFahrenheit(float celsius){
    return (celsius * 1.8) + 32;
}

int main(){
    float resultado, celsius;

    printf("Digite a temperatura em graus celsius: ");
    scanf("%f", &celsius);

    resultado = celsiusParaFahrenheit(celsius);

    printf("A temperatura em fahrenheit e: %.2f", resultado);

    return 0;
}
