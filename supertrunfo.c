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

    printf("Comparação das cartas(Atributo População):\n");
    if (populacao > populacaO)
    {printf("Carta 1 - Brasília(DF: 28.170.68 Venceu!)\n");
    }else
    {printf("Carta 2 - Cuiabá(MT: 623.000 Venceu!)\n");
    }
    
    printf("Comparação das cartas(Atributo Área):\n");
    if (area > areA)
    {printf("Carta 1 - Brasília(DF: 5789.16km²  Venceu!)\n");
    }else
    {printf("Carta 2 - Cuiabá(MT: 4327.44km² Venceu!)\n");
    }

    printf("Comparação das cartas(Atributo Pib):\n");
    if (pib > piB)
    {printf("Carta 1 - Brasília(DF: 265.84 bilhões de reais  Venceu!)\n");
    }else
    {printf("Carta 2 - Cuiabá(MT: 237.00 bilhões de reais Venceu!)\n");
    }
    
    printf("Comparação das cartas(Atributo Pontos turísticos):\n");
    if (Pontosturisticos > pontosturisticoS)
    {printf("Carta 1 - Brasília(DF:30 pontos Venceu!)\n");
    }else
    {printf("Carta 2 - Cuiabá(MT:16 pontos Venceu!)\n");
    }
    
    printf("Comparação das cartas(Atributo Densidade Populacional):\n");
    if (densidadepopulacional > desnsidadepopulacionaL)
    {printf("Carta 1 - Brasília(DF:486.610840 hab/km² Venceu!)\n");
    }else
    {printf("Carta 2 - Cuiabá(MT:143.965027 hab/km² Venceu!)\n");
    }
    
    printf("Comparação das cartas(Atributo Pib per capita):\n");
    if (pibpercapita > pibpercapitA)
    printf("Carta 1 - Brasília(DF:0.00094 reais Venceu!)\n");
    }else
    {printf("Carta 2 - Cuiabá(MT:0.000380 reais Venceu!)\n");
    }
    

    printf("Comparação das cartas(Atributo Super Poder):\n");
    if (superPoder > Superpoder)
    {printf("Carta 1 - Brasília(DF:28231530000 Venceu!)\n");
    }else
    {printf("Carta 2 - Cuiabá(MT:627580437500 Venceu!)\n");
    }
    
    //*Comparação das cartas;



 return 0;

}