# include <stdio.h>

 int main(){
     //variaveis para armazenar os dados da carta 1
     //foi alterado o tipo de variavel que armazenada a sigla do estado, para que fique registrado a UF do estado corretamente.
     char estado[50];
     char codigo_carta[50];
     char nome_cidade[50];
     int populacao, pontos_turisticos;
     double pib;
     float area_km, densidadePop1, rendaPcp1;
     //variaveis para armazenar os dados da carta 2
     char estado2[50];
     char codigo_carta2[50];
     char nome_cidade2[50];
     int populacao2, pontos_turisticos2;
     double pib2;
     float area_km2, densidadePop2, rendaPcp2;


     //captação das informações das cartas
     printf("Vamos jogar um jogo!\n");
     printf("Para darmos inicio, preciso que me ajude realizando o cadastro de duas cartas que farão parte do nosso jogo.\nNessas cartas você irá registrar informações sobre duas cidades de sua escolha.\nBom, vamos lá!\n");
     printf("Digite a sigla(UF) do Estado em que a cidade se localiza (ex: São Paulo, digite apenas a letra -> SP):\n");
     scanf("%s", estado);
     printf("Digite um número para esta carta de 01 a 04:\n");
     scanf("%s", codigo_carta);
     printf("Digite o nome da Cidade:\n");
     scanf("%s", nome_cidade);
     printf("Esta cidade possui quantos habitantes?\n");
     scanf("%i", &populacao);
     printf("Agora digite a área da cidade em quilômetros quadrados (ex: 100):\n");
     scanf("%f", &area_km);
     printf("Qual o valor do Produto Interno Brunto(PIB) da cidade?\n");
     scanf("%lf", &pib);
     printf("E para finalizar, conte-nos a quantidade de pontos turísticos que existem nessa cidade:\n");
     scanf("%d", &pontos_turisticos);
      
     printf("Agora vamos para o cadastro da segunda carta\n");
     printf("Digite a sigla(UF) do Estado em que a cidade se localiza (ex: São Paulo, digite apenas a letra -> SP):\n");
     scanf("%s", estado2);
     printf("Digite um número para esta carta de 01 a 04:\n");
     scanf("%s", codigo_carta2);
     printf("Digite o nome da Cidade:\n");
     scanf("%s", nome_cidade2);
     printf("Esta cidade possui quantos habitantes?\n");
     scanf("%i", &populacao2);
     printf("Agora digite a área da cidade em quilômetros quadrados (ex: 100):\n");
     scanf("%f", &area_km2);
     printf("Qual o valor do Produto Interno Brunto(PIB) da cidade?\n");
     scanf("%lf", &pib2);
     printf("E para finalizar, conte-nos a quantidade de pontos turísticos que existem nessa cidade:\n");
     scanf("%d", &pontos_turisticos2);

     //calculo da médida para densidade populacional e renda per capita
     densidadePop1 = (float)populacao / area_km;
     rendaPcp1 = pib / (float)populacao;
     densidadePop2 = (float)populacao2 / area_km2;
     rendaPcp2 = pib2 / (float)populacao2;

     //exibição das cartas e suas informações
   // ### deixei esse campo comentado para que o jogador não antecipe visualmente a comparação dos valores atribuidos a cada carta!!###
   
   //   printf("\n");
   //   printf("Carta 1: \n");
   //   printf("Estado: %s\n", estado);
   //   printf("Código da carta: %s%s\n", estado, codigo_carta);
   //   printf("Nome da Cidade: %s \n", nome_cidade);
   //   printf("População: %i \n", populacao);
   //   printf("Área: %.2f km² \n", area_km);
   //   printf("PIB: R$ %.2lf \n", pib);
   //   printf("Número de Pontos Turísticos: %d \n", pontos_turisticos);
   //   printf("Densidade Populacional: %.2f hab/km²\n", densidadePop1);
   //   printf("PIB per Capita:R$ %.2f \n", rendaPcp1);

   //   printf("\n \n");
   //   printf("Carta 2: \n");
   //   printf("Estado: %s\n", estado2);
   //   printf("Código da carta: %s%s \n", estado2, codigo_carta2);
   //   printf("Nome da Cidade: %s \n", nome_cidade2);
   //   printf("População: %i \n", populacao2);
   //   printf("Área: %.2f km² \n", area_km2);
   //   printf("PIB: R$ %.2lf \n", pib2);
   //   printf("Número de Pontos Turísticos: %d \n", pontos_turisticos2);
   //   printf("Densidade Populacional: %.2f hab/km² \n", densidadePop2);
   //   printf("PIB per Capita: R$ %.2f \n", rendaPcp2);

     printf("\n \n");

      int primeiraEscolha, segundaEscolha;
     
      // Menu de opções onde o jogador pode escolher qual atributo será usado para comparação.
      printf("***Jogo de Cartas Super trunfo***\n");
      printf("Escolha um atributo para realizar a comparação das cartas:\n");
      printf("1. População\n");
      printf("2. Área\n");
      printf("3. PIB\n");
      printf("4. Número de pontos turísticos\n");
      printf("5. Densidade populacional\n");
      printf("Escolha:\n");
      scanf("%d", &primeiraEscolha);

      // define a primeira escolha do jogador e gera o menu para segunda opção.
      printf("Escolha o segundo atributo para realizar a comparação das cartas:\n");
      switch (primeiraEscolha)
      {
         case 1:
            printf("2. Área\n");
            printf("3. PIB\n");
            printf("4. Número de pontos turísticos\n");
            printf("5. Densidade populacional\n");
            break;
         case 2:
            printf("1. População\n");
            printf("3. PIB\n");
            printf("4. Número de pontos turísticos\n");
            printf("5. Densidade populacional\n");
            break;
         case 3:
            printf("1. População\n");
            printf("2. Área\n");
            printf("4. Número de pontos turísticos\n");
            printf("5. Densidade populacional\n");
            break;
         case 4:
            printf("1. População\n");
            printf("2. Área\n");
            printf("3. PIB\n");
            printf("5. Densidade populacional\n");
            break;
         case 5:
            printf("1. População\n");
            printf("2. Área\n");
            printf("3. PIB\n");
            printf("4. Número de pontos turísticos\n");
            break;
         default:
            printf("Opção inválida!\n");
            break;
      }
      //registra a segunda escolha do usuario
      printf("Escolha:\n");
      scanf("%d", &segundaEscolha);

      //informa quais atributos foram escolhidos pelo jogador
      printf("Os atributos escolhidos foram %d e %d \n\n", primeiraEscolha, segundaEscolha);





   //de acordo com a escolha do jogador é realizado a comparação e exibido as informações das cartas e qual delas é a vencedora.
      int result_1escolha, result_2escolha;
      float carta1_escolha1, carta2_escolha1, carta1_escolha2, carta2_escolha2;
      char nomeAtributo1[50];
      char nomeAtributo2[50];
   
      switch (primeiraEscolha)
      {
         case 1:
            result_1escolha = populacao > populacao2 ? 1 : 0;
            carta1_escolha1 = populacao;
            carta1_escolha2 = populacao2;
           
            break;
         case 2:
            result_1escolha = area_km > area_km2 ? 1 : 0;
            carta1_escolha1 = area_km;
            carta1_escolha2 = area_km2;
            break;
         case 3:
            result_1escolha = pib > pib2 ? 1 : 0;
            carta1_escolha1 = pib;
            carta1_escolha2 = pib2;
            break;
         case 4:
            result_1escolha = pontos_turisticos > pontos_turisticos2 ? 1 : 0;
            carta1_escolha1 = pontos_turisticos;
            carta1_escolha2 = pontos_turisticos2;
            break;
         case 5:
            result_1escolha = densidadePop1 < densidadePop2 ? 1 : 0;
            carta1_escolha1 = densidadePop1;
            carta1_escolha2 = densidadePop2;
            break;
         default:
            break;
      }

      switch (segundaEscolha)
      {
         case 1:
            result_2escolha = populacao > populacao2 ? 1 : 0;
            carta2_escolha1 = populacao;
            carta2_escolha2 = populacao2;
            break;
         case 2:
            result_2escolha = area_km > area_km2 ? 1 : 0;
            carta2_escolha1 = area_km;
            carta2_escolha2 = area_km2;
            break;
         case 3:
            result_2escolha = pib > pib2 ? 1 : 0;
            carta2_escolha1 = pib;
            carta2_escolha2 = pib2;
            break;
         case 4:
            result_2escolha = pontos_turisticos > pontos_turisticos2 ? 1 : 0;
            carta2_escolha1 = pontos_turisticos;
            carta2_escolha2 = pontos_turisticos2;
            break;
         case 5:
            result_2escolha = densidadePop1 < densidadePop2 ? 1 : 0;
            carta2_escolha1 = densidadePop1;
            carta2_escolha2 = densidadePop2;
            break;
         default:
            break;
      }

      float somaEscolha1 = carta1_escolha1 + carta2_escolha1;
      float somaEscolha2 = carta2_escolha2 + carta1_escolha2;

      printf("A primeira comparação será o atributo de número %d!\n", primeiraEscolha);
      printf("Carta %s%s%s: %.2f e carta %s%s%s: %.2f\n", estado, codigo_carta, nome_cidade, carta1_escolha1, estado2, codigo_carta2, nome_cidade2, carta1_escolha2);
      
      if (result_1escolha == 1) {
         printf("Cartas %s%s%s venceu o primeiro atributo!\n", estado, codigo_carta, nome_cidade);
      } else {
         printf("Cartas %s%s%s venceu o primeiro atributo! \n", estado2, codigo_carta2, nome_cidade2);
      }
      
      printf("A segunda comparação será o atributo de número %d!\n", segundaEscolha);
      printf("Carta %s%s%s: %.2f e carta %s%s%s: %.2f\n", estado, codigo_carta, nome_cidade, carta2_escolha1, estado2, codigo_carta2, nome_cidade2, carta2_escolha2);

       if(result_2escolha == 1) {
         printf("Cartas %s%s%s venceu o segundo atributo!\n", estado, codigo_carta, nome_cidade);
      } else {
         printf("Cartas %s%s%s venceu o segundo atributo! \n", estado2, codigo_carta2, nome_cidade2);
      }
      
      printf("Se fizermos as somas dos atributos %d e %d!\n", primeiraEscolha, segundaEscolha);
      printf("Carta %s%s%s: %.2f e carta %s%s%s: %.2f\n", estado, codigo_carta, nome_cidade, somaEscolha1, estado2, codigo_carta2, nome_cidade2, somaEscolha2);

      if(somaEscolha1 > somaEscolha2) {
         printf("Cartas %s%s%s venceu na soma dos atributos! \n", estado, codigo_carta, nome_cidade);
      } else if(somaEscolha1 < somaEscolha2) {
         printf("Cartas %s%s%s venceu na soma dos atributos! \n", estado2, codigo_carta2, nome_cidade2);
      } else {
           printf("Carta %s%s%s e carta %s%s%s empataram!\n", estado, codigo_carta, nome_cidade, estado2, codigo_carta2, nome_cidade2);
      }
     return 0;
 }
