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

     double superPoder1 , superPoder2;

     float inversoDensidade1, inversoDensidade2;

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
     printf("\n");
     printf("Carta 1: \n");
     printf("Estado: %s\n", estado);
     printf("Código da carta: %s%s\n", estado, codigo_carta);
     printf("Nome da Cidade: %s \n", nome_cidade);
     printf("População: %i \n", populacao);
     printf("Área: %.2f km² \n", area_km);
     printf("PIB: R$ %.2lf \n", pib);
     printf("Número de Pontos Turísticos: %d \n", pontos_turisticos);
     printf("Densidade Populacional: %.2f hab/km²\n", densidadePop1);
     printf("PIB per Capita:R$ %.2f \n", rendaPcp1);

     printf("\n \n");
     printf("Carta 2: \n");
     printf("Estado: %s\n", estado2);
     printf("Código da carta: %s%s \n", estado2, codigo_carta2);
     printf("Nome da Cidade: %s \n", nome_cidade2);
     printf("População: %i \n", populacao2);
     printf("Área: %.2f km² \n", area_km2);
     printf("PIB: R$ %.2lf \n", pib2);
     printf("Número de Pontos Turísticos: %d \n", pontos_turisticos2);
     printf("Densidade Populacional: %.2f hab/km² \n", densidadePop2);
     printf("PIB per Capita: R$ %.2f \n", rendaPcp2);

     // Comparação final usando um dos atributos. Aqui informamos os dados de cada carta do qual será realizada a comparação.
     printf("\n \n");
     printf("Comparação das cartas (Atributo: Densidade Populacional):\n");
     printf("Carta %s%s - %s (%s): %.2f hab/km²\n", estado, codigo_carta, nome_cidade,estado, densidadePop1);
     printf("Carta %s%s - %s (%s): %.2f hab/km²\n", estado2, codigo_carta2,nome_cidade2, estado2, densidadePop2);
     // utilizamos if e else para comparar as informações e imprimir na tela o resultado que for correto. 
     if(densidadePop1 < densidadePop2){
        printf("Resultado: Carta %s%s (%s) venceu!", estado, codigo_carta, nome_cidade);
     } else {
        printf("Resultado: Carta %s%s (%s) venceu!", estado2, codigo_carta2, nome_cidade2);
     }

     return 0;
 }
