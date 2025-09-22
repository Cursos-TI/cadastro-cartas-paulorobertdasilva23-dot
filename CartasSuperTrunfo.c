#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  int numero_do_carta;
  char letra_do_estado[1];
  char codigo_da_carta[3]; 
  char nome_da_cidade[30];
  int populacao;
  float area_da_cidade;
  float PIB;
  char pontos_turisticos[50];
  
  // Área para entrada de dados
    
  //Introdução do usuário ao jogo
   printf("Óla bem-vindo ao Super Trunfo, nosso jogo de cartas, aqui você irá cadastrar cartas de cidades brasileiras com informções desde seu o nome até seu PIB se divirta!! \n");
  
  //Armazenando o número da carta informado pelo usuário  
    printf("Insira o número da carta: \n");
    scanf("%d", &numero_do_carta);

  //Armazenando o número da carta informado pelo usuário   
    printf("Insira a letra do Estado onde a cidade se encontra: \n");
    scanf(" %c", &letra_do_estado);
  
  //Armazenando o número da carta informado pelo usuário
    printf("Insira o código da carta seguindo o exemplo a seguir. Ex: A01 \n");
    scanf(" %c", &codigo_da_carta);
  
    //Armazenando o número da carta informado pelo usuário
    printf("Insira o nome da cidade: \n");
    scanf(" %s", &nome_da_cidade);

    //Armazenando a população da cidade informado pelo usuário
    printf("Insira a população da cidade: \n");
    scanf(" %d", &populacao);

    //Armazenando a área da cidade informado pelo usuário
    printf("Insira a área da cidade: \n");
    scanf(" %f", &area_da_cidade);

    //Armazenando o PIB da cidade informado pelo usuário
    printf("Insira o PIB da cidade: \n");
    scanf(" %f", &PIB);
  
     //Armazenando o PIB da cidade informado pelo usuário
    printf("Insira pontos turísticos da cidade: \n");
    scanf(" %s", &pontos_turisticos);
    

// Área para exibição dos dados da cidade

return 0;
} 
