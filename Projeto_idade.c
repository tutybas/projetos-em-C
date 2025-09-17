#include<stdio.h>
main(){
    //variaveis
    int ano;
    int idade;
    int dias;
    int ex;

    //idade
    printf("em que ano voce nasceu? ");
    scanf("%i",&ano);
    idade = 2025 - ano;
    printf("Sua idade e: %i ",idade);
    printf("\n");
    dias = ano * 365;
    printf("E em dias e: %i ",dias);
    
    //Expectativa de vida
    printf("\n");
    ex = (78 - idade) * 365;
    printf("voce ainda tem: %i dias de vida",ex);
}