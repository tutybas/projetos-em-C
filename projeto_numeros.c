#include<stdio.h>

main(){
    int numfinal;
    int max;
    int min;

    printf("digite um numero: ");
    scanf("%i",&numfinal);
    max = numfinal;
    min = numfinal;

    while(numfinal >= 0){
        printf("digite um numero: ");
        scanf("%i",&numfinal);
        if(numfinal >= max){
            max = numfinal;
        }
        else{
            if(numfinal>=0){
            min=numfinal;}
        }
        
        
    }
    printf("o maior numero digitado foi %i",max);
    printf("\no menor numero digitado foi %i",min);

}