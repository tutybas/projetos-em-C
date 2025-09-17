#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

char nome[50];
char raca[10];
//Atributos
int inteligencia;
int forca;
int constituicao;
int carisma;
int destreza;
int sabedoria;
//bonus
char bonus_humano[10];
//
char habilidades[2000] = "";

main(){

    //Atributos
    inteligencia += (rand() % 13) - 5;
    forca        += (rand() % 13) - 5;
    constituicao += (rand() % 13) - 5;
    carisma      += (rand() % 13) - 5;
    destreza     += (rand() % 13) - 5;
    sabedoria    += (rand() % 13) - 5;

    /*
    printf("int%i\n",inteligencia);
    printf("for%i\n",forca);
    printf("car%i\n",carisma);
    printf("dez%i\n",deztreza);
    printf("con%i\n",constituicao);
    printf("sab%i\n",sabedoria);
    */
    

    // Nome:
    system("cls");
    printf("Escolha o nome de seu personagem: ");
    scanf("%s",nome);
    system("cls");

    //Criação de personagem:
    printf("Vamos criar o/a %s ?\n\n",nome);
    printf("escolha sua raca: \n");
    
    //humanos
    printf("1.Humanos:\n{+2 em 3 atributos diferentes}");    
    printf("\nHabilidade:");
    printf("\nversatil: ganha duas pericias ou um poder geral a sua escolha\n\n");

    //Anão
    printf("2.Anao: ");
    printf("\n{Constituicao +4, Sabedoria +2, Destreza -2}");
    printf("\nHabilidades:");
    printf("\n(Conhecimento das Rochas): Voce recebe visao no escuro e +2em testes de Percepcao e Sobrevivencia realizados no subterraneo");
    printf("\n(devagar e sempre): Seu deslocamento e 6m (em vez de 9m). Porem, seu deslocamento nao eh reduzido por uso de armadura ou excesso de carga");
    printf("\n(duro como pedra): Voce recebe +3 pontos de vida no nivel 1 e +1 por nivel seguinte.");
    printf("(Tradicao de Heredrimm): recebe +2 em ataques com machados, martelos, marretas e picaretas");

    //Escolha:
    printf("\n\nDigite a raca escolhida: ");
    scanf("%s",raca);

    //adicionando ficha humano
    if (strcmp(raca, "humano") == 0) {
    for (int i = 0; i < 3; i++) {  
        if (i == 0) {
            printf("Em qual atributo voce colocara o bonus de +2? ");
        } else if (i == 1) {
            printf("E em qual outro? ");
        } else {
            printf("E o ultimo? ");
        }

        scanf("%s", bonus_humano);

        if (strcmp(bonus_humano, "forca") == 0) {
            forca += 2;
        } else if (strcmp(bonus_humano, "inteligencia") == 0) {
            inteligencia += 2;
        } else if (strcmp(bonus_humano, "carisma") == 0) {
            carisma += 2;
        } else if (strcmp(bonus_humano, "sabedoria") == 0) {
            sabedoria += 2;
        } else if (strcmp(bonus_humano, "destreza") == 0) {
            destreza += 2;
        } else if (strcmp(bonus_humano, "constituicao") == 0) {
            constituicao += 2;
        } else {
            printf("Atributo invalido!\n");
            i--; // volta uma rodada se digitou errado
        }
    }
}
  if (strcmp(raca, "humano") == 0) {
    strcat(habilidades, "Versatil: ganha duas pericias ou um poder geral a sua escolha\n");
}

// adicionando ficha de anão
if (strcmp(raca, "anao") == 0) {
    strcat(habilidades, "(Conhecimento das Rochas): Voce recebe visao no escuro e +2 em testes de Percepcao e Sobrevivencia realizados no subterraneo\n");
    strcat(habilidades, "(Devagar e Sempre): Seu deslocamento e 6m (em vez de 9m). Porem, seu deslocamento nao eh reduzido por uso de armadura ou excesso de carga\n");
    strcat(habilidades, "(Duro como Pedra): Voce recebe +3 pontos de vida no nivel 1 e +1 por nivel seguinte\n");
    strcat(habilidades, "(Tradicao de Heredrimm): recebe +2 em ataques com machados, martelos, marretas e picaretas\n");
}

printf("%s",habilidades);