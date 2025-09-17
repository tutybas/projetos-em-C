#include<stdio.h>

main(){
	//variaveis 
	int comprimento;
	int largura;
	int area;
	float cobertura;
	int caixas;
	float valor;
	float preco; 
	int mdo; 
	
	//comprimento
	printf("informe o comprimento do comodo: ");
	scanf("%i",&comprimento);
	printf("\n"); 
	
	//largura
	printf("informe a largura do comodo: ");
	scanf("%i",&largura);
	printf("\n"); 
	
	//area
	area = comprimento * largura;
	
	//lajotas e preco
	printf("qual e a cobertura da caixa? ");
	scanf("%f",&cobertura);
	printf("\n"); 
	printf("qual e o valor do metro quadrado desse piso? ");
	scanf("%f",&preco);
	printf("\n"); 

	// mao de obra
	printf("quanto custa a mao de obra por metro qaudrado?");
	scanf("%i",&mdo);
	printf("\n"); 

	//contas
	caixas = area / cobertura + 1;
	valor = (caixas * cobertura) * preco + mdo*area;
	
	//resultado
	printf("voce ira precisar de %i caixas",caixas);
	printf("\n"); 
	printf("e pagar %f reais",valor);	
	
}
