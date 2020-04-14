#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);

    int resto1 = n % 3;
    int resto2 = (n / 3) % 3;

    // depois do 27 as divisões começam a ter mais de 4 algarismos, quebrando a regra do enunciado de manter até 3 algarismos
    if(n < 27){
        if(n >= 9){
            //depois do 9 as divisões começam a ter três algarismos
            int resto3 = ((n/3)/3) % 3;
            printf("%d\n",resto1);
            printf("%d\n",resto2);
            printf("%d\n",resto3);
            printf("Resposta final: %d%d%d\n",resto3,resto2,resto1);
        }else{
            printf("%d\n",resto1);
            printf("%d\n",resto2);
            printf("Resposta final: %d%d\n",resto2,resto1);
        }
    }else{
        printf("Conversão com resultado contém mais de 4 algarismos, tente novamente\n");
    }
    
        
    
    return 0;
}