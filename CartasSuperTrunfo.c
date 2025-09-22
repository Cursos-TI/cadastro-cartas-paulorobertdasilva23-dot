#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  int numero_do_carta;
  char letra_do_estado;
  char codigo_da_carta[3]; 
  char nome_da_cidade[50];
  int populacao;
  float area_da_cidade;
  float PIB;
  float pontos_turisticos;
  
  // Área para entrada de dados
    
  //Introdução do usuário ao jogo
   printf("Óla bem-vindo ao Super Trunfo, nosso jogo de cartas, aqui você irá cadastrar cartas de cidades brasileiras com informções desde seu o nome até seu PIB se divirta!! \n");
  
  //Armazenando o número da carta informado pelo usuário  
    printf("Insira o número da carta \n");
    scanf("%d", &numero_do_carta);

  //Armazenando o número da carta informado pelo usuário   
    printf("Insira a letra do Estado onde a cidade se encontra \n");
    scanf("%c", &letra_do_estado);
  
  //Armazenando o número da carta informado pelo usuário
    printf("Insira o código da carta seguindo o exemplo a seguir. Ex: A01 \n");
    scanf("%d", &codigo_da_carta);
  
  //Armazenando o número da carta informado pelo usuário
    printf("Insira a população da cidade \n");
    scanf("%d", &populacao);
  
  //Armazenando o número da carta informado pelo usuário
    printf("Insira a área da cidade \n");
    scanf("%d", &area_da_cidade);
  
  //Armazenando o número da carta informado pelo usuário
    printf("Insira o PIB da cidade \n");
    scanf("%d", &PIB);
  
  //Armazenando o número da carta informado pelo usuário
    printf("Insira o um ou mais pontos turísticos da cidade \n");
    scanf("%d", &pontos_turisticos);
  
// Área para exibição dos dados da cidade

return 0;
} 
