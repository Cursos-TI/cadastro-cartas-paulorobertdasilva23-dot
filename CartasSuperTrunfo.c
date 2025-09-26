#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando    scanf para entrada de dados e printf para exibir as informações.

int main() {

// Área para definição das variáveis para armazenar as propriedades das cidades

//variáveis para armazenar os valores da carta 1
  int numero_carta1, pontos_turisticos1;
  char UF1[3];
  char codigo_carta1[6]; 
  char cidade1[30];
  float pop1, pib1, area1;
 


//variáveis para armazenar os valores da carta 2
  int numero_carta2, pontos_turisticos2 ;
  char UF2[3];
  char codigo_carta2[5]; 
  char cidade2[30];
  float pop2, area2, pib2;
  

  
// Área para entrada de dados
    


//Introdução do usuário ao jogo
   printf("Óla bem-vindo ao Super Trunfo, nosso jogo de cartas, aqui você irá cadastrar cartas de cidades brasileiras com informções desde seu o nome até seu pib se divirta!! \n\n");
  



//Armazenando o número da carta informado pelo usuário  
    printf("Escolha o número da carta: \n");
      scanf("%d", &numero_carta1 );
        getchar();
    
//Armazenando a UF informado pelo usuário   
    printf("Insira a UF onde a cidade se encontra: \n");
      scanf("%2s", UF1);
         getchar();
        
  
//Armazenando o código da carta informado pelo usuário
    printf("Insira o código da carta utilizando a UF do estado como no exemplo a seguir. Ex: CE01 Ceará \n");
      scanf("%5s", codigo_carta1);
        getchar();

//Armazenando o nome da cidade informado pelo usuário
    printf("Escolha a cidade: \n");
      scanf("%s", cidade1);
        getchar();

//Armazenando a população da cidade informado pelo usuário
    printf("Insira a população da cidade: \n");
      scanf("%f", &pop1);
        getchar();

//Armazenando a área da cidade informado pelo usuário
    printf("Insira a área da cidade: \n");
      scanf("%f", &area1);
        getchar();

//Armazenando o pib da cidade informado pelo usuário
    printf("Insira o pib da cidade: \n");
      scanf("%f", &pib1);
        getchar();
  
//Armazenando o pib da cidade informado pelo usuário
    printf("Insira a quantidade de pontos da cidade: \n");
      scanf(" %d", &pontos_turisticos1);



//Informando o usuário a repetir o processo para a próxima carta 

   printf("Agora que você já aprendeu como prencher sua carta repita o porcesso pra a segunda carta \n\n");





//Armazenando o número da carta informado pelo usuário  
    printf("Insira o número da carta: \n");
      scanf("%d", &numero_carta2 );
        getchar();
    
//Armazenando a UF informado pelo usuário   
    printf("Insira a UF onde a cidade se encontra: \n");
      scanf("%2s", UF2);
        getchar();
  
//Armazenando o código da carta informado pelo usuário
    printf("Insira o código da carta utilizando a UF do estado como no exemplo a seguir. Ex: CE01 Ceará \n");
      scanf("%5s", codigo_carta2);
        getchar();

//Armazenando o nome da cidade informado pelo usuário
    printf("Insira o nome da cidade: \n");
      scanf("%s", cidade2);
        getchar();

//Armazenando a população da cidade informado pelo usuário
    printf("Insira a população da cidade: \n");
      scanf("%f", &pop2);
        getchar();

//Armazenando a área da cidade informado pelo usuário
    printf("Insira a área da cidade: \n");
      scanf("%f", &area2);
        getchar();

//Armazenando o pib da cidade informado pelo usuário
    printf("Insira o pib da cidade: \n");
      scanf("%f", &pib2);
        getchar();
  
//Armazenando o pib da cidade informado pelo usuário
    printf("Insira a quantidade de pontos turísticos da cidade: \n");
      scanf("%d", &pontos_turisticos2);
        getchar();



// Área de cálculos

// Cálculo do PIB per capita e densidade populacional das carta  1 e 2

  float dens_pop1 = pop1/area1;
  float pib_per_capita1 = pib1/pop1;

  float dens_pop2 = pop2/area2;
  float pib_per_capita2 = pib2/pop2;

// Cálculo dos resultados
  float dens_pop_inv1 = 1 / dens_pop1;
  float dens_pop_inv2 = 1 / dens_pop2;
  unsigned int super_poder1 = pop1 + area1 + pib1 + pontos_turisticos1 + pib_per_capita1 + dens_pop_inv1;
  unsigned int super_poder2 = pop2 + area2 + pib2 + pontos_turisticos2 + pib_per_capita2 + dens_pop_inv2;
  int resultado_pop, resultado_area, resultado_PIB, resultado_pontos_turisticos, resultado_PIB_per_carpita, resultado_dens_pop_inv, resultado_super_poder;

  resultado_pop = pop1 > pop2;
  resultado_area = area1 > area2;
  resultado_PIB = pib1 > pib2;
  resultado_pontos_turisticos = pontos_turisticos1 > pontos_turisticos2;
  resultado_PIB_per_carpita = pib_per_capita1 > pib_per_capita2;
  resultado_dens_pop_inv = dens_pop_inv1 > dens_pop_inv2;
  resultado_super_poder = super_poder1 > super_poder2;


// Área para exibição dos dados da carta 1

    printf("\n=== CARTA CADASTRADA ===\n\n");

    printf("Carta: %d \n", numero_carta1 );

    printf("Código da carta: %s \n", codigo_carta1);

    printf("UF: %s \n", UF1);

    printf("Nome da cidade: %s \n", cidade1);

    printf("População: %d \n", pop1);

    printf("Área: %.2f \n", area1);

    printf("PIB: %.3f \n", pib1);

    printf("Pontos turísticos: %d \n", pontos_turisticos1);

    printf("Densidade populacional: %.2f hab/km² \n", dens_pop1);

    printf("PIB per Capita: %.2f reais \n", pib_per_capita1);



// Área para exibição dos dados da carta 2
    printf("\n=== CARTA CADASTRADA ===\n\n");

    printf("Carta: %d \n", numero_carta2 );

    printf("Código da carta: %s \n", codigo_carta2);

    printf("UF: %s \n", UF2);

    printf("Nome da cidade: %s \n", cidade2);

    printf("População: %d \n", pop2);

    printf("Área: %.2f \n", area2);

    printf("PIB: %.3f \n", pib2);

    printf("Pontos turísticos: %d \n", pontos_turisticos2);
    
    printf("Densidade populacional: %.2f hab/km² \n", dens_pop2);

    printf("PIB per Capita: %.2f reais \n", pib_per_capita2);



return 0;
} 