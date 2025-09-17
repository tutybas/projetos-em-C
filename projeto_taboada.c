#include<stdio.h>

main(){

    int x;

    printf("digite o numero que deseja saber a taboada: ");
    scanf("%i",&x);

    //resultado 

    printf("A toboada do %i e: \n",x);
    printf("1 x %i = %d\n ",x, (x*1)); 
    printf("2 x %i = %d\n ",x, (x*2)); 
    printf("3 x %i = %d\n ",x, (x*3)); 
    printf("4 x %i = %d\n ",x, (x*4)); 
    printf("5 x %i = %d\n ",x, (x*5)); 
    printf("6 x %i = %d\n ",x, (x*6)); 
    printf("7 x %i = %d\n ",x, (x*7)); 
    printf("8 x %i = %d\n ",x, (x*8)); 
    printf("9 x %i = %d\n ",x, (x*9)); 
    printf("10 x %i = %d\n ",x, (x*10)); 
}