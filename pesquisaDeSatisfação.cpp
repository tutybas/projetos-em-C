#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
main(){
	int numero, porcentagemOtimo, porcentagemBom, porcentagemregular, porcentagemRuim, porcentagemPessimo;
	int otimo,bom,regular,ruim,pessimo,opcao,voto;
	otimo=bom=regular=ruim=pessimo=opcao=voto=0;	
	
	while(opcao!=999){
		system("cls");
		printf("\ncomo voce avalaria o filme:\n1.otimo \n2.bom\n3.regular\n4.ruim\n5.pessimo\n\nOpcao: ");
		scanf("%i",&opcao);
		switch(opcao){
			case 1:
				otimo++;
				voto++;
				system("cls");
				printf("\n\n\n\nvoto registrado!");
				Sleep(1000);
				break;
			case 2:
				bom++;
				voto++;
				system("cls");
				printf("\n\n\n\nvoto registrado!");
				Sleep(1000);
				break;
			case 3:
				regular++;
				voto++;
				system("cls");
				printf("\n\n\n\nvoto registrado!");
				Sleep(1000);
				break;
			case 4:
				ruim++;
				voto++;
				system("cls");
				printf("\n\n\n\nvoto registrado!");
				Sleep(1000);
				break;
			case 5:
				pessimo++;
				voto++;
				system("cls");
				printf("\n\n\n\nvoto registrado!");
				Sleep(1000);
				break;
			case 999:
				printf("Encerrando!\n");
				system("cls");
				break;
			default:
				system("cls");
				printf("\n\n\nValor invalido!\n");
				Sleep(1000);
				
		}
	}	
	//porcentagens:
	porcentagemOtimo = (100*otimo)/voto;
	porcentagemBom = (100*bom)/voto;
	porcentagemregular = (100*regular)/voto;
	porcentagemRuim = (100*ruim)/voto;
	porcentagemPessimo = (100*pessimo)/voto;
	system("cls");
	printf("\n\nA porcentagem de pessoas, baseado no total que votaram em cada categoria, e de:");
	printf("\nOtimo: %i%%",porcentagemOtimo);
	printf("\nBom: %i%%",porcentagemBom);
	printf("\nRegular: %i%%",porcentagemregular);
	printf("\nRuim: %i%%",porcentagemRuim);
	printf("\nPessimo: %i%%",porcentagemPessimo);
	printf("\n\nA pesquisa teve %i votos!",voto);
	
	
}
