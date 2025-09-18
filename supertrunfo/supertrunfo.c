#include <stdio.h>
#include <string.h>

int main() {

    int carta, populacao, pts_turisticos, carta2, populacao2, pts_turisticos2;
    char estado, cod_carta[15], cidade[30], estado2, cod_carta2[15], cidade2[30];
    float pib, area, pib2, area2;

    //coleta dos dados das cartas
    //carta 1
    printf("Vamos montar a primeira carta!\n");
    printf("Digite o número da carta 1: ");
    scanf("%i", &carta);

    printf("Digite o código da carta 1: ");
    scanf("%s", &cod_carta);

    printf("Digite a inicial do Estado 1: ");
    scanf(" %c", &estado);

    printf("Digite o nome da cidade 1: ");
    scanf("%s", &cidade);

    printf("Digite a população da cidade 1: ");
    scanf("%i", &populacao);

    printf("Digite a área da cidade 1: ");
    scanf("%f", &area);

    printf("Digite o PIB da cidade 1: ");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos da cidade 1: ");
    scanf("%i", &pts_turisticos);

    //carta 2
    printf("\nFinalizada carta 1, agora montaremos a carta 2!\n");

    printf("Digite o número da carta 2: ");
    scanf("%i", &carta2);

    printf("Digite o código da carta 2: ");
    scanf("%s", &cod_carta2);

    printf("Digite a inicial do Estado 2: ");
    scanf(" %c", &estado2);

    printf("Digite o nome da cidade 2: ");
    scanf("%s", &cidade2);

    printf("Digite a população da cidade 2: ");
    scanf("%i", &populacao2);

    printf("Digite a área da cidade 2: ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade 2: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da cidade 2: ");
    scanf("%i", &pts_turisticos2);

    // comparação das cartas
    printf("\nVamos comparar? Que comece o duelo!!!\n");
    printf("*************************\n");
    printf("Número da carta: %i\n", carta);
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", cod_carta);
    printf("Nome da cidade: %s\n", cidade);
    printf("População: %i hab.\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: R$ %.2f\n", pib);
    printf("Número de pontos turísticos: %i\n", pts_turisticos);
    printf("\n************VS***********\n");
    printf("CARTA %i\n", carta2);
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", cod_carta2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %i hab.\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f\n", pib2);
    printf("Número de pontos turísticos: %i\n", pts_turisticos2);

    return 0;
}
