#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
    //Difinição de variaveis
         char estado1, estado2;
         int cidade1, cidade2;
         int populacao1, populacao2;
         float area1, area2;
         float pib1, pib2;
         int pontos_turistico1, pontos_turistico2;
         float densidade1, densidade2;
         float pib_per_capita1, pib_per_capita2;
         float super_poder1, super_poder2;
         int Vitoria_carta1 = 0, Vitoria_carta2 = 0;

        // Cadastro da Carta carta 1:
        printf("Cadastre as informações da carta 1:\n");
        
        //Cadastro do codigo da carta
        printf("Siga as instruções, e digite o código da carta:\n");
        printf("Digite uma letra de A a H, para representar o estado:\n");
        scanf(" %c", &estado1);
        printf("Digite um número de 1 a 4, para representar a cidade:\n");
        scanf("%d", &cidade1);

        //cadastro população
        printf("Digite a população:\n");
        scanf("%d", &populacao1);

        //Cadastro de Área
        printf("Digite a Área em km²\n");
        scanf("%f", &area1);

        //Cadastro PIB
        printf("Digite o PIB em bilhões\n");
        scanf("%f", &pib1);

        // Cadastro Número de pontos turisticos
        printf("Digite o número de pontos turísticos:\n");
        scanf("%d", &pontos_turistico1);

        // Calculo densidade populacional
        densidade1 = (float) populacao1 / area1;
       
        //Calculo PIB per capita
        pib_per_capita1 = (float) pib1 / populacao1;

         // Cadastro da Carta carta 2:
        printf("Cadastre as informações da carta 2:\n");
        
        //Cadastro do codigo da carta
        printf("Siga as instruções, e digite o código da carta:\n");
        printf("Digite uma letra de A a H, para representar o estado:\n");
        scanf(" %c", &estado2);
        printf("Digite um número de 1 a 4, para representar a cidade:\n");
        scanf("%d", &cidade2);

        //cadastro população
        printf("Digite a população:\n");
        scanf("%d", &populacao2);

        //Cadastro de Área
        printf("Digite a Área em km²\n");
        scanf("%f", &area2);

        //Cadastro PIB
        printf("Digite o PIB em bilhões\n");
        scanf("%f", &pib2);

        // Cadastro Número de pontos turisticos
        printf("Digite o número de pontos turísticos:\n");
        scanf("%d", &pontos_turistico2);

        // Calculo densidade populacional
        densidade2 = (float) populacao2 / area2;
       
        //Calculo PIB per capita
        pib_per_capita2 = (float) pib2 / populacao2;

       // Exibição dos Dados das Cartas 1:
        printf("\nDados cadastrado da carta 1:\n");
        printf("Código da carta: %c%02d\n", estado1, cidade1);
        printf("Estado: %c\n", estado1);
        printf("Cidade: %d\n", cidade1);
        printf("População: %d\n", populacao1);
        printf("Área: %.2f km²\n", area1);
        printf("Densidade populacional: %.2f\n", densidade1);
        printf("PIB: %.2f Bilhões\n", pib1);
        printf("PIB per capita: %.6f\n", pib_per_capita1);
        printf("Número de pontos túristicos: %d\n", pontos_turistico1);

        // Exibição dos Dados das Cartas 2:
        printf("\nDados cadastrado da carta 2:\n");
        printf("Código da carta: %c%02d\n", estado2, cidade2);
        printf("Estado: %c\n", estado2);
        printf("Cidade: %d\n", cidade2);
        printf("População: %d\n", populacao2);
        printf("Área: %.2f km²\n", area2);
        printf("Densidade populacional: %.2f\n", densidade2);
        printf("PIB: %.2f Bilhões\n", pib2);
        printf("PIB per capita: %.6f\n", pib_per_capita2);
        printf("Número de pontos túristicos: %d\n", pontos_turistico2);

        //super poder da carta
        super_poder1 = area1 + populacao1 + pib1 + pontos_turistico1;
        super_poder2 = area2 + populacao2 + pib2 + pontos_turistico2;

        //comparação densidade: a menor vence
        Vitoria_carta1 += (densidade1 < densidade2);
        Vitoria_carta2 += (densidade2 < densidade1);


        //Comparação de cartas: a maior vence
        Vitoria_carta1 += (populacao1 > populacao2);
        Vitoria_carta2 += (populacao2 > populacao1);
        Vitoria_carta1 += (area1 > area2);
        Vitoria_carta2 += (area2 > area1);
        Vitoria_carta1 += (pib1 > pib2);
        Vitoria_carta2 += (pib2 > pib1);
        Vitoria_carta1 += (pib_per_capita1 > pib_per_capita2);
        Vitoria_carta2 += (pib_per_capita2 > pib_per_capita1);
        Vitoria_carta1 += (super_poder1 > super_poder2);
        Vitoria_carta2 += (super_poder2 > super_poder1);

        //exibição de resultados final
        printf("Resultado da comparação:\n");
        printf("Carta 1 ganhou %d\n", Vitoria_carta1);
        printf("Carta 2 ganhou %d\n", Vitoria_carta2);

        


    return 0;
}