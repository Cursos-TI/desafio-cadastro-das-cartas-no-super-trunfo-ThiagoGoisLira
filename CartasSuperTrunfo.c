#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Thiago j gois lira

int main (){
	//Variaves da carta 1
	char estadoCard1; //Variavel estado 
	char codigoCard1[2]; //Variavel codigo
	char nomeCidadeCard1[50]; //Variavel nome da cidade
	int populacaoCard1, npontosTuristicosCard1; //Variavel pupulação e numero de pontos turisticos
	float areaCard1, pibCard1;//Variavel area e do pib

	//Variaves da carta 2
	char estadoCard2;
	char codigoCard2[4];
	char nomeCidadeCard2[50];
	int populacaoCard2, npontosTuristicosCard2;
	float areaCard2, pibCard2;

	
	//Lendo dados carta 1
	printf("Preencha dados da carta 1:\nDigite um caracter referente ao estado entre A a H: \n");
	scanf("%c",&estadoCard1);
	//Lendo	 codigo do estado
	printf("Digite um numero de 01 a 04 para representar o codigo: \n");
	scanf("%s",&codigoCard1);
	//Lendo o nome da cidade
	getchar(); // limpa o buffer antes de usar fgets
	printf("Nome da cidade: \n");
    fgets(nomeCidadeCard1, sizeof(nomeCidadeCard1), stdin);
    nomeCidadeCard1[strcspn(nomeCidadeCard1, "\n")] = '\0'; 
	//População da cidade
	printf("Quantidade de habitantes: \n");
	scanf("%d",&populacaoCard1);
	//Lendo area
	printf("Area da cidade (km2): \n");
	scanf("%f",&areaCard1);
	//Lendo pib da cidade
	printf("PIB (Bilhoes de reais): \n");
	scanf("%f",&pibCard1);
	//Lendo numero de pontos turisticos
	printf("Numero de pontos turisticos:\n");
	scanf("%d",&npontosTuristicosCard1);
	
	getchar(); // limpa o buffer antes de usar fgets
	
	//Lendo dados carta 2
	printf("Preencha dados da carta 2:\nDigite um caracter referente ao estado entre A a H: \n");
	scanf("%c",&estadoCard2);
	//Lendo	 codigo do estado
	printf("Digite um numero de 01 a 04 para representar o codigo: \n");
	scanf("%s",&codigoCard2);
	//Lendo o nome da cidade
	getchar(); // limpa o buffer antes de usar fgets
	printf("Nome da cidade: \n");
    fgets(nomeCidadeCard2, sizeof(nomeCidadeCard2), stdin);
    nomeCidadeCard2[strcspn(nomeCidadeCard2, "\n")] = '\0'; 
	//População da cidade
	printf("Quantidade de habitantes: \n");
	scanf("%d",&populacaoCard2);
	//Lendo area
	printf("Area da cidade (km2): \n");
	scanf("%f",&areaCard2);
	//Lendo pib da cidade
	printf("PIB (Bilhoes de reais): \n");
	scanf("%f",&pibCard2);
	//Lendo numero de pontos turisticos
	printf("Numero de pontos turisticos:\n");
	scanf("%d",&npontosTuristicosCard2);



	//Exibindos detalhes da carta 1
	printf("Carta 1: \n");
	printf("Estado: %c \n", estadoCard1);
	printf("Codigo: %c%s \n",estadoCard1, codigoCard1);
	printf("Nome da cidade: %s \n", nomeCidadeCard1);
	printf("Populacao: %d \n",populacaoCard1);
	printf("Area: %.2f km2 \n",areaCard1);
	printf("PIB: %.2f Bilhoes de reais\n",pibCard1);
	printf("Numero de pontos turisticos: %d \n\n",npontosTuristicosCard1);
	
	//Exibindos detalhes da carta 2
	printf("Carta 2: \n");
	printf("Estado: %c \n", estadoCard2);
	printf("Codigo: %c%s \n",estadoCard2, codigoCard2);
	printf("Nome da cidade: %s \n", nomeCidadeCard2);
	printf("Populacao: %d \n",populacaoCard2);
	printf("Area: %.2f km2 \n",areaCard2);
	printf("PIB: %.2f Bilhoes de reais\n",pibCard2);
	printf("Numero de pontos turisticos: %d \n",npontosTuristicosCard2);


return 0;	
} 