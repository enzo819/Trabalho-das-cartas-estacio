#include <stdio.h>

int main()
{
    char nome[30] = "Carta 1";
    char estado = 'B';
    char codigo[20] = "B03";
    char cidade[20] = "Brasília";
    unsigned long int populacao = 2817068;
    float area = 5789.16;
    float pib = 265.84;
    int Pontosturisticos = 30;
    float densidadepopulacional = populacao / area;
    float pibpercapita = pib / populacao;
    float superPoder = populacao + area + pib + Pontosturisticos + pibpercapita + (area / populacao);





    //*Variáveis e formatos da carta 1:

    printf("%s:\n", nome);
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %ld\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de pontos turísticos: %d\n", Pontosturisticos);
    printf("Densidade populacional: %f hab/km²\n", densidadepopulacional);
    printf("Pib per capita: %f reais\n", pibpercapita);
    printf("Super poder: %f\n", superPoder);

    //*Saida de dados da carta 1:

    char nomE[30] = "Carta 2";
    char estadO = 'C';
    char codigO[20] = "C02";
    char cidadE[20] = "Cuiabá";
    unsigned long int populacaO = 623000;
    float areA = 4327.44;
    float piB = 237.00;
    int pontosturisticoS = 16;
    float desnsidadepopulacionaL = populacaO / areA;
    float pibpercapitA = piB / populacaO;
    float Superpoder = populacaO + areA + piB + pontosturisticoS + pibpercapitA + (areA / populacaO);
   

    //*Variáveis e formatos da carta 2:

    printf("%s:\n", nomE);
    printf("Estado: %c\n", estadO);
    printf("Código: %s\n", codigO);
    printf("Cidade: %s\n", cidadE);
    printf("População: %ld\n", populacaO);
    printf("Área: %.2f km²\n", areA);
    printf("PIB: %.2f bilhões de reais\n", piB);
    printf("Número de pontos turísticos: %d\n", pontosturisticoS);
    printf("Densidade Populacional: %f hab/km²\n", desnsidadepopulacionaL);
    printf("Pib per capita: %f reais\n", pibpercapitA);
    printf("Super Poder: %f\n", Superpoder);

    //*Variáveis e formatos da carta 2

    printf("Comparação das cartas:\n");
    printf("População: Carta 1 venceu %u\n", (populacao > populacaO));
    printf("Área: Carta 1 venceu %u\n", area > areA);
    printf("Pib: Carta 1 venceu %u\n", pib > piB);
    printf("Pontos Turísticos: Carta 1 venceu %u\n", Pontosturisticos > pontosturisticoS);
    printf("Densidade Populacional: Carta 1 venceu %u\n", densidadepopulacional > desnsidadepopulacionaL);
    printf("PIB per capita: Carta 2 venceu %u\n", pibpercapita > pibpercapitA);
    printf("Super Poder: Carta 1 venceu %u\n", superPoder > Superpoder);

    //*Comparação das cartas;



 return 0;

}