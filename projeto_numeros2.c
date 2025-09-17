#include<stdio.h>
#include<stdlib.h>

main(){
    int i;
    int num;
    int res;
    float pares;
    float impares;
    pares = 0;
    impares = 0;
    int a;
    int b;
    a = 0;
    b = 0;
    float mediapares;
    float mediaimpares;


    for(int i = 0; i<=14; i++){
        printf("digite um numero: ");
        scanf("%i",&num);
        res = num % 2;
        if(res == 0){
            pares += num;
            a++;
        }
        else{
            impares += num;
            b++;
        }
    }

    system("cls");
    
    mediapares = pares / a;
    mediaimpares = impares / b;

    printf("a media dos numeros pares e %f ",mediapares);
    printf("\nma media dos numeros impares e %f ",mediaimpares);
}