#include <stdio.h>

int converterParaMinutos(int horas, int minutos){
    return (horas * 60) + minutos;
}

int main(){
    int resultado, horas, minutos;

    printf("Digite as horas: ");
    scanf("%d", &horas);

    printf("Digite os minutos: ");
    scanf("%d", &minutos);

    resultado = converterParaMinutos(horas, minutos);

    printf("Os minutos totais sao: %d", resultado);

    return 0;
}
