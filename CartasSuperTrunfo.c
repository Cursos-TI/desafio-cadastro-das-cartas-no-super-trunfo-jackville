#include <stdio.h>

int main (){

    char estado1;
    char estado2;
    char codigodacarta1[4];
    char codigodacarta2[4];
    char nomedacidade1[15];
    char nomedacidade2[15];
    int populacao1;
    int populacao2;
    float area1;
    float area2;
    float pib1;
    float pib2;
    int pontosturisticos1;
    int pontosturisticos2;

    printf("Bem vindo ao sistema de cartas!\n");
    printf("Você irá cadastrar informações de duas cartas diferentes!\n\n");

    // CARTA 01 - INFORMAÇÕES
    printf("Carta 1\n");

    printf("Digite uma letra de 'A' a 'H' (representando um estado)\n");
    scanf(" %c", &estado1);

    printf("Repita a letra do estado, e acrescente um número de '01' a '04'\n");
    scanf("%4s", codigodacarta1);

    printf("Digite o nome de uma cidade!");
    scanf("%s", nomedacidade1);

    printf("Digite o número de habitantes da cidade!\n");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade em quilômetros quadrado(km²)!\n");
    scanf("%f", &area1);

    printf("Digite o valor do produto interno bruto(PIB) da cidade!\n");
    scanf("%f", &pib1);

    printf("Digite em números, a quantidade de pontos turísticos da cidade!\n");
    scanf("%d", &pontosturisticos1);

    printf("Informações Cadastradas com sucesso!\n");


    // CARTA 02 - INFORMAÇÕES
    printf("\nInsira as informações da carta 2!\n");

    printf("Digite uma letra de 'A' a 'H' (representando um estado)\n");
    scanf(" %c", &estado2);

    printf("Repita a letra do estado, e acrescente um número de '01' a '04'\n");
    scanf("%4s", codigodacarta2);

    printf("Digite o nome de uma cidade!\n");
    scanf("%s", nomedacidade2);

    printf("Digite o número de habitantes da cidade!\n");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade em quilômetros quadrado(km²)!\n");
    scanf("%f", &area2);

    printf("Digite o valor do produto interno bruto(PIB) da cidade!\n");
    scanf("%f", &pib2);

    printf("Digite em números, a quantidade de pontos turísticos da cidade!\n");
    scanf("%d", &pontosturisticos2);

    // SAÍDA DE DADOS CADASTRADOS!
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigodacarta1);
    printf("Nome da Cidade: %s\n", nomedacidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2fkm²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigodacarta2);
    printf("Nome da Cidade: %s\n", nomedacidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2fkm²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos2);

    return 0;
}