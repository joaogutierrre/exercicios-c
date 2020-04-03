#include <stdio.h>
int main(int argc, char const * argv[])
{
    int numero,contador=0;
    scanf("%d", &numero);
    if(numero <= 0){
        printf("Valor inválido. Inserir apenas números naturais e não-neutros.\n");
    }else{
        for(int i=0; i<=numero;i++){
            if (i%3==0){
            contador=contador+i;
            }
        }
        printf("A soma dos números é: %d\n",+contador);

    }
    
return 0;

}