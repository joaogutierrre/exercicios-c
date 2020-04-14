#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);

    int resto1 = n % 3;
    int resto2 = (n / 3) % 3;
    
    if(resto1 == 0 && resto2 == 0){
        int resto3 = ((n/3)%3) / 3;
        printf("%d\n",resto1);
        printf("%d\n",resto2);
        printf("%d\n",resto3);
        printf("Resposta final: %d%d%d\n",resto3,resto2,resto1);
    }else{
        printf("%d\n",resto1);
        printf("%d\n",resto2);
        printf("Resposta final: %d%d\n",resto2,resto1);
    }
    

}