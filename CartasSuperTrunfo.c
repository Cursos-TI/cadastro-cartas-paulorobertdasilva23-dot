#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando    scanf para entrada de dados e printf para exibir as informações.

int main() {

// Área para definição das variáveis para armazenar as propriedades das cidades

//variáveis para armazenar os valores da carta 1
  int numero_do_carta_1;
  char letra_do_estado_1;
  char codigo_da_carta_1[5]; 
  char nome_da_cidade_1[30];
  int populacao_1;
  float area_da_cidade_1;
  float pib_1;
  char pontos_turisticos_1[50];

//variáveis para armazenar os valores da carta 2
  int numero_do_carta_2;
  char letra_do_estado_2;
  char codigo_da_carta_2[5]; 
  char nome_da_cidade_2[30];
  int populacao_2;
  float area_da_cidade_2;
  float pib_2;
  char pontos_turisticos_2[50];

  
// Área para entrada de dados
    
//Introdução do usuário ao jogo
   printf("Óla bem-vindo ao Super Trunfo, nosso jogo de cartas, aqui você irá cadastrar cartas de cidades brasileiras com informções desde seu o nome até seu pib se divirta!! \n\n");
  
//Armazenando o número da carta informado pelo usuário  
    printf("Insira o número da carta: \n");
      scanf("%d", &numero_do_carta_1 );
        getchar();
    
//Armazenando a letra do estado informado pelo usuário   
    printf("Insira a letra do Estado onde a cidade se encontra: \n");
      scanf(" %c", &letra_do_estado_1);
        
  
//Armazenando o código da carta informado pelo usuário
    printf("Insira o código da carta utilizando a inicial do estado como a 1° letra, igual o exemplo a seguir. Ex: C01 Ceará \n");
      scanf("%3s", codigo_da_carta_1);
        getchar();

//Armazenando o nome da cidade informado pelo usuário
    printf("Insira o nome da cidade: \n");
      scanf("%29s", nome_da_cidade_1);
        getchar();

//Armazenando a população da cidade informado pelo usuário
    printf("Insira a população da cidade: \n");
      scanf("%d", &populacao_1);
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
    printf("Insira pontos turísticos da cidade: \n");
      scanf("%49s", pontos_turisticos_1);
        getchar();

//Informando o usuário a repetir o processo para a próxima carta 

   printf("Agora que você já aprendeu como prencher sua carta repita o porcesso pra a segunda carta \n\n");

//Armazenando o número da carta informado pelo usuário  
    printf("Insira o número da carta: \n");
      scanf(" %d", numero_do_carta_2 );
        getchar();
    
//Armazenando a letra do estado informado pelo usuário   
    printf("Insira a letra do Estado onde a cidade se encontra: \n");
      scanf("%c", &letra_do_estado_2);
        getchar();
  
//Armazenando o código da carta informado pelo usuário
    printf("Insira o código da carta utilizando a inicial do estado como a 1° letra, igual o exemplo a seguir. Ex: C01 Ceará \n");
      scanf("%3s", codigo_da_carta_2);
        getchar();

//Armazenando o nome da cidade informado pelo usuário
    printf("Insira o nome da cidade: \n");
      scanf("%29s", nome_da_cidade_2);
        getchar();

//Armazenando a população da cidade informado pelo usuário
    printf("Insira a população da cidade: \n");
      scanf("%d", &populacao_2);
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
    printf("Insira pontos turísticos da cidade: \n");
      scanf("%49s", pontos_turisticos_2);
        getchar();

// Área para exibição dos dados da carta 1

    printf("\n=== CARTA CADASTRADA ===\n\n");

    printf("Carta: %d \n", numero_do_carta_1 );

    printf("Código da carta: %s \n", codigo_da_carta_1);

    printf("Letra do estado: %c \n", letra_do_estado_1);

    printf("Nome da cidade: %s \n", nome_da_cidade_1);

    printf("População: %d \n", populacao_1);

    printf("Área: %.2f \n", area_da_cidade_1);

    printf("PIB: %.3f \n", pib_1);

    printf("Pontos turísticos: %s \n\n", pontos_turisticos_1);


// Área para exibição dos dados da carta 2


    printf("\n=== CARTA CADASTRADA ===\n\n");

    printf("Carta: %d \n", numero_do_carta_2 );

    printf("Código da carta: %s \n", codigo_da_carta_2);

    printf("Letra do estado: %c \n", letra_do_estado_2);

    printf("Nome da cidade: %s \n", nome_da_cidade_2);

    printf("População: %d \n", populacao_2);

    printf("Área: %.2f \n", area_da_cidade_2);

    printf("PIB: %.3f \n", pib_2);

    printf("Pontos turísticos: %s \n", pontos_turisticos_2);
    




return 0;
} 

