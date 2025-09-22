#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
// Área para definição das variáveis para armazenar as propriedades das cidades
  int numero_do_carta;
  char letra_do_estado;
  char codigo_da_carta[5]; 
  char nome_da_cidade[30];
  int populacao;
  float area_da_cidade;
  float pib;
  char pontos_turisticos[50];

  
// Área para entrada de dados
    
//Introdução do usuário ao jogo
   printf("Óla bem-vindo ao Super Trunfo, nosso jogo de cartas, aqui você irá cadastrar cartas de cidades brasileiras com informções desde seu o nome até seu pib se divirta!! \n\n");
  
//Armazenando o número da carta informado pelo usuário  
    printf("Insira o número da carta: \n");
    scanf("%d", &numero_do_carta );
    getchar();
    
//Armazenando o código da carta informado pelo usuário
    printf("Insira o código da carta seguindo o exemplo a seguir. Ex: A01 \n");
    scanf("%3s", &codigo_da_carta);
    getchar();

//Armazenando a letra do estado informado pelo usuário   
    printf("Insira a letra do Estado onde a cidade se encontra: \n");
    scanf("%c", &letra_do_estado);
    getchar();
  
//Armazenando o nome da cidade informado pelo usuário
    printf("Insira o nome da cidade: \n");
    scanf("%s", nome_da_cidade);
    getchar();

//Armazenando a população da cidade informado pelo usuário
    printf("Insira a população da cidade: \n");
    scanf("%d", &populacao);
    getchar();

//Armazenando a área da cidade informado pelo usuário
    printf("Insira a área da cidade: \n");
    scanf("%f", &area_da_cidade);
    getchar();

//Armazenando o pib da cidade informado pelo usuário
    printf("Insira o pib da cidade: \n");
    scanf("%f", &pib);
    getchar();
  
//Armazenando o pib da cidade informado pelo usuário
    printf("Insira pontos turísticos da cidade: \n");
    scanf("%s", pontos_turisticos);
    getchar();

//Informando o usuário a repetir o processo para a próxima carta 
  

// Área para exibição dos dados da cidade

    printf("\n=== CARTA CADASTRADA ===\n\n");

    printf("Carta: %d \n\n", numero_do_carta);

    printf("O código da sua carta é: %s \n\n", codigo_da_carta);

    printf("Localizado no Estado: %c \n\n", letra_do_estado);

    printf("Sua belíssima cidade se chama: %s \n\n", nome_da_cidade);

    printf("Netsa linda cidade há uma população de: %d \n\n", populacao);

    printf("Área da cidade: %2f \n\n", area_da_cidade);

    printf("Com um PIB de: %3f \n\n", pib);

    printf("Um bom lugar para se visitar é: %s \n\n", pontos_turisticos);
    




return 0;
} 

