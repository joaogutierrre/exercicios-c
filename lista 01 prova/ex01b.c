#include <stdio.h>
int main(){
    int dias, qtdAnos, qtdMeses, qtdDias;
    scanf("%d",&dias);
    qtdAnos=dias/360;
    qtdMeses=(dias%360)/30;
    qtdDias=(dias % 360)%30;
    printf("%d anos\n",qtdAnos);
    printf("%d meses\n",qtdMeses);
    printf("e %d dias\n",qtdDias);
    return 0;
}