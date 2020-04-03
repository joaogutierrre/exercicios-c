#include <stdio.h>
int main( int argc, char const *argv[])
{
    int num,d=0;
    scanf("%d", &num);
    for(int i=1; i<= num; i++){
        if(num%i == 0){
            d++;
        } 
    }
    if (d == 2){
       printf("É primo\n");
    }else{
        printf("Não é primo\n");
        }   
    return 0;
}