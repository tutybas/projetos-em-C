#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

	//variaveis
	int opcao; 
	int opcao2;
	int linhapos;
	int colunapos;
	int tabuleiro[5][5];
	int linhaatq;
	int colunaatq;
	int vidas = 0;
void pocisionamento(){
	//pocisionamento
	for(int linha= 0; linha<5; linha++){
		for(int coluna=0; coluna<5; coluna++){
			tabuleiro[linha][coluna] = 0;
		}
	}

	for(int tropas = 0; tropas<3; tropas++){
		
		//exibição do tabuleiro	
	for(int linha= 0; linha<5; linha++){
		for(int coluna=0; coluna<5; coluna++){
			printf(" %d ",tabuleiro[linha][coluna]);
		}
		printf("\n");
	}
		
	printf("qual tropa voce quer posicionar ? \n 1.submarino \n 2.porta-avioes \n 3.navio \n");
	scanf("%i",&opcao);
		switch(opcao){
			case 1: 
				printf("digite as cordenadas do tabuleiro que voce quer pocisionar!");
				printf("\n a linha: ");
				scanf("%i",&linhapos);
				printf("\n a coluna: ");
				scanf("%i",&colunapos);
				if(colunapos>=4 || colunapos<=0 ){
					system("cls");
					printf(" \n \n \n a tropa esta fora do campo de batalha \n");
					Sleep(2000);
					system("cls");
					tropas--;
				}
				else if(tabuleiro[linhapos-1][colunapos-1]!=0 || tabuleiro[linhapos-1][colunapos]!=0  ){
					system("cls");
					printf(" \n \n \n espaco ja ocupado no tabuleiro \n");
					Sleep(2000);
					system("cls");
					tropas--;
				}
					else{
					tabuleiro[linhapos-1][colunapos-1] = 1;
					tabuleiro[linhapos-1][colunapos]=1;
					system("cls");
					printf(" \n \n \n tropa posicionada \n");
					Sleep(2000);
					system("cls");
					vidas +=2;
				}
			break;
			case 2:
				printf("digite as cordenadas do tabuleiro que voce quer pocisionar!");
				printf("\n a linha: ");
				scanf("%i",&linhapos);
				printf("\n a coluna: ");
				scanf("%i",&colunapos);
				if(colunapos==3 || colunapos>=4 || colunapos<=0 ){
					system("cls");
					printf(" \n \n \n a tropa esta fora do campo de batalha \n");
					Sleep(2000);
					system("cls");
					tropas--;
				}
				else if (tabuleiro[linhapos-1][colunapos-1]!=0 || tabuleiro[linhapos-1][colunapos]!=0 || tabuleiro[linhapos-1][colunapos+1]!=0) {
					system("cls");
					printf(" \n \n \n espaco ja ocupado no tabuleiro \n");
					Sleep(2000);
					system("cls");
					tropas--;
				}
				else{
					tabuleiro[linhapos-1][colunapos-1] = 2;
					tabuleiro[linhapos-1][colunapos]=2;
					tabuleiro[linhapos-1][colunapos + 1]=2;
					system("cls");
					printf(" \n \n \n tropa posicionada \n");
					Sleep(2000);
					system("cls");
					vidas +=3;
				}
			break;
			case 3:
				printf("digite as cordenadas do tabuleiro que voce quer pocisionar!");
				printf("\n a linha: ");
				scanf("%i",&linhapos);
				printf("\n a coluna: ");
				scanf("%i",&colunapos);
				if(colunapos==3 || colunapos>=4 || linhapos<=0 || colunapos<0 ){
					system("cls");
					printf(" \n \n \n a tropa esta fora do campo de batalha \n");
					Sleep(2000);
					system("cls");
					tropas--;
				}
				else if(tabuleiro[linhapos-1][colunapos-1]!=0 || tabuleiro[linhapos-1][colunapos]!=0 || tabuleiro[linhapos-1][colunapos+1]!=0 || tabuleiro[linhapos-2][colunapos]!=0){
					system("cls");
					printf(" \n \n \n espaco ja ocupado no tabuleiro \n");
					Sleep(2000);
					system("cls");
					tropas--;
				}
				else{
					tabuleiro[linhapos-1][colunapos-1] = 3;
					tabuleiro[linhapos-1][colunapos]=3;
					tabuleiro[linhapos-1][colunapos + 1]=3;
					tabuleiro[linhapos  - 2][colunapos]=3;
					system("cls");
					printf(" \n \n \n tropa posicionada \n");
					Sleep(2000);
					system("cls");
					vidas +=4;
				}
			break;
			default:
				system("cls");
				printf(" \n \n \n a tropa nao foi encontrada \n");
				Sleep(2000);
				system("cls");
			break;
		} 
    }   
}


