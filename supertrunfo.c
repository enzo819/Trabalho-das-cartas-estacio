#include <stdio.h>

int main(){
char estado = 'B';
char codigo[20] = "B03";
char cidade[20] = "Brasília";
int populacao = 2817068;
double area = 5789.16;
float pib = 265.84;
int Pontosturisticos = 30;
float densidadepopulacional = populacao / area;
float pibpercapita = pib / populacao;

//*Variáveis e formatos da carta 1:

printf("Carta 1:\n");
printf("Estado: %c\n" , estado);
printf("Código: %s\n" , codigo);
printf("Cidade: %s\n" , cidade);
printf("População: %d\n" , populacao);
printf("Área em km2: %f\n", area);
printf("Pib: %f\n" , pib);
printf("Número de pontos turísticos: %d\n" , Pontosturisticos);
printf("Densidade populacional: %f\n" , densidadepopulacional);
printf("Pib per capita: %f\n" , pibpercapita);

//*Saida de dados da carta 1:

char estadO ='C';
char codigO[20] = "C02";
char cidadE[20] = "Cuiabá";
int populacaO = 623000;
double areA = 4327.448;
double piB = 237.0000000;
int pontosturisticoS = 16;
float desnsidadepopulacionaL = populacaO / areA;
float pibpercapitA = piB / populacaO;

//*Variáveis e formatos da carta 2:

printf("Carta 2:\n");
printf("Estado: %c\n" , estadO);
printf("Código: %s\n" , codigO);
printf("Cidade: %s\n" , cidadE);
printf("População: %d\n" , populacaO);
printf("Área em Km2: %f\n" , areA);
printf("Pib: %f\n" , piB);
printf("Número de pontos turísticos: %d\n" , pontosturisticoS);
printf("Densidade Populacional: %f\n" , desnsidadepopulacionaL);
printf("Pib per capita: %f\n" , pibpercapitA);

//*Saida de dados da carta 2:


return 0;

}