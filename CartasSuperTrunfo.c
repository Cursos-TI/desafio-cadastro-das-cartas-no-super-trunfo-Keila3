#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
    //Difinição de variaveis
         char estado;
         int cidade;
         int populacao;
         float area;
         float pib;
         int pontos_turistico;
         float densidade;
         float pib_per_capita;

        // Cadastro das Cartas:
        printf("Cadastre as informações da carta:\n");
        
        //Cadastro do codigo da carta
        printf("Siga as instruções, e digite o código da carta:\n");
        printf("Digite uma letra de A a H, para representar o estado:\n");
        scanf(" %c", &estado);
        printf("Digite um número de 1 a 4, para representar a cidade:\n");
        scanf("%d", &cidade);

        //cadastro população
        printf("Digite a população:\n");
        scanf("%d", &populacao);

        //Cadastro de Área
        printf("Digite a Área em km²\n");
        scanf("%f", &area);

        //Cadastro PIB
        printf("Digite o PIB em bilhões\n");
        scanf("%f", &pib);

        // Cadastro Número de pontos turisticos
        printf("Digite o número de pontos turísticos:\n");
        scanf("%d", &pontos_turistico);

        // Calculo densidade populacional
        densidade = (float) populacao / area;
       
        //Calculo PIB per capita
        pib_per_capita = (float) pib / populacao;

       // Exibição dos Dados das Cartas:
        printf("\nDados da carta cadastrada:\n");
        printf("Código da carta: %c%02d\n", estado, cidade);
        printf("Estado: %c\n", estado);
        printf("Cidade: %d\n", cidade);
        printf("População: %d\n", populacao);
        printf("Área: %.2f km²\n", area);
        printf("Densidade populacional: %.2f\n", densidade);
        printf("PIB: %.2f Bilhões\n", pib);
        printf("PIB per capita: %.6f\n", pib_per_capita);
        printf("Número de pontos túristicos: %d\n", pontos_turistico);

 

    return 0;
}