main(){
	//iniciar o tabuleiro
	for(int linha= 0; linha<5; linha++){
		for(int coluna=0; coluna<5; coluna++){
			tabuleiro[linha][coluna] = 0;
		}
	}
	system("cls");

	pocisionamento();
	printf("Seu tabuleiro:");
	printf("\n");
	//exibição do tabuleiro	
	for(int linha= 0; linha<5; linha++){
		for(int coluna=0; coluna<5; coluna++){
			printf(" %d ",tabuleiro[linha][coluna]);
		}
		printf("\n");
	}
	printf("\n");
	printf(" \n 1.repocisionar suas tropas \n 2.prosseguir para o jogador 2 \n ");
	scanf("%i",&opcao2);
	switch(opcao2){
		case 1:
			system("cls");
			pocisionamento();
		break;
		case 2:
		break;
	}

	//jogador 2
	system("cls");	
	printf(" \n \n \n agora e hora de jogador 2 \n");
	Sleep(5000);
	system("cls");
	
	//jogo em si
	int tabuleirojogo[5][5];
	for(int linha= 0; linha<5; linha++){
		for(int coluna=0; coluna<5; coluna++){
			tabuleirojogo[linha][coluna] = 0;
		}
	}
	for(int linha= 0; linha<5; linha++){
		for(int coluna=0; coluna<5; coluna++){
			printf(" %d ",tabuleirojogo[linha][coluna]);
		}
		printf("\n");
	}

	while(vidas>0){
	printf("digite qas cordendas do ataque! ");
	printf("\n a linha: ");
	scanf("%i",&linhaatq);
	printf("\n a coluna: ");
	scanf("%i",&colunaatq);
	if(tabuleiro[linhaatq-1][colunaatq-1]!=0){
		system("cls");
		if(tabuleiro[linhaatq-1][colunaatq-1]==1){
			tabuleirojogo[linhaatq-1][colunaatq-1] = 1;
			printf("voce acertou um submarino inimigo");
			vidas --;
		}
		else if (tabuleiro[linhaatq-1][colunaatq-1]==2){
			tabuleirojogo[linhaatq-1][colunaatq-1] = 2;
			printf("voce acertou um navio inimigo");
			vidas --;
		}
		else if (tabuleiro[linhaatq-1][colunaatq-1]==3){
			tabuleirojogo[linhaatq-1][colunaatq-1] = 3;
			printf("voce acertou um porta-avioes inimigo");
			vidas --;
		}
		Sleep(2000);
		system("cls");
	}
	else{
		system("cls");
		printf(" \n \n \n voce errou o ataque! \n");
		tabuleirojogo[linhaatq-1][colunaatq-1] = 0;
		Sleep(2000);
		system("cls");
	}
	for(int linha= 0; linha<5; linha++){
		for(int coluna=0; coluna<5; coluna++){
			printf(" %d ",tabuleirojogo[linha][coluna]);
		}
		printf("\n");
	}
	}
	system("cls");
	printf(" \n \n voce encontrou todas as tropas inimigas! \n Fim de jogo!");
	Sleep(2000);
	system("cls");
}






