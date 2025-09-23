#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando    scanf para entrada de dados e printf para exibir as informações.

int main() {

// Área para definição das variáveis para armazenar as propriedades das cidades

//variáveis para armazenar os valores da carta 1
  int numero_do_carta_1, pontos_turisticos_1;
  char UF_1;
  char codigo_da_carta_1[6]; 
  char nome_da_cidade_1[30];
  float populacao_1, pib_1, area_da_cidade_1;
  

//variáveis para armazenar os valores da carta 2
  int numero_do_carta_2, pontos_turisticos_2 ;
  char UF_2;
  char codigo_da_carta_2[5]; 
  char nome_da_cidade_2[30];
  float populacao_2, area_da_cidade_2, pib_2,pib_per_capita_2;
  float densidade_populacional_2 = populacao_2/area_da_cidade_2;

  
// Área para entrada de dados
    


//Introdução do usuário ao jogo
   printf("Óla bem-vindo ao Super Trunfo, nosso jogo de cartas, aqui você irá cadastrar cartas de cidades brasileiras com informções desde seu o nome até seu pib se divirta!! \n\n");
  



//Armazenando o número da carta informado pelo usuário  
    printf("Escolha o número da carta: \n");
      scanf("%d", &numero_do_carta_1 );
        getchar();
    
//Armazenando a UF informado pelo usuário   
    printf("Insira a UF onde a cidade se encontra: \n");
      scanf(" %s", &UF_1);
        
  
//Armazenando o código da carta informado pelo usuário
    printf("Insira o código da carta utilizando a UF do estado como no exemplo a seguir. Ex: CE01 Ceará \n");
      scanf("%5s", codigo_da_carta_1);
        getchar();

//Armazenando o nome da cidade informado pelo usuário
    printf("Escolha a cidade: \n");
      scanf("%s", nome_da_cidade_1);
        getchar();

//Armazenando a população da cidade informado pelo usuário
    printf("Insira a população da cidade: \n");
      scanf("%f", &populacao_1);
        getchar();

//Armazenando a área da cidade informado pelo usuário
    printf("Insira a área da cidade: \n");
      scanf("%f", &area_da_cidade_1);
        getchar();

//Armazenando o pib da cidade informado pelo usuário
    printf("Insira o pib da cidade: \n");
      scanf("%f", &pib_1);
        getchar();
  
//Armazenando o pib da cidade informado pelo usuário
    printf("Insira a quantidade de pontos da cidade: \n");
      scanf(" %d", &pontos_turisticos_1);

// Cálculo do PIB per capita e densidade populacional da carta 1

  float densidade_populacional_1 = populacao_1/area_da_cidade_1;
  float pib_per_capita_1 = pib_1/populacao_1;
       



//Informando o usuário a repetir o processo para a próxima carta 

   printf("Agora que você já aprendeu como prencher sua carta repita o porcesso pra a segunda carta \n\n");





//Armazenando o número da carta informado pelo usuário  
    printf("Insira o número da carta: \n");
      scanf("%d", &numero_do_carta_2 );
        getchar();
    
//Armazenando a UF informado pelo usuário   
    printf("Insira a UF onde a cidade se encontra: \n");
      scanf(" %s", &UF_2);
        getchar();
  
//Armazenando o código da carta informado pelo usuário
    printf("Insira o código da carta utilizando a UF do estado como no exemplo a seguir. Ex: CE01 Ceará \n");
      scanf("%5s", codigo_da_carta_2);
        getchar();

//Armazenando o nome da cidade informado pelo usuário
    printf("Insira o nome da cidade: \n");
      scanf("%s", nome_da_cidade_2);
        getchar();

//Armazenando a população da cidade informado pelo usuário
    printf("Insira a população da cidade: \n");
      scanf("%f", &populacao_2);
        getchar();

//Armazenando a área da cidade informado pelo usuário
    printf("Insira a área da cidade: \n");
      scanf("%f", &area_da_cidade_2);
        getchar();

//Armazenando o pib da cidade informado pelo usuário
    printf("Insira o pib da cidade: \n");
      scanf("%f", &pib_2);
        getchar();
  
//Armazenando o pib da cidade informado pelo usuário
    printf("Insira a quantidade de pontos turísticos da cidade: \n");
      scanf("%d", &pontos_turisticos_2);
        getchar();

// Cálculo do PIB per capita e densidade populacional da carta 2

  float densidade_populacional_2 = populacao_2/area_da_cidade_2;
  float pib_per_capita_2 = pib_2/populacao_2;


// Área para exibição dos dados da carta 1

    printf("\n=== CARTA CADASTRADA ===\n\n");

    printf("Carta: %d \n", numero_do_carta_1 );

    printf("Código da carta: %s \n", codigo_da_carta_1);

    printf("UF: %s \n", UF_1);

    printf("Nome da cidade: %s \n", nome_da_cidade_1);

    printf("População: %d \n", populacao_1);

    printf("Área: %.2f \n", area_da_cidade_1);

    printf("PIB: %.3f \n", pib_1);

    printf("Pontos turísticos: %s \n", pontos_turisticos_1);

    printf("Densiade populacional: %.2f \n", densidade_populacional_1, " hab/km²");





// Área para exibição dos dados da carta 2
    printf("\n=== CARTA CADASTRADA ===\n\n");

    printf("Carta: %d \n", numero_do_carta_2 );

    printf("Código da carta: %s \n", codigo_da_carta_2);

    printf("UF: %s \n", UF_2);

    printf("Nome da cidade: %s \n", nome_da_cidade_2);

    printf("População: %d \n", populacao_2);

    printf("Área: %.2f \n", area_da_cidade_2);

    printf("PIB: %.3f \n", pib_2);

    printf("Pontos turísticos: %s \n", pontos_turisticos_2);
    
    printf("Densiade populacional: %.2f \n", densidade_populacional_2, " hab/km²");

    printf("PIB per Capita: %.2f \n", pib_2, " reais");



return 0;
} 

