#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
 
main(){

    struct cadastro{
    char nome[30];
    int codigo;
    float preco;
    int quantidade;
    }

    estoque[10];
    int cadastrados = 0;
    int opcao = 0;
    int a = 0;
    int consulta = 0;
    int consul = 0;
    float total = 0;


    while(opcao != 5){
        system("cls");
        printf("1.cadastrar produto");
        printf("\n2.consultar produto");
        printf("\n3.alterar estoque");
        printf("\n4.balanco de estoque");
        printf("\n5.encerrar programa\n");

        scanf("%i",&opcao);

        switch(opcao){

            case 1:
                if(cadastrados!=10){
                    iniciocadastro:
                    system("cls");
                    printf("digite o nome do protudo: ");
                    scanf("%s",estoque[cadastrados].nome);
                    printf("digite o codigo do protudo: ");
                    scanf("%i",&estoque[cadastrados].codigo);
                    for(int i=0; i<cadastrados; i++){
                        if(estoque[i].codigo == estoque[cadastrados].codigo){
                            system("cls");
                            printf("\n\n\n\nja ha um produto com esse codigo!");
                            Sleep(1000);
                            goto iniciocadastro;
                        }
                    }
                    printf("digite o preco do protudo: ");
                    scanf("%f",&estoque[cadastrados].preco);
                    printf("digite a quantidade do protudo: ");
                    scanf("%i",&estoque[cadastrados].quantidade);
                    system("cls");
                    printf("\n\n\n\nproduto cadastrado!");
                    Sleep(1000);
                    cadastrados ++;
                }
                else{
                printf("max de produto alcancado");
                }
            break;

            case 2:{
                int encontrado = 0;
                printf("digite o codigo do produto que deseja consultar: ");
                scanf("%i",&consul);
                for(int i=0; i<cadastrados; i++){
                    if(estoque[i].codigo == consul){
                        system("cls");
                        printf("nome: %s",estoque[i].nome);
                        printf("\n");
                        printf("codigo: %i",estoque[i].codigo);
                        printf("\n");
                        printf("preco: %f",estoque[i].preco);
                        printf("\n");
                        printf("a quantidade em estoque: %i",estoque[i].quantidade);
                        Sleep(2000);
                        encontrado = 1;
                        break;
                    }
                }
                if(encontrado == 0){
                    system("cls");
                    printf("\n\n\n\nproduto nao encontrado!");
                    Sleep(1000);
                }
            }
            break;
        
            case 3:
                system("cls");
                printf("digite o codigo do protudo a ser retirado: ");
                scanf("%i",&consulta);
                for(int i=0; i<cadastrados; i++){
                    if(estoque[i].codigo == consulta){
                        iniciotres:
                        system("cls");
                        printf("em estoque %i\n",estoque[i].quantidade);
                        printf("informe a quantidade a ser retirada: ");
                        scanf("%i",&a);
                        if(estoque[i].quantidade - a < 0){
                            printf("quantidade ultrapassa a max para retirada");
                            Sleep(1000);
                            goto iniciotres;
                        }
                        else{
                            estoque[i].quantidade -= a;
                            system("cls");
                            printf("\n\n\n\nestoque atual: %i",estoque[i].quantidade);
                            Sleep(1000);
                        }
                    }
                    else{
                        printf("produto nao encontrado");
                    }
                }
            break;

            case 4:
                system("cls");
                printf("\n\n\n\nfazendo o balanco de estoque!");
                Sleep(1000);
                for(int i=0; i<cadastrados; i++){
                    total += estoque[i].quantidade * estoque[i].preco; 
                }
                system("cls");
                printf("\n\n\n\no Balanco de estoque: %f",total);
                Sleep(1000);
            break;
        }
    }
}
