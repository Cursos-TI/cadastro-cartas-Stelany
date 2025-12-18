# include <stdio.h>

 int main(){
     //variaveis para armazenar os dados da carta 1
     char estado;
     char codigo_carta[50];
     char nome_cidade[50];
     int populacao, pontos_turisticos;
     float area_km, pib;
     //variaveis para armazenar os dados da carta 2
     char estado2;
     char codigo_carta2[50];
     char nome_cidade2[50];
     int populacao2, pontos_turisticos2;
     float area_km2, pib2;

     //captação das informações das cartas
     printf("Vamos jogar um jogo!\n");
     printf("Para darmos inicio, preciso que me ajude realizando o cadastro de duas cartas que farão parte do nosso jogo.\nNessas cartas você irá registrar informações sobre duas cidades de sua escolha.\nBom, vamos lá!\n");
     printf("Digite a inicial do Estado em que a cidade se localiza (ex: São Paulo, digite apenas a letra -> S):\n");
     scanf(" %c", &estado);
     printf("Digite um número para esta carta de 01 a 04:\n");
     scanf("%s", codigo_carta);
     printf("Digite o nome da Cidade:\n");
     scanf("%s", nome_cidade);
     printf("Esta cidade possui quantos habitantes?\n");
     scanf("%i", &populacao);
     printf("Agora digite a área da cidade em quilômetros quadrados (ex: 100):\n");
     scanf("%f", &area_km);
     printf("Qual o valor do Produto Interno Brunto(PIB) da cidade?\n");
     scanf("%f", &pib);
     printf("E para finalizar, conte-nos a quantidade de pontos turísticos que existem nessa cidade:\n");
     scanf("%d", &pontos_turisticos);
      
     printf("Agora vamos para o cadastro da segunda carta\n");
     printf("Digite a inicial do Estado em que a cidade se localiza (ex: São Paulo, digite apenas a letra -> S):\n");
     scanf(" %c", &estado2);
     printf("Digite um número para esta carta de 01 a 04:\n");
     scanf("%s", codigo_carta2);
     printf("Digite o nome da Cidade:\n");
     scanf("%s", nome_cidade2);
     printf("Esta cidade possui quantos habitantes?\n");
     scanf("%i", &populacao2);
     printf("Agora digite a área da cidade em quilômetros quadrados (ex: 100):\n");
     scanf("%f", &area_km2);
     printf("Qual o valor do Produto Interno Brunto(PIB) da cidade?\n");
     scanf("%f", &pib2);
     printf("E para finalizar, conte-nos a quantidade de pontos turísticos que existem nessa cidade:\n");
     scanf("%d", &pontos_turisticos2);
     
     //exibição das cartas e suas informações
     printf("\n");
     printf("Carta 1: \n");
     printf("Estado: %c\n", estado);
     printf("Código da carta: %c%s\n", estado, codigo_carta);
     printf("Nome da Cidade: %s \n", nome_cidade);
     printf("População: %i \n", populacao);
     printf("Área: %.2f km² \n", area_km);
     printf("PIB: %.0f milhões de reais \n", pib);
     printf("Número de Pontos Turísticos: %d \n", pontos_turisticos);

     printf("\n");
     printf("Carta 2: \n");
     printf("Estado: %c\n", estado2);
     printf("Código da carta: %c%s \n", estado2, codigo_carta2);
     printf("Nome da Cidade: %s \n", nome_cidade2);
     printf("População: %i \n", populacao2);
     printf("Área: %.2f km² \n", area_km2);
     printf("PIB: %.0f milhões de reais \n", pib2);
     printf("Número de Pontos Turísticos: %d \n", pontos_turisticos2);

     return 0;
 }
