#include <stdio.h>

int main() {

//Variaveis
char estado1, estado2;
char codigo1[10], codigo2[10];
char cidade1[20], cidade2[20];
int populacao1, populacao2;
float area1, area2;
float PIB1, PIB2;
int pontosturisticos1, pontosturisticos2;


printf ("Registro de Cartas Super Trunfo\n");


//Registro da primeira carta

printf ("Digite os dados da carta 1:\n");
printf ("Digite o estado do estado da carta (A a H): ");
scanf ("%c", &estado1);

printf ("Digite o código da carta ( Código do estado + nº de 01 a 09): \n");
scanf ("%s",codigo1);
getchar(); // Limpa o buffer do teclado

printf ("Digite o nome da cidade: \n");
scanf ("%s", cidade1);

printf ("Digite a população da cidade: \n");
scanf ("%d", &populacao1);

printf ("Digite a área da cidade (em km²): \n");
scanf ("%f", &area1);

printf ("Digite o PIB da cidade (em milhões de R$): \n");
scanf ("%f", &PIB1);

printf ("Digite o número de pontos turísticos da cidade: \n");
scanf ("%d", &pontosturisticos1);

printf("\n====================================================\n");


//Registro da segunda carta
getchar(); // Limpa o buffer do teclado
printf ("Digite os dados da carta 2:\n");
printf ("Digite o estado do estado da carta (A a H): ");
scanf ("%c", &estado2);

printf ("Digite o código da carta ( Código do estado + nº de 01 a 09): \n");
scanf ("%s",codigo2);
getchar(); // Limpa o buffer do teclado

printf ("Digite o nome da cidade: \n");
scanf ("%s", cidade2);

printf ("Digite a população da cidade: \n");
scanf ("%d", &populacao2);

printf ("Digite a área da cidade (em km²): \n");
scanf ("%f", &area2);

printf ("Digite o PIB da cidade (em milhões de R$): \n");
scanf ("%f", &PIB2);

printf ("Digite o número de pontos turísticos da cidade: \n");
scanf ("%d", &pontosturisticos2);   


printf("\n====================================================\n");

//Exibição dos dados das cartas

printf("\nDados da Carta 1:\n");
printf("Estado: %c\n", estado1);
printf("Código: %s\n", codigo1);
printf("Cidade: %s\n", cidade1);
printf("População: %d\n", populacao1);
printf("Área: %.2f km²\n", area1);
printf("PIB: %.2f milhões de R$\n", PIB1);
printf("Pontos turísticos: %d\n", pontosturisticos1);


printf("\nDados da Carta 2:\n");
printf("Estado: %c\n", estado2);
printf("Código: %s\n", codigo2);
printf("Cidade: %s\n", cidade2);
printf("População: %d\n", populacao2);
printf("Área: %.2f km²\n", area2);
printf("PIB: %.2f milhões de R$\n", PIB2);
printf("Pontos turísticos: %d\n", pontosturisticos2);









